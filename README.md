# imgui-java Android / PojavLauncher

Android/Bionic native bindings and a small Java compatibility layer for using
real [imgui-java](https://github.com/SpaiR/imgui-java) interfaces inside
PojavLauncher. No replacement Minecraft GUI and no fake mobile menu.

**Created and maintained by Koraizen.** This work originated while adding
PojavLauncher support to Atlas Client and is published independently so other
Java and Minecraft projects can use it.

## What is included

- Bionic-compatible `imgui-java` 1.90.0 JNI libraries
- `arm64-v8a`, `armeabi-v7a`, and `x86_64` builds
- an ABI-aware native extractor/loader
- a callback-free `ImGuiIO` input bridge for Pojav-hosted applications
- runtime GLSL selection for OpenGL ES and desktop-style contexts
- complete CMake/Android NDK sources for reproducible builds

## Quick start

Add the built library to your project or copy this repository's Java classes
and `native/android` resources. Continue using the normal imgui-java binding
and LWJGL3 modules, but do not use a desktop native artifact on Android.

```groovy
implementation "dev.koraizen.imgui:imgui-java-android-pojav:1.0.0"
implementation "io.github.spair:imgui-java-binding:1.90.0"
implementation "io.github.spair:imgui-java-lwjgl3:1.90.0"
```

The artifact is not on Maven Central yet. Until a repository is published,
use `./gradlew publishToMavenLocal` or include the built JAR directly.

Call the loader **before the first reference to `imgui.ImGui`**:

```java
if (!AndroidImGuiNativeLoader.prepare()) {
    throw new IllegalStateException("Could not prepare Android imgui-java JNI");
}
ImGui.createContext();
AndroidImGuiInputBackend.initialize();
gl3.init(AndroidGlProfile.detect().shaderVersion());
```

Forward the host's cursor, mouse button, wheel, key and character callbacks to
`AndroidImGuiInputBackend`. On every frame call `newFrame(focused)`. Render the
same ImGui draw data in the final framebuffer pass immediately before present.
Minecraft method names differ by version, so see
[`examples/minecraft/IntegrationExample.java`](examples/minecraft/IntegrationExample.java)
for the mapping-independent lifecycle.

## Building the Android libraries

Requirements:

- Android NDK r27d (other recent NDK releases may work)
- CMake 3.22.1+
- Ninja
- JDK 17+

Windows PowerShell:

```powershell
./scripts/build-android.ps1 -NdkRoot "C:\Android\android-ndk-r27d"
```

Linux/macOS:

```bash
export ANDROID_NDK_HOME=/opt/android-ndk-r27d
./scripts/build-android.sh
```

Outputs are copied to:

```text
src/main/resources/native/android/<abi>/libimgui-java64.so
```

Then build the Java/resource JAR:

```bash
./gradlew clean build
```

## Important integration details

- Android uses Bionic libc; a regular Linux/glibc `.so` is not compatible.
- `imgui.library.path` and `imgui.library.name` must be set before ImGui's
  static initializer runs. The included loader handles both properties.
- Shared storage such as `/storage/emulated/0` may be mounted `noexec`; the
  loader prefers Pojav's private `TMPDIR` under `/data/user` or `/data/data`.
- Do not install `ImGuiImplGlfw` callbacks on Pojav. Feed input from the host's
  existing callbacks so Minecraft and ImGui do not overwrite each other.
- Render once in the final framebuffer/present pass. Rendering both in a world
  pass and a present pass causes duplicated or invisible UI.
- Zink, VirGL, GL4ES, LTW and Mesa environments may expose different GL/GLSL
  strings. The included profile selector avoids one hard-coded shader version.

## Tested status

The ARM64 build has rendered an existing desktop ImGui interface successfully
on a real Android device through PojavLauncher. The native files and JNI symbols
for all three ABIs are build-verified. Renderer/device combinations still vary,
so issue reports should include Pojav renderer, device/GPU, Android version,
Minecraft version and the complete log.

## License and attribution

Koraizen's loader, build integration and examples are MIT licensed. Generated
imgui-java/Dear ImGui sources retain their upstream MIT notices. See
[`LICENSE`](LICENSE) and [`THIRD_PARTY_NOTICES.md`](THIRD_PARTY_NOTICES.md).

