#include <imgui_internal_ImGuiWindow.h>

//@line:11

        #include "_common.h"
        #include "_internal.h"
        #define THIS ((ImGuiWindow*)STRUCT_PTR)
     JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiWindow_nGetScrollbarX(JNIEnv* env, jobject object) {


//@line:24

        return THIS->ScrollbarX;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiWindow_nGetScrollbarY(JNIEnv* env, jobject object) {


//@line:35

        return THIS->ScrollbarY;
    

}


//@line:39

        #undef THIS
     