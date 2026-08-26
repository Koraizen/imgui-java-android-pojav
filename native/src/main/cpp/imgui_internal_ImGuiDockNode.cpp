#include <imgui_internal_ImGuiDockNode.h>

//@line:13

        #include "_common.h"
        #include "_internal.h"
        #define THIS ((ImGuiDockNode*)STRUCT_PTR)
     JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetID(JNIEnv* env, jobject object) {


//@line:27

        return THIS->ID;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetID(JNIEnv* env, jobject object, jint value) {


//@line:31

        THIS->ID = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetSharedFlags(JNIEnv* env, jobject object) {


//@line:70

        return THIS->SharedFlags;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetSharedFlags(JNIEnv* env, jobject object, jint value) {


//@line:74

        THIS->SharedFlags = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetLocalFlags(JNIEnv* env, jobject object) {


//@line:113

        return THIS->LocalFlags;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetLocalFlags(JNIEnv* env, jobject object, jint value) {


//@line:117

        THIS->LocalFlags = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetLocalFlagsInWindows(JNIEnv* env, jobject object) {


//@line:156

        return THIS->LocalFlagsInWindows;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetLocalFlagsInWindows(JNIEnv* env, jobject object, jint value) {


//@line:160

        THIS->LocalFlagsInWindows = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetMergedFlags(JNIEnv* env, jobject object) {


//@line:178

        return THIS->MergedFlags;
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGuiDockNode_nGetParentNode(JNIEnv* env, jobject object) {


//@line:192

        return (uintptr_t)THIS->ParentNode;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetParentNode(JNIEnv* env, jobject object, jlong value) {


//@line:196

        THIS->ParentNode = reinterpret_cast<ImGuiDockNode*>(value);
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGuiDockNode_nGetChildNodeFirst(JNIEnv* env, jobject object) {


//@line:207

        return (uintptr_t)THIS->ChildNodes[0];
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetChildNodeFirst(JNIEnv* env, jobject object, jlong imGuiDockNodePtr) {


//@line:218

        THIS->ChildNodes[0] = (ImGuiDockNode*)imGuiDockNodePtr;
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGuiDockNode_nGetChildNodeSecond(JNIEnv* env, jobject object) {


//@line:229

        return (uintptr_t)THIS->ChildNodes[1];
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetChildNodeSecond(JNIEnv* env, jobject object, jlong imGuiDockNodePtr) {


//@line:240

        THIS->ChildNodes[1] = (ImGuiDockNode*)imGuiDockNodePtr;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nGetPos(JNIEnv* env, jobject object, jobject dst) {


//@line:290

        Jni::ImVec2Cpy(env, THIS->Pos, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGuiDockNode_nGetPosX(JNIEnv* env, jobject object) {


//@line:294

        return THIS->Pos.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGuiDockNode_nGetPosY(JNIEnv* env, jobject object) {


//@line:298

        return THIS->Pos.y;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetPos(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:302

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->Pos = value;
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nGetSize(JNIEnv* env, jobject object, jobject dst) {


//@line:351

        Jni::ImVec2Cpy(env, THIS->Size, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGuiDockNode_nGetSizeX(JNIEnv* env, jobject object) {


//@line:355

        return THIS->Size.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGuiDockNode_nGetSizeY(JNIEnv* env, jobject object) {


//@line:359

        return THIS->Size.y;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:363

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->Size = value;
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nGetSizeRef(JNIEnv* env, jobject object, jobject dst) {


//@line:412

        Jni::ImVec2Cpy(env, THIS->SizeRef, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGuiDockNode_nGetSizeRefX(JNIEnv* env, jobject object) {


//@line:416

        return THIS->SizeRef.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGuiDockNode_nGetSizeRefY(JNIEnv* env, jobject object) {


//@line:420

        return THIS->SizeRef.y;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetSizeRef(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:424

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->SizeRef = value;
    
}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetSplitAxis(JNIEnv* env, jobject object) {


//@line:436

        return THIS->SplitAxis;
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGuiDockNode_nGetWindowClass(JNIEnv* env, jobject object) {


//@line:447

        return (uintptr_t)&THIS->WindowClass;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetLastBgColor(JNIEnv* env, jobject object) {


//@line:459

        return THIS->LastBgColor;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetLastBgColor(JNIEnv* env, jobject object, jint value) {


//@line:463

        THIS->LastBgColor = value;
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGuiDockNode_nGetHostWindow(JNIEnv* env, jobject object) {


//@line:475

        return (uintptr_t)THIS->HostWindow;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetHostWindow(JNIEnv* env, jobject object, jlong value) {


//@line:479

        THIS->HostWindow = reinterpret_cast<ImGuiWindow*>(value);
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGuiDockNode_nGetVisibleWindow(JNIEnv* env, jobject object) {


//@line:497

        return (uintptr_t)THIS->VisibleWindow;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetVisibleWindow(JNIEnv* env, jobject object, jlong value) {


//@line:501

        THIS->VisibleWindow = reinterpret_cast<ImGuiWindow*>(value);
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGuiDockNode_nGetCentralNode(JNIEnv* env, jobject object) {


//@line:519

        return (uintptr_t)THIS->CentralNode;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetCentralNode(JNIEnv* env, jobject object, jlong value) {


//@line:523

        THIS->CentralNode = reinterpret_cast<ImGuiDockNode*>(value);
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGuiDockNode_nGetOnlyNodeWithWindows(JNIEnv* env, jobject object) {


//@line:541

        return (uintptr_t)THIS->OnlyNodeWithWindows;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetOnlyNodeWithWindows(JNIEnv* env, jobject object, jlong value) {


//@line:545

        THIS->OnlyNodeWithWindows = reinterpret_cast<ImGuiDockNode*>(value);
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetLastFrameAlive(JNIEnv* env, jobject object) {


//@line:563

        return THIS->LastFrameAlive;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetLastFrameAlive(JNIEnv* env, jobject object, jint value) {


//@line:567

        THIS->LastFrameAlive = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetLastFrameActive(JNIEnv* env, jobject object) {


//@line:585

        return THIS->LastFrameActive;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetLastFrameActive(JNIEnv* env, jobject object, jint value) {


//@line:589

        THIS->LastFrameActive = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetLastFrameFocused(JNIEnv* env, jobject object) {


//@line:607

        return THIS->LastFrameFocused;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetLastFrameFocused(JNIEnv* env, jobject object, jint value) {


//@line:611

        THIS->LastFrameFocused = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetLastFocusedNodeId(JNIEnv* env, jobject object) {


//@line:629

        return THIS->LastFocusedNodeId;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetLastFocusedNodeId(JNIEnv* env, jobject object, jint value) {


//@line:633

        THIS->LastFocusedNodeId = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetSelectedTabId(JNIEnv* env, jobject object) {


//@line:651

        return THIS->SelectedTabId;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetSelectedTabId(JNIEnv* env, jobject object, jint value) {


//@line:655

        THIS->SelectedTabId = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetWantCloseTabId(JNIEnv* env, jobject object) {


//@line:673

        return THIS->WantCloseTabId;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetWantCloseTabId(JNIEnv* env, jobject object, jint value) {


//@line:677

        THIS->WantCloseTabId = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetAuthorityForPos(JNIEnv* env, jobject object) {


//@line:689

        return THIS->AuthorityForPos;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetAuthorityForPos(JNIEnv* env, jobject object, jint value) {


//@line:693

        THIS->AuthorityForPos = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetAuthorityForSize(JNIEnv* env, jobject object) {


//@line:705

        return THIS->AuthorityForSize;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetAuthorityForSize(JNIEnv* env, jobject object, jint value) {


//@line:709

        THIS->AuthorityForSize = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGuiDockNode_nGetAuthorityForViewport(JNIEnv* env, jobject object) {


//@line:721

        return THIS->AuthorityForViewport;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetAuthorityForViewport(JNIEnv* env, jobject object, jint value) {


//@line:725

        THIS->AuthorityForViewport = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nGetIsVisible(JNIEnv* env, jobject object) {


//@line:743

        return THIS->IsVisible;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetIsVisible(JNIEnv* env, jobject object, jboolean value) {


//@line:747

        THIS->IsVisible = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nGetIsFocused(JNIEnv* env, jobject object) {


//@line:759

        return THIS->IsFocused;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetIsFocused(JNIEnv* env, jobject object, jboolean value) {


//@line:763

        THIS->IsFocused = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nGetHasCloseButton(JNIEnv* env, jobject object) {


//@line:775

        return THIS->HasCloseButton;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetHasCloseButton(JNIEnv* env, jobject object, jboolean value) {


//@line:779

        THIS->HasCloseButton = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nGetHasWindowMenuButton(JNIEnv* env, jobject object) {


//@line:791

        return THIS->HasWindowMenuButton;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetHasWindowMenuButton(JNIEnv* env, jobject object, jboolean value) {


//@line:795

        THIS->HasWindowMenuButton = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nGetHasCentralNodeChild(JNIEnv* env, jobject object) {


//@line:807

        return THIS->HasCentralNodeChild;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetHasCentralNodeChild(JNIEnv* env, jobject object, jboolean value) {


//@line:811

        THIS->HasCentralNodeChild = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nGetWantCloseAll(JNIEnv* env, jobject object) {


//@line:829

        return THIS->WantCloseAll;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetWantCloseAll(JNIEnv* env, jobject object, jboolean value) {


//@line:833

        THIS->WantCloseAll = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nGetWantLockSizeOnce(JNIEnv* env, jobject object) {


//@line:845

        return THIS->WantLockSizeOnce;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetWantLockSizeOnce(JNIEnv* env, jobject object, jboolean value) {


//@line:849

        THIS->WantLockSizeOnce = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nGetWantMouseMove(JNIEnv* env, jobject object) {


//@line:867

        return THIS->WantMouseMove;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetWantMouseMove(JNIEnv* env, jobject object, jboolean value) {


//@line:871

        THIS->WantMouseMove = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nGetWantHiddenTabBarUpdate(JNIEnv* env, jobject object) {


//@line:883

        return THIS->WantHiddenTabBarUpdate;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetWantHiddenTabBarUpdate(JNIEnv* env, jobject object, jboolean value) {


//@line:887

        THIS->WantHiddenTabBarUpdate = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nGetWantHiddenTabBarToggle(JNIEnv* env, jobject object) {


//@line:899

        return THIS->WantHiddenTabBarToggle;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nSetWantHiddenTabBarToggle(JNIEnv* env, jobject object, jboolean value) {


//@line:903

        THIS->WantHiddenTabBarToggle = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nIsRootNode(JNIEnv* env, jobject object) {


//@line:911

        return THIS->IsRootNode();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nIsDockSpace(JNIEnv* env, jobject object) {


//@line:919

        return THIS->IsDockSpace();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nIsFloatingNode(JNIEnv* env, jobject object) {


//@line:927

        return THIS->IsFloatingNode();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nIsCentralNode(JNIEnv* env, jobject object) {


//@line:935

        return THIS->IsCentralNode();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nIsHiddenTabBar(JNIEnv* env, jobject object) {


//@line:946

        return THIS->IsHiddenTabBar();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nIsNoTabBar(JNIEnv* env, jobject object) {


//@line:957

        return THIS->IsNoTabBar();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nIsSplitNode(JNIEnv* env, jobject object) {


//@line:965

        return THIS->IsSplitNode();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nIsLeafNode(JNIEnv* env, jobject object) {


//@line:973

        return THIS->IsLeafNode();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGuiDockNode_nIsEmpty(JNIEnv* env, jobject object) {


//@line:981

        return THIS->IsEmpty();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nRect(JNIEnv* env, jobject object, jobject dst) {


//@line:995

        Jni::ImRectCpy(env, THIS->Rect(), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGuiDockNode_nUpdateMergedFlags(JNIEnv* env, jobject object) {


//@line:1003

        THIS->UpdateMergedFlags();
    

}


//@line:1007

        #undef THIS
     