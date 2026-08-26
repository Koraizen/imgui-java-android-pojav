package dev.koraizen.imgui.android;

import java.io.IOException;
import java.io.InputStream;
import java.nio.file.AtomicMoveNotSupportedException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.security.MessageDigest;
import java.util.HexFormat;
import java.util.Locale;
import java.util.logging.Level;
import java.util.logging.Logger;

/** Prepares the Android/Bionic JNI library before the first imgui-java class is initialized. */
public final class AndroidImGuiNativeLoader {
    private static final Logger LOGGER = Logger.getLogger(AndroidImGuiNativeLoader.class.getName());
    private static volatile boolean prepared;

    private AndroidImGuiNativeLoader() {}

    public static synchronized boolean prepare() {
        if (prepared) return true;
        String abi = detectAbi();
        String resource = "/native/android/" + abi + "/libimgui-java64.so";
        try (InputStream input = AndroidImGuiNativeLoader.class.getResourceAsStream(resource)) {
            if (input == null) throw new IOException("Missing native resource: " + resource);
            byte[] bytes = input.readAllBytes();
            String hash = HexFormat.of().formatHex(MessageDigest.getInstance("SHA-256").digest(bytes));
            Path directory = executableTempRoot().resolve("koraizen-imgui-android")
                .resolve("1.90.0").resolve(abi).resolve(hash.substring(0, 16));
            Files.createDirectories(directory);
            Path library = directory.resolve("libimgui-java64.so");
            if (!Files.isRegularFile(library) || Files.size(library) != bytes.length) {
                Path temporary = Files.createTempFile(directory, "imgui-", ".tmp");
                Files.write(temporary, bytes);
                try {
                    Files.move(temporary, library, StandardCopyOption.ATOMIC_MOVE, StandardCopyOption.REPLACE_EXISTING);
                } catch (AtomicMoveNotSupportedException ignored) {
                    Files.move(temporary, library, StandardCopyOption.REPLACE_EXISTING);
                }
            }
            System.setProperty("imgui.library.path", directory.toAbsolutePath().toString());
            System.setProperty("imgui.library.name", "libimgui-java64.so");
            prepared = true;
            LOGGER.info(() -> "Prepared imgui-java Android JNI: abi=" + abi + ", sha256=" + hash);
            return true;
        } catch (Throwable error) {
            LOGGER.log(Level.SEVERE, "Unable to prepare imgui-java Android JNI for " + abi, error);
            return false;
        }
    }

    public static String detectAbi() {
        String arch = System.getProperty("os.arch", "").toLowerCase(Locale.ROOT);
        if (arch.equals("aarch64") || arch.equals("arm64") || arch.equals("arm64-v8a")) return "arm64-v8a";
        if (arch.startsWith("arm") || arch.equals("armeabi-v7a")) return "armeabi-v7a";
        if (arch.equals("x86_64") || arch.equals("amd64")) return "x86_64";
        throw new IllegalStateException("Unsupported Android ABI: " + arch);
    }

    private static Path executableTempRoot() throws IOException {
        String tmp = System.getenv("TMPDIR");
        if (tmp != null && !tmp.isBlank()) {
            Path path = Path.of(tmp).toAbsolutePath().normalize();
            String value = path.toString().replace('\\', '/');
            if ((value.startsWith("/data/user/") || value.startsWith("/data/data/"))
                    && Files.isDirectory(path) && Files.isWritable(path)) return path;
        }
        Path fallback = Path.of(System.getProperty("java.io.tmpdir")).toAbsolutePath().normalize();
        String value = fallback.toString().replace('\\', '/');
        if (value.startsWith("/storage/") || value.startsWith("/sdcard/")) {
            throw new IOException("Shared Android storage may be mounted noexec: " + fallback);
        }
        return fallback;
    }
}

