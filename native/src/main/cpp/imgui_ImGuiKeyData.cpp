#include <imgui_ImGuiKeyData.h>

//@line:23

        #include "_common.h"
        #define THIS ((ImGuiKeyData*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_ImGuiKeyData_nCreate(JNIEnv* env, jobject object) {


//@line:28

        return (uintptr_t)(new ImGuiKeyData());
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiKeyData_nGetDown(JNIEnv* env, jobject object) {


//@line:46

        return THIS->Down;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiKeyData_nSetDown(JNIEnv* env, jobject object, jboolean value) {


//@line:50

        THIS->Down = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiKeyData_nGetDownDuration(JNIEnv* env, jobject object) {


//@line:68

        return THIS->DownDuration;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiKeyData_nSetDownDuration(JNIEnv* env, jobject object, jfloat value) {


//@line:72

        THIS->DownDuration = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiKeyData_nGetDownDurationPrev(JNIEnv* env, jobject object) {


//@line:90

        return THIS->DownDurationPrev;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiKeyData_nSetDownDurationPrev(JNIEnv* env, jobject object, jfloat value) {


//@line:94

        THIS->DownDurationPrev = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiKeyData_nGetAnalogValue(JNIEnv* env, jobject object) {


//@line:112

        return THIS->AnalogValue;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiKeyData_nSetAnalogValue(JNIEnv* env, jobject object, jfloat value) {


//@line:116

        THIS->AnalogValue = value;
    

}


//@line:120

        #undef THIS
     