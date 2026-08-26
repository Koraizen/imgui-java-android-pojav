#include <imgui_ImGuiWindowClass.h>

//@line:28

        #include "_common.h"
        #define THIS ((ImGuiWindowClass*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_ImGuiWindowClass_nCreate(JNIEnv* env, jobject object) {


//@line:33

        return (uintptr_t)(new ImGuiWindowClass());
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiWindowClass_nGetClassId(JNIEnv* env, jobject object) {


//@line:51

        return THIS->ClassId;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiWindowClass_nSetClassId(JNIEnv* env, jobject object, jint value) {


//@line:55

        THIS->ClassId = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiWindowClass_nGetParentViewportId(JNIEnv* env, jobject object) {


//@line:75

        return THIS->ParentViewportId;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiWindowClass_nSetParentViewportId(JNIEnv* env, jobject object, jint value) {


//@line:79

        THIS->ParentViewportId = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiWindowClass_nGetFocusRouteParentWindowId(JNIEnv* env, jobject object) {


//@line:97

        return THIS->FocusRouteParentWindowId;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiWindowClass_nSetFocusRouteParentWindowId(JNIEnv* env, jobject object, jint value) {


//@line:101

        THIS->FocusRouteParentWindowId = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiWindowClass_nGetViewportFlagsOverrideSet(JNIEnv* env, jobject object) {


//@line:145

        return THIS->ViewportFlagsOverrideSet;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiWindowClass_nSetViewportFlagsOverrideSet(JNIEnv* env, jobject object, jint value) {


//@line:149

        THIS->ViewportFlagsOverrideSet = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiWindowClass_nGetViewportFlagsOverrideClear(JNIEnv* env, jobject object) {


//@line:193

        return THIS->ViewportFlagsOverrideClear;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiWindowClass_nSetViewportFlagsOverrideClear(JNIEnv* env, jobject object, jint value) {


//@line:197

        THIS->ViewportFlagsOverrideClear = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiWindowClass_nGetTabItemFlagsOverrideSet(JNIEnv* env, jobject object) {


//@line:241

        return THIS->TabItemFlagsOverrideSet;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiWindowClass_nSetTabItemFlagsOverrideSet(JNIEnv* env, jobject object, jint value) {


//@line:245

        THIS->TabItemFlagsOverrideSet = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiWindowClass_nGetDockNodeFlagsOverrideSet(JNIEnv* env, jobject object) {


//@line:284

        return THIS->DockNodeFlagsOverrideSet;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiWindowClass_nSetDockNodeFlagsOverrideSet(JNIEnv* env, jobject object, jint value) {


//@line:288

        THIS->DockNodeFlagsOverrideSet = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiWindowClass_nGetDockingAlwaysTabBar(JNIEnv* env, jobject object) {


//@line:308

        return THIS->DockingAlwaysTabBar;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiWindowClass_nSetDockingAlwaysTabBar(JNIEnv* env, jobject object, jboolean value) {


//@line:312

        THIS->DockingAlwaysTabBar = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiWindowClass_nGetDockingAllowUnclassed(JNIEnv* env, jobject object) {


//@line:330

        return THIS->DockingAllowUnclassed;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiWindowClass_nSetDockingAllowUnclassed(JNIEnv* env, jobject object, jboolean value) {


//@line:334

        THIS->DockingAllowUnclassed = value;
    

}


//@line:338

        #undef THIS
     