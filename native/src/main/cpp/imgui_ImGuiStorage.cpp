#include <imgui_ImGuiStorage.h>

//@line:29

        #include "_common.h"
        #define THIS ((ImGuiStorage*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_ImGuiStorage_nCreate(JNIEnv* env, jobject object) {


//@line:34

        return (uintptr_t)(new ImGuiStorage());
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStorage_nClear(JNIEnv* env, jobject object) {


//@line:46

        THIS->Clear();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiStorage_nGetInt__I(JNIEnv* env, jobject object, jint key) {


//@line:58

        return THIS->GetInt(key);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiStorage_nGetInt__II(JNIEnv* env, jobject object, jint key, jint defaultVal) {


//@line:62

        return THIS->GetInt(key, defaultVal);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStorage_nSetInt(JNIEnv* env, jobject object, jint key, jint val) {


//@line:70

        THIS->SetInt(key, val);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiStorage_nGetBool__I(JNIEnv* env, jobject object, jint key) {


//@line:82

        return THIS->GetBool(key);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiStorage_nGetBool__IZ(JNIEnv* env, jobject object, jint key, jboolean defaultVal) {


//@line:86

        return THIS->GetBool(key, defaultVal);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStorage_nSetBool(JNIEnv* env, jobject object, jint key, jboolean val) {


//@line:94

        THIS->SetBool(key, val);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStorage_nGetFloat__I(JNIEnv* env, jobject object, jint key) {


//@line:106

        return THIS->GetFloat(key);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStorage_nGetFloat__IF(JNIEnv* env, jobject object, jint key, jfloat defaultVal) {


//@line:110

        return THIS->GetFloat(key, defaultVal);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStorage_nSetFloat(JNIEnv* env, jobject object, jint key, jfloat val) {


//@line:118

        THIS->SetFloat(key, val);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStorage_nBuildSortByKey(JNIEnv* env, jobject object) {


//@line:129

        THIS->BuildSortByKey();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStorage_nSetAllInt(JNIEnv* env, jobject object, jint val) {


//@line:140

        THIS->SetAllInt(val);
    

}


//@line:144

        #undef THIS
     