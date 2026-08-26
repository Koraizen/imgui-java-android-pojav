#include <imgui_ImGuiViewport.h>

//@line:15

        #include "_common.h"
        #define THIS ((ImGuiViewport*)STRUCT_PTR)
     JNIEXPORT jint JNICALL Java_imgui_ImGuiViewport_nGetID(JNIEnv* env, jobject object) {


//@line:34

        return THIS->ID;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetID(JNIEnv* env, jobject object, jint value) {


//@line:38

        THIS->ID = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiViewport_nGetFlags(JNIEnv* env, jobject object) {


//@line:77

        return THIS->Flags;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetFlags(JNIEnv* env, jobject object, jint value) {


//@line:81

        THIS->Flags = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nGetPos(JNIEnv* env, jobject object, jobject dst) {


//@line:129

        Jni::ImVec2Cpy(env, THIS->Pos, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetPosX(JNIEnv* env, jobject object) {


//@line:133

        return THIS->Pos.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetPosY(JNIEnv* env, jobject object) {


//@line:137

        return THIS->Pos.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetPos(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:141

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->Pos = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nGetSize(JNIEnv* env, jobject object, jobject dst) {


//@line:190

        Jni::ImVec2Cpy(env, THIS->Size, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetSizeX(JNIEnv* env, jobject object) {


//@line:194

        return THIS->Size.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetSizeY(JNIEnv* env, jobject object) {


//@line:198

        return THIS->Size.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:202

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->Size = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nGetWorkPos(JNIEnv* env, jobject object, jobject dst) {


//@line:251

        Jni::ImVec2Cpy(env, THIS->WorkPos, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetWorkPosX(JNIEnv* env, jobject object) {


//@line:255

        return THIS->WorkPos.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetWorkPosY(JNIEnv* env, jobject object) {


//@line:259

        return THIS->WorkPos.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetWorkPos(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:263

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->WorkPos = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nGetWorkSize(JNIEnv* env, jobject object, jobject dst) {


//@line:312

        Jni::ImVec2Cpy(env, THIS->WorkSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetWorkSizeX(JNIEnv* env, jobject object) {


//@line:316

        return THIS->WorkSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetWorkSizeY(JNIEnv* env, jobject object) {


//@line:320

        return THIS->WorkSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetWorkSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:324

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->WorkSize = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetDpiScale(JNIEnv* env, jobject object) {


//@line:343

        return THIS->DpiScale;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetDpiScale(JNIEnv* env, jobject object, jfloat value) {


//@line:347

        THIS->DpiScale = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiViewport_nGetParentViewportId(JNIEnv* env, jobject object) {


//@line:365

        return THIS->ParentViewportId;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetParentViewportId(JNIEnv* env, jobject object, jint value) {


//@line:369

        THIS->ParentViewportId = value;
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGuiViewport_nGetDrawData(JNIEnv* env, jobject object) {


//@line:387

        return (uintptr_t)THIS->DrawData;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetDrawData(JNIEnv* env, jobject object, jlong value) {


//@line:391

        THIS->DrawData = reinterpret_cast<ImDrawData*>(value);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_setRendererUserData(JNIEnv* env, jobject object, jobject data) {


//@line:403

        if (THIS->RendererUserData != NULL) {
            env->DeleteGlobalRef((jobject)THIS->RendererUserData);
        }
        THIS->RendererUserData = (data == NULL ? NULL : (void*)env->NewGlobalRef(data));
    

}

JNIEXPORT jobject JNICALL Java_imgui_ImGuiViewport_getRendererUserData(JNIEnv* env, jobject object) {


//@line:413

        return (jobject)THIS->RendererUserData;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_setPlatformUserData(JNIEnv* env, jobject object, jobject data) {


//@line:420

        if (THIS->PlatformUserData != NULL) {
            env->DeleteGlobalRef((jobject)THIS->PlatformUserData);
        }
        THIS->PlatformUserData = (data == NULL ? NULL : (void*)env->NewGlobalRef(data));
    

}

JNIEXPORT jobject JNICALL Java_imgui_ImGuiViewport_getPlatformUserData(JNIEnv* env, jobject object) {


//@line:430

        return (jobject)THIS->PlatformUserData;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_setPlatformHandle(JNIEnv* env, jobject object, jlong data) {


//@line:437

        THIS->PlatformHandle = (void*)data;
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGuiViewport_getPlatformHandle(JNIEnv* env, jobject object) {


//@line:444

        return (uintptr_t)THIS->PlatformHandle;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_setPlatformHandleRaw(JNIEnv* env, jobject object, jlong data) {


//@line:451

        THIS->PlatformHandleRaw = (void*)data;
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGuiViewport_getPlatformHandleRaw(JNIEnv* env, jobject object) {


//@line:458

        return (uintptr_t)THIS->PlatformHandleRaw;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiViewport_nGetPlatformWindowCreated(JNIEnv* env, jobject object) {


//@line:476

        return THIS->PlatformWindowCreated;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetPlatformWindowCreated(JNIEnv* env, jobject object, jboolean value) {


//@line:480

        THIS->PlatformWindowCreated = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiViewport_nGetPlatformRequestMove(JNIEnv* env, jobject object) {


//@line:498

        return THIS->PlatformRequestMove;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetPlatformRequestMove(JNIEnv* env, jobject object, jboolean value) {


//@line:502

        THIS->PlatformRequestMove = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiViewport_nGetPlatformRequestResize(JNIEnv* env, jobject object) {


//@line:520

        return THIS->PlatformRequestResize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetPlatformRequestResize(JNIEnv* env, jobject object, jboolean value) {


//@line:524

        THIS->PlatformRequestResize = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiViewport_nGetPlatformRequestClose(JNIEnv* env, jobject object) {


//@line:542

        return THIS->PlatformRequestClose;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nSetPlatformRequestClose(JNIEnv* env, jobject object, jboolean value) {


//@line:546

        THIS->PlatformRequestClose = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nGetCenter(JNIEnv* env, jobject object, jobject dst) {


//@line:570

        Jni::ImVec2Cpy(env, THIS->GetCenter(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetCenterX(JNIEnv* env, jobject object) {


//@line:574

        return THIS->GetCenter().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetCenterY(JNIEnv* env, jobject object) {


//@line:578

        return THIS->GetCenter().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiViewport_nGetWorkCenter(JNIEnv* env, jobject object, jobject dst) {


//@line:600

        Jni::ImVec2Cpy(env, THIS->GetWorkCenter(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetWorkCenterX(JNIEnv* env, jobject object) {


//@line:604

        return THIS->GetWorkCenter().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiViewport_nGetWorkCenterY(JNIEnv* env, jobject object) {


//@line:608

        return THIS->GetWorkCenter().y;
    

}


//@line:612

        #undef THIS
     