# Contributing

Thanks for helping improve imgui-java Android/Pojav support.

When reporting a runtime issue, include:

- device, GPU and Android version
- CPU ABI
- PojavLauncher build and selected renderer
- Minecraft/LWJGL/imgui-java versions
- full log from startup through the failure
- whether the same JAR works on desktop

Native changes must build for all supported ABIs. Java changes must keep the
loader callable before `imgui.ImGui` initialization and must not install or
replace the host application's GLFW callbacks.

