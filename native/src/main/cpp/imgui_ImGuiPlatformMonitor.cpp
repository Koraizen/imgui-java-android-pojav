#include <imgui_ImGuiPlatformMonitor.h>

//@line:14

        #include "_common.h"
        #define THIS ((ImGuiPlatformMonitor*)STRUCT_PTR)
     JNIEXPORT void JNICALL Java_imgui_ImGuiPlatformMonitor_nGetMainPos(JNIEnv* env, jobject object, jobject dst) {


//@line:63

        Jni::ImVec2Cpy(env, THIS->MainPos, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiPlatformMonitor_nGetMainPosX(JNIEnv* env, jobject object) {


//@line:67

        return THIS->MainPos.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiPlatformMonitor_nGetMainPosY(JNIEnv* env, jobject object) {


//@line:71

        return THIS->MainPos.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiPlatformMonitor_nSetMainPos(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:75

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MainPos = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiPlatformMonitor_nGetMainSize(JNIEnv* env, jobject object, jobject dst) {


//@line:124

        Jni::ImVec2Cpy(env, THIS->MainSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiPlatformMonitor_nGetMainSizeX(JNIEnv* env, jobject object) {


//@line:128

        return THIS->MainSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiPlatformMonitor_nGetMainSizeY(JNIEnv* env, jobject object) {


//@line:132

        return THIS->MainSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiPlatformMonitor_nSetMainSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:136

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MainSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiPlatformMonitor_nGetWorkPos(JNIEnv* env, jobject object, jobject dst) {


//@line:191

        Jni::ImVec2Cpy(env, THIS->WorkPos, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiPlatformMonitor_nGetWorkPosX(JNIEnv* env, jobject object) {


//@line:195

        return THIS->WorkPos.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiPlatformMonitor_nGetWorkPosY(JNIEnv* env, jobject object) {


//@line:199

        return THIS->WorkPos.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiPlatformMonitor_nSetWorkPos(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:203

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->WorkPos = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiPlatformMonitor_nGetWorkSize(JNIEnv* env, jobject object, jobject dst) {


//@line:258

        Jni::ImVec2Cpy(env, THIS->WorkSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiPlatformMonitor_nGetWorkSizeX(JNIEnv* env, jobject object) {


//@line:262

        return THIS->WorkSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiPlatformMonitor_nGetWorkSizeY(JNIEnv* env, jobject object) {


//@line:266

        return THIS->WorkSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiPlatformMonitor_nSetWorkSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:270

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->WorkSize = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiPlatformMonitor_nGetDpiScale(JNIEnv* env, jobject object) {


//@line:289

        return THIS->DpiScale;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiPlatformMonitor_nSetDpiScale(JNIEnv* env, jobject object, jfloat value) {


//@line:293

        THIS->DpiScale = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiPlatformMonitor_setPlatformHandle(JNIEnv* env, jobject object, jlong platformHandle) {


//@line:300

        THIS->PlatformHandle = (void*)platformHandle;
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGuiPlatformMonitor_getPlatformHandle(JNIEnv* env, jobject object) {


//@line:307

        return (uintptr_t)THIS->PlatformHandle;
    

}


//@line:311

        #undef THIS
     