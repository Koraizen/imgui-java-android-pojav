package example;

import dev.koraizen.imgui.android.AndroidGlProfile;
import dev.koraizen.imgui.android.AndroidImGuiInputBackend;
import dev.koraizen.imgui.android.AndroidImGuiNativeLoader;
import imgui.ImGui;
import imgui.gl3.ImGuiImplGl3;

/** Pseudocode: adapt the callbacks and final-frame hook to your mappings/version. */
public final class IntegrationExample {
    private final ImGuiImplGl3 renderer = new ImGuiImplGl3();

    public void initializeBeforeAnyImGuiCall() {
        if (!AndroidImGuiNativeLoader.prepare()) throw new IllegalStateException("Native load failed");
        ImGui.createContext();
        AndroidImGuiInputBackend.initialize();
        renderer.init(AndroidGlProfile.detect().shaderVersion());
    }

    public void finalFramebufferPass(boolean focused) {
        AndroidImGuiInputBackend.newFrame(focused);
        renderer.newFrame();
        ImGui.newFrame();
        // Draw your existing ImGui UI here.
        ImGui.render();
        renderer.renderDrawData(ImGui.getDrawData());
    }
}

