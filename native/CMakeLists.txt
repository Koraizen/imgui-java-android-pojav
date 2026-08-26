cmake_minimum_required(VERSION 3.22.1)
project(imgui_java_android LANGUAGES C CXX)

file(GLOB IMGUI_JAVA_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/main/cpp/*.cpp")

add_library(imgui-java64 SHARED ${IMGUI_JAVA_SOURCES})
target_include_directories(imgui-java64 PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src/main/cpp")
target_compile_features(imgui-java64 PRIVATE cxx_std_17)
target_compile_options(imgui-java64 PRIVATE
    -fvisibility=hidden -fexceptions -frtti
    -Wno-unused-parameter -Wno-unused-variable)
target_link_options(imgui-java64 PRIVATE "-Wl,--no-undefined")

