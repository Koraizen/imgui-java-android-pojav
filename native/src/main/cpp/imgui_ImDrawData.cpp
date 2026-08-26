#include <imgui_ImDrawData.h>

//@line:24

        #include "_common.h"
        #define THIS ((ImDrawData*)STRUCT_PTR)
     JNIEXPORT jint JNICALL Java_imgui_ImDrawData_getCmdListCmdBufferSize(JNIEnv* env, jobject object, jint cmdListIdx) {


//@line:34

        return THIS->CmdLists[cmdListIdx]->CmdBuffer.Size;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImDrawData_getCmdListCmdBufferElemCount(JNIEnv* env, jobject object, jint cmdListIdx, jint cmdBufferIdx) {


//@line:42

        return THIS->CmdLists[cmdListIdx]->CmdBuffer[cmdBufferIdx].ElemCount;
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawData_getCmdListCmdBufferClipRect(JNIEnv* env, jobject object, jobject dst, jint cmdListIdx, jint cmdBufferIdx) {


//@line:58

        Jni::ImVec4Cpy(env, &THIS->CmdLists[cmdListIdx]->CmdBuffer[cmdBufferIdx].ClipRect, dst);
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImDrawData_getCmdListCmdBufferTextureId(JNIEnv* env, jobject object, jint cmdListIdx, jint cmdBufferIdx) {


//@line:66

        return (uintptr_t)THIS->CmdLists[cmdListIdx]->CmdBuffer[cmdBufferIdx].GetTexID();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImDrawData_getCmdListCmdBufferVtxOffset(JNIEnv* env, jobject object, jint cmdListIdx, jint cmdBufferIdx) {


//@line:74

        return THIS->CmdLists[cmdListIdx]->CmdBuffer[cmdBufferIdx].VtxOffset;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImDrawData_getCmdListCmdBufferIdxOffset(JNIEnv* env, jobject object, jint cmdListIdx, jint cmdBufferIdx) {


//@line:81

        return THIS->CmdLists[cmdListIdx]->CmdBuffer[cmdBufferIdx].IdxOffset;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImDrawData_getCmdListIdxBufferSize(JNIEnv* env, jobject object, jint cmdListIdx) {


//@line:88

        return THIS->CmdLists[cmdListIdx]->IdxBuffer.Size;
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawData_nGetCmdListIdxBufferData(JNIEnv* env, jobject object, jint cmdListIdx, jobject obj_idxBuffer, jint idxBufferCapacity) {
	char* idxBuffer = (char*)(obj_idxBuffer?env->GetDirectBufferAddress(obj_idxBuffer):0);


//@line:107

        memcpy(idxBuffer, THIS->CmdLists[cmdListIdx]->IdxBuffer.Data, idxBufferCapacity);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImDrawData_getCmdListVtxBufferSize(JNIEnv* env, jobject object, jint cmdListIdx) {


//@line:114

        return THIS->CmdLists[cmdListIdx]->VtxBuffer.Size;
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawData_nGetCmdListVtxBufferData(JNIEnv* env, jobject object, jint cmdListIdx, jobject obj_vtxBuffer, jint vtxBufferCapacity) {
	char* vtxBuffer = (char*)(obj_vtxBuffer?env->GetDirectBufferAddress(obj_vtxBuffer):0);


//@line:133

        memcpy(vtxBuffer, THIS->CmdLists[cmdListIdx]->VtxBuffer.Data, vtxBufferCapacity);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImDrawData_sizeOfImDrawVert(JNIEnv* env, jclass clazz) {


//@line:137

        return (int)sizeof(ImDrawVert);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImDrawData_sizeOfImDrawIdx(JNIEnv* env, jclass clazz) {


//@line:141

        return (int)sizeof(ImDrawIdx);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImDrawData_nGetValid(JNIEnv* env, jobject object) {


//@line:154

        return THIS->Valid;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImDrawData_nGetCmdListsCount(JNIEnv* env, jobject object) {


//@line:165

        return THIS->CmdListsCount;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImDrawData_nGetTotalIdxCount(JNIEnv* env, jobject object) {


//@line:176

        return THIS->TotalIdxCount;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImDrawData_nGetTotalVtxCount(JNIEnv* env, jobject object) {


//@line:187

        return THIS->TotalVtxCount;
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawData_nGetDisplayPos(JNIEnv* env, jobject object, jobject dst) {


//@line:221

        Jni::ImVec2Cpy(env, THIS->DisplayPos, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImDrawData_nGetDisplayPosX(JNIEnv* env, jobject object) {


//@line:225

        return THIS->DisplayPos.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImDrawData_nGetDisplayPosY(JNIEnv* env, jobject object) {


//@line:229

        return THIS->DisplayPos.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawData_nGetDisplaySize(JNIEnv* env, jobject object, jobject dst) {


//@line:267

        Jni::ImVec2Cpy(env, THIS->DisplaySize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImDrawData_nGetDisplaySizeX(JNIEnv* env, jobject object) {


//@line:271

        return THIS->DisplaySize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImDrawData_nGetDisplaySizeY(JNIEnv* env, jobject object) {


//@line:275

        return THIS->DisplaySize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawData_nGetFramebufferScale(JNIEnv* env, jobject object, jobject dst) {


//@line:309

        Jni::ImVec2Cpy(env, THIS->FramebufferScale, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImDrawData_nGetFramebufferScaleX(JNIEnv* env, jobject object) {


//@line:313

        return THIS->FramebufferScale.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImDrawData_nGetFramebufferScaleY(JNIEnv* env, jobject object) {


//@line:317

        return THIS->FramebufferScale.y;
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImDrawData_nGetOwnerViewport(JNIEnv* env, jobject object) {


//@line:328

        return (uintptr_t)THIS->OwnerViewport;
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawData_nClear(JNIEnv* env, jobject object) {


//@line:338

        THIS->Clear();
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawData_nAddDrawList(JNIEnv* env, jobject object, jlong drawList) {


//@line:349

        THIS->AddDrawList(reinterpret_cast<ImDrawList*>(drawList));
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawData_nDeIndexAllBuffers(JNIEnv* env, jobject object) {


//@line:361

        THIS->DeIndexAllBuffers();
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawData_nScaleClipRects(JNIEnv* env, jobject object, jfloat fbScaleX, jfloat fbScaleY) {

//@line:381

        ImVec2 fbScale = ImVec2(fbScaleX, fbScaleY);
        THIS->ScaleClipRects(fbScale);
    
}


//@line:386

        #undef THIS
     