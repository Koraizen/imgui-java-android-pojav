#include <imgui_internal_ImGui.h>

//@line:14

        #include "_common.h"
        #include "_internal.h"
     JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nInit(JNIEnv* env, jclass clazz) {


//@line:26

        Jni::InitInternal(env);
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGui_nGetCurrentWindowRead(JNIEnv* env, jclass clazz) {


//@line:40

        return (uintptr_t)ImGui::GetCurrentWindowRead();
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGui_nGetCurrentWindow(JNIEnv* env, jclass clazz) {


//@line:48

        return (uintptr_t)ImGui::GetCurrentWindow();
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGui_nFindWindowByID(JNIEnv* env, jclass clazz, jint id) {


//@line:56

        return (uintptr_t)ImGui::FindWindowByID(id);
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGui_nFindWindowByName(JNIEnv* env, jclass clazz, jstring obj_name) {

//@line:64

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        auto _result = (uintptr_t)ImGui::FindWindowByName(name);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nUpdateWindowParentAndRootLinks(JNIEnv* env, jclass clazz, jlong window, jint flags, jlong parentWindow) {


//@line:75

        ImGui::UpdateWindowParentAndRootLinks(reinterpret_cast<ImGuiWindow*>(window), flags, reinterpret_cast<ImGuiWindow*>(parentWindow));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nCalcWindowNextAutoFitSize(JNIEnv* env, jclass clazz, jobject dst, jlong window) {


//@line:97

        Jni::ImVec2Cpy(env, ImGui::CalcWindowNextAutoFitSize(reinterpret_cast<ImGuiWindow*>(window)), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nCalcWindowNextAutoFitSizeX(JNIEnv* env, jclass clazz, jlong window) {


//@line:101

        return ImGui::CalcWindowNextAutoFitSize(reinterpret_cast<ImGuiWindow*>(window)).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nCalcWindowNextAutoFitSizeY(JNIEnv* env, jclass clazz, jlong window) {


//@line:105

        return ImGui::CalcWindowNextAutoFitSize(reinterpret_cast<ImGuiWindow*>(window)).y;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nIsWindowChildOf(JNIEnv* env, jclass clazz, jlong window, jlong potentialParent, jboolean popupHierarchy, jboolean dockHierarchy) {


//@line:113

        return ImGui::IsWindowChildOf(reinterpret_cast<ImGuiWindow*>(window), reinterpret_cast<ImGuiWindow*>(potentialParent), popupHierarchy, dockHierarchy);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nIsWindowWithinBeginStackOf(JNIEnv* env, jclass clazz, jlong window, jlong potentialParent) {


//@line:121

        return ImGui::IsWindowWithinBeginStackOf(reinterpret_cast<ImGuiWindow*>(window), reinterpret_cast<ImGuiWindow*>(potentialParent));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nIsWindowAbove(JNIEnv* env, jclass clazz, jlong potentialAbove, jlong potentialBelow) {


//@line:129

        return ImGui::IsWindowAbove(reinterpret_cast<ImGuiWindow*>(potentialAbove), reinterpret_cast<ImGuiWindow*>(potentialBelow));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nIsWindowNavFocusable(JNIEnv* env, jclass clazz, jlong window) {


//@line:137

        return ImGui::IsWindowNavFocusable(reinterpret_cast<ImGuiWindow*>(window));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetWindowPos__JFF(JNIEnv* env, jclass clazz, jlong window, jfloat posX, jfloat posY) {

//@line:157

        ImVec2 pos = ImVec2(posX, posY);
        ImGui::SetWindowPos(reinterpret_cast<ImGuiWindow*>(window), pos);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetWindowPos__JFFI(JNIEnv* env, jclass clazz, jlong window, jfloat posX, jfloat posY, jint cond) {

//@line:162

        ImVec2 pos = ImVec2(posX, posY);
        ImGui::SetWindowPos(reinterpret_cast<ImGuiWindow*>(window), pos, cond);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetWindowSize__JFF(JNIEnv* env, jclass clazz, jlong window, jfloat sizeX, jfloat sizeY) {

//@line:183

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::SetWindowSize(reinterpret_cast<ImGuiWindow*>(window), size);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetWindowSize__JFFI(JNIEnv* env, jclass clazz, jlong window, jfloat sizeX, jfloat sizeY, jint cond) {

//@line:188

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::SetWindowSize(reinterpret_cast<ImGuiWindow*>(window), size, cond);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetWindowCollapsed__JZ(JNIEnv* env, jclass clazz, jlong window, jboolean collapsed) {


//@line:201

        ImGui::SetWindowCollapsed(reinterpret_cast<ImGuiWindow*>(window), static_cast<bool>(collapsed));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetWindowCollapsed__JZI(JNIEnv* env, jclass clazz, jlong window, jboolean collapsed, jint cond) {


//@line:205

        ImGui::SetWindowCollapsed(reinterpret_cast<ImGuiWindow*>(window), static_cast<bool>(collapsed), cond);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetWindowHitTestHole(JNIEnv* env, jclass clazz, jlong window, jfloat posX, jfloat posY, jfloat sizeX, jfloat sizeY) {

//@line:217

        ImVec2 pos = ImVec2(posX, posY);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::SetWindowHitTestHole(reinterpret_cast<ImGuiWindow*>(window), pos, size);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nWindowRectAbsToRel(JNIEnv* env, jclass clazz, jobject dst, jlong window, jfloat rMinX, jfloat rMinY, jfloat rMaxX, jfloat rMaxY) {


//@line:243

        Jni::ImRectCpy(env, ImGui::WindowRectAbsToRel(reinterpret_cast<ImGuiWindow*>(window), ImRect(rMinX, rMinY, rMaxX, rMaxY)), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nWindowRectRelToAbs(JNIEnv* env, jclass clazz, jobject dst, jlong window, jfloat rMinX, jfloat rMinY, jfloat rMaxX, jfloat rMaxY) {


//@line:267

        Jni::ImRectCpy(env, ImGui::WindowRectRelToAbs(reinterpret_cast<ImGuiWindow*>(window), ImRect(rMinX, rMinY, rMaxX, rMaxY)), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nFocusWindow__J(JNIEnv* env, jclass clazz, jlong window) {


//@line:282

        ImGui::FocusWindow(reinterpret_cast<ImGuiWindow*>(window));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nFocusWindow__JI(JNIEnv* env, jclass clazz, jlong window, jint flags) {


//@line:286

        ImGui::FocusWindow(reinterpret_cast<ImGuiWindow*>(window), static_cast<ImGuiFocusRequestFlags>(flags));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nFocusTopMostWindowUnderOne(JNIEnv* env, jclass clazz, jlong underThisWindow, jlong ignoreWindow, jlong filterViewport, jint flags) {


//@line:294

        ImGui::FocusTopMostWindowUnderOne(reinterpret_cast<ImGuiWindow*>(underThisWindow), reinterpret_cast<ImGuiWindow*>(ignoreWindow), reinterpret_cast<ImGuiViewport*>(filterViewport), static_cast<ImGuiFocusRequestFlags>(flags));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nBringWindowToFocusFront(JNIEnv* env, jclass clazz, jlong window) {


//@line:302

        ImGui::BringWindowToFocusFront(reinterpret_cast<ImGuiWindow*>(window));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nBringWindowToDisplayFront(JNIEnv* env, jclass clazz, jlong window) {


//@line:310

        ImGui::BringWindowToDisplayFront(reinterpret_cast<ImGuiWindow*>(window));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nBringWindowToDisplayBack(JNIEnv* env, jclass clazz, jlong window) {


//@line:318

        ImGui::BringWindowToDisplayBack(reinterpret_cast<ImGuiWindow*>(window));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nBringWindowToDisplayBehind(JNIEnv* env, jclass clazz, jlong window, jlong aboveWindow) {


//@line:326

        ImGui::BringWindowToDisplayBehind(reinterpret_cast<ImGuiWindow*>(window), reinterpret_cast<ImGuiWindow*>(aboveWindow));
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nFindWindowDisplayIndex(JNIEnv* env, jclass clazz, jlong window) {


//@line:334

        return ImGui::FindWindowDisplayIndex(reinterpret_cast<ImGuiWindow*>(window));
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGui_nFindBottomMostVisibleWindowWithinBeginStack(JNIEnv* env, jclass clazz, jlong window) {


//@line:342

        return (uintptr_t)ImGui::FindBottomMostVisibleWindowWithinBeginStack(reinterpret_cast<ImGuiWindow*>(window));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetCurrentFont(JNIEnv* env, jclass clazz, jlong font) {


//@line:352

        ImGui::SetCurrentFont(reinterpret_cast<ImFont*>(font));
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGui_nGetDefaultFont(JNIEnv* env, jclass clazz) {


//@line:360

        return (uintptr_t)ImGui::GetDefaultFont();
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGui_nGetForegroundDrawList(JNIEnv* env, jclass clazz, jlong window) {


//@line:368

        return (uintptr_t)ImGui::GetForegroundDrawList(reinterpret_cast<ImGuiWindow*>(window));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nInitialize(JNIEnv* env, jclass clazz) {


//@line:378

        ImGui::Initialize();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nShutdown(JNIEnv* env, jclass clazz) {


//@line:386

        ImGui::Shutdown();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nUpdateInputEvents(JNIEnv* env, jclass clazz, jboolean trickleFastInputs) {


//@line:396

        ImGui::UpdateInputEvents(trickleFastInputs);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nUpdateHoveredWindowAndCaptureFlags(JNIEnv* env, jclass clazz) {


//@line:404

        ImGui::UpdateHoveredWindowAndCaptureFlags();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nStartMouseMovingWindow(JNIEnv* env, jclass clazz, jlong window) {


//@line:412

        ImGui::StartMouseMovingWindow(reinterpret_cast<ImGuiWindow*>(window));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nStartMouseMovingWindowOrNode(JNIEnv* env, jclass clazz, jlong window, jlong node, jboolean undockFloatingNode) {


//@line:420

        ImGui::StartMouseMovingWindowOrNode(reinterpret_cast<ImGuiWindow*>(window), reinterpret_cast<ImGuiDockNode*>(node), undockFloatingNode);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nUpdateMouseMovingWindowNewFrame(JNIEnv* env, jclass clazz) {


//@line:428

        ImGui::UpdateMouseMovingWindowNewFrame();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nUpdateMouseMovingWindowEndFrame(JNIEnv* env, jclass clazz) {


//@line:436

        ImGui::UpdateMouseMovingWindowEndFrame();
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGui_nGetViewportPlatformMonitor(JNIEnv* env, jclass clazz, jlong viewport) {


//@line:448

        return (uintptr_t)ImGui::GetViewportPlatformMonitor(reinterpret_cast<ImGuiViewport*>(viewport));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetNextWindowScroll(JNIEnv* env, jclass clazz, jfloat scrollX, jfloat scrollY) {

//@line:464

        ImVec2 scroll = ImVec2(scrollX, scrollY);
        ImGui::SetNextWindowScroll(scroll);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetScrollX(JNIEnv* env, jclass clazz, jlong window, jfloat scrollX) {


//@line:473

        ImGui::SetScrollX(reinterpret_cast<ImGuiWindow*>(window), scrollX);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetScrollY(JNIEnv* env, jclass clazz, jlong window, jfloat scrollY) {


//@line:481

        ImGui::SetScrollY(reinterpret_cast<ImGuiWindow*>(window), scrollY);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetScrollFromPosX(JNIEnv* env, jclass clazz, jlong window, jfloat localX, jfloat centerXRatio) {


//@line:489

        ImGui::SetScrollFromPosX(reinterpret_cast<ImGuiWindow*>(window), localX, centerXRatio);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetScrollFromPosY(JNIEnv* env, jclass clazz, jlong window, jfloat localY, jfloat centerYRatio) {


//@line:497

        ImGui::SetScrollFromPosY(reinterpret_cast<ImGuiWindow*>(window), localY, centerYRatio);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nScrollToItem__(JNIEnv* env, jclass clazz) {


//@line:511

        ImGui::ScrollToItem();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nScrollToItem__I(JNIEnv* env, jclass clazz, jint flags) {


//@line:515

        ImGui::ScrollToItem(flags);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nScrollToRect__JFFFF(JNIEnv* env, jclass clazz, jlong window, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY) {


//@line:535

        ImGui::ScrollToRect(reinterpret_cast<ImGuiWindow*>(window), ImRect(rectMinX, rectMinY, rectMaxX, rectMaxY));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nScrollToRect__JFFFFI(JNIEnv* env, jclass clazz, jlong window, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY, jint flags) {


//@line:539

        ImGui::ScrollToRect(reinterpret_cast<ImGuiWindow*>(window), ImRect(rectMinX, rectMinY, rectMaxX, rectMaxY), flags);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nScrollToRectEx__Limgui_ImVec2_2JFFFF(JNIEnv* env, jclass clazz, jobject dst, jlong window, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY) {


//@line:599

        Jni::ImVec2Cpy(env, ImGui::ScrollToRectEx(reinterpret_cast<ImGuiWindow*>(window), ImRect(rectMinX, rectMinY, rectMaxX, rectMaxY)), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nScrollToRectExX__JFFFF(JNIEnv* env, jclass clazz, jlong window, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY) {


//@line:603

        return ImGui::ScrollToRectEx(reinterpret_cast<ImGuiWindow*>(window), ImRect(rectMinX, rectMinY, rectMaxX, rectMaxY)).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nScrollToRectExY__JFFFF(JNIEnv* env, jclass clazz, jlong window, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY) {


//@line:607

        return ImGui::ScrollToRectEx(reinterpret_cast<ImGuiWindow*>(window), ImRect(rectMinX, rectMinY, rectMaxX, rectMaxY)).y;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nScrollToRectEx__Limgui_ImVec2_2JFFFFI(JNIEnv* env, jclass clazz, jobject dst, jlong window, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY, jint flags) {


//@line:611

        Jni::ImVec2Cpy(env, ImGui::ScrollToRectEx(reinterpret_cast<ImGuiWindow*>(window), ImRect(rectMinX, rectMinY, rectMaxX, rectMaxY), flags), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nScrollToRectExX__JFFFFI(JNIEnv* env, jclass clazz, jlong window, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY, jint flags) {


//@line:615

        return ImGui::ScrollToRectEx(reinterpret_cast<ImGuiWindow*>(window), ImRect(rectMinX, rectMinY, rectMaxX, rectMaxY), flags).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nScrollToRectExY__JFFFFI(JNIEnv* env, jclass clazz, jlong window, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY, jint flags) {


//@line:619

        return ImGui::ScrollToRectEx(reinterpret_cast<ImGuiWindow*>(window), ImRect(rectMinX, rectMinY, rectMaxX, rectMaxY), flags).y;
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nGetItemStatusFlags(JNIEnv* env, jclass clazz) {


//@line:629

        return ImGui::GetItemStatusFlags();
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nGetItemFlags(JNIEnv* env, jclass clazz) {


//@line:637

        return ImGui::GetItemFlags();
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nGetActiveID(JNIEnv* env, jclass clazz) {


//@line:645

        return ImGui::GetActiveID();
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nGetFocusID(JNIEnv* env, jclass clazz) {


//@line:653

        return ImGui::GetFocusID();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetActiveID(JNIEnv* env, jclass clazz, jint id, jlong window) {


//@line:661

        ImGui::SetActiveID(id, reinterpret_cast<ImGuiWindow*>(window));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetFocusID(JNIEnv* env, jclass clazz, jint id, jlong window) {


//@line:669

        ImGui::SetFocusID(id, reinterpret_cast<ImGuiWindow*>(window));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nClearActiveID(JNIEnv* env, jclass clazz) {


//@line:677

        ImGui::ClearActiveID();
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nGetHoveredID(JNIEnv* env, jclass clazz) {


//@line:685

        return ImGui::GetHoveredID();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetHoveredID(JNIEnv* env, jclass clazz, jint id) {


//@line:693

        ImGui::SetHoveredID(id);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nKeepAliveID(JNIEnv* env, jclass clazz, jint id) {


//@line:701

        ImGui::KeepAliveID(id);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nMarkItemEdited(JNIEnv* env, jclass clazz, jint id) {


//@line:709

        ImGui::MarkItemEdited(id);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nPushOverrideID(JNIEnv* env, jclass clazz, jint id) {


//@line:717

        ImGui::PushOverrideID(id);
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nGetIDWithSeed(JNIEnv* env, jclass clazz, jstring obj_strIdBegin, jstring obj_strIdEnd, jint seed) {

//@line:725

        auto strIdBegin = obj_strIdBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strIdBegin, JNI_FALSE);
        auto strIdEnd = obj_strIdEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strIdEnd, JNI_FALSE);
        auto _result = ImGui::GetIDWithSeed(strIdBegin, strIdEnd, seed);
        if (strIdBegin != NULL) env->ReleaseStringUTFChars(obj_strIdBegin, strIdBegin);
        if (strIdEnd != NULL) env->ReleaseStringUTFChars(obj_strIdEnd, strIdEnd);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nItemSize__FF(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY) {

//@line:752

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::ItemSize(size);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nItemSize__FFF(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY, jfloat textBaselineY) {

//@line:757

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::ItemSize(size, textBaselineY);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nItemSize__FFFF(JNIEnv* env, jclass clazz, jfloat bbMinX, jfloat bbMinY, jfloat bbMaxX, jfloat bbMaxY) {


//@line:778

        ImGui::ItemSize(ImRect(bbMinX, bbMinY, bbMaxX, bbMaxY));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nItemSize__FFFFF(JNIEnv* env, jclass clazz, jfloat bbMinX, jfloat bbMinY, jfloat bbMaxX, jfloat bbMaxY, jfloat textBaselineY) {


//@line:782

        ImGui::ItemSize(ImRect(bbMinX, bbMinY, bbMaxX, bbMaxY), textBaselineY);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nItemHoverable(JNIEnv* env, jclass clazz, jfloat bbMinX, jfloat bbMinY, jfloat bbMaxX, jfloat bbMaxY, jint id, jint itemFlags) {


//@line:796

        return ImGui::ItemHoverable(ImRect(bbMinX, bbMinY, bbMaxX, bbMaxY), id, static_cast<ImGuiItemFlags>(itemFlags));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nIsWindowContentHoverable(JNIEnv* env, jclass clazz, jlong window, jint flags) {


//@line:804

        return ImGui::IsWindowContentHoverable(reinterpret_cast<ImGuiWindow*>(window), static_cast<ImGuiHoveredFlags>(flags));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nIsClippedEx(JNIEnv* env, jclass clazz, jfloat bbMinX, jfloat bbMinY, jfloat bbMaxX, jfloat bbMaxY, jint id) {


//@line:816

        return ImGui::IsClippedEx(ImRect(bbMinX, bbMinY, bbMaxX, bbMaxY), id);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSetLastItemData(JNIEnv* env, jclass clazz, jint itemId, jint inFlags, jint statusFlags, jfloat itemRectMinX, jfloat itemRectMinY, jfloat itemRectMaxX, jfloat itemRectMaxY) {


//@line:828

        ImGui::SetLastItemData(itemId, inFlags, statusFlags, ImRect(itemRectMinX, itemRectMinY, itemRectMaxX, itemRectMaxY));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nCalcItemSize(JNIEnv* env, jclass clazz, jobject dst, jfloat sizeX, jfloat sizeY, jfloat defaultW, jfloat defaultH) {

//@line:860

        ImVec2 size = ImVec2(sizeX, sizeY);
        Jni::ImVec2Cpy(env, ImGui::CalcItemSize(size, defaultW, defaultH), dst);
    
}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nCalcItemSizeX(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY, jfloat defaultW, jfloat defaultH) {

//@line:865

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::CalcItemSize(size, defaultW, defaultH).x;
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nCalcItemSizeY(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY, jfloat defaultW, jfloat defaultH) {

//@line:871

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::CalcItemSize(size, defaultW, defaultH).y;
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nCalcWrapWidthForPos(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY, jfloat wrapPosX) {

//@line:885

        ImVec2 pos = ImVec2(posX, posY);
        auto _result = ImGui::CalcWrapWidthForPos(pos, wrapPosX);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nPushMultiItemsWidths(JNIEnv* env, jclass clazz, jint components, jfloat widthFull) {


//@line:895

        ImGui::PushMultiItemsWidths(components, widthFull);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nIsItemToggledSelection(JNIEnv* env, jclass clazz) {


//@line:903

        return ImGui::IsItemToggledSelection();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nGetContentRegionMaxAbs(JNIEnv* env, jclass clazz, jobject dst) {


//@line:925

        Jni::ImVec2Cpy(env, ImGui::GetContentRegionMaxAbs(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nGetContentRegionMaxAbsX(JNIEnv* env, jclass clazz) {


//@line:929

        return ImGui::GetContentRegionMaxAbs().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nGetContentRegionMaxAbsY(JNIEnv* env, jclass clazz) {


//@line:933

        return ImGui::GetContentRegionMaxAbs().y;
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nPushItemFlag(JNIEnv* env, jclass clazz, jint option, jboolean enabled) {


//@line:945

        ImGui::PushItemFlag(option, enabled);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nPopItemFlag(JNIEnv* env, jclass clazz) {


//@line:953

        ImGui::PopItemFlag();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nDockBuilderDockWindow(JNIEnv* env, jclass clazz, jstring obj_windowName, jint nodeId) {

//@line:971

        auto windowName = obj_windowName == NULL ? NULL : (char*)env->GetStringUTFChars(obj_windowName, JNI_FALSE);
        ImGui::DockBuilderDockWindow(windowName, nodeId);
        if (windowName != NULL) env->ReleaseStringUTFChars(obj_windowName, windowName);
    
}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGui_nDockBuilderGetNode(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:981

        return (uintptr_t)ImGui::DockBuilderGetNode(nodeId);
    

}

JNIEXPORT jlong JNICALL Java_imgui_internal_ImGui_nDockBuilderGetCentralNode(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:989

        return (uintptr_t)ImGui::DockBuilderGetCentralNode(nodeId);
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nDockBuilderAddNode__(JNIEnv* env, jclass clazz) {


//@line:1005

        return ImGui::DockBuilderAddNode();
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nDockBuilderAddNode__I(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:1009

        return ImGui::DockBuilderAddNode(nodeId);
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nDockBuilderAddNode__II(JNIEnv* env, jclass clazz, jint nodeId, jint flags) {


//@line:1013

        return ImGui::DockBuilderAddNode(nodeId, flags);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nDockBuilderRemoveNode(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:1024

        ImGui::DockBuilderRemoveNode(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nDockBuilderRemoveNodeDockedWindows__I(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:1036

        ImGui::DockBuilderRemoveNodeDockedWindows(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nDockBuilderRemoveNodeDockedWindows__IZ(JNIEnv* env, jclass clazz, jint nodeId, jboolean clearSettingsRefs) {


//@line:1040

        ImGui::DockBuilderRemoveNodeDockedWindows(nodeId, clearSettingsRefs);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nDockBuilderRemoveNodeChildNodes(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:1051

        ImGui::DockBuilderRemoveNodeChildNodes(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nDockBuilderSetNodePos(JNIEnv* env, jclass clazz, jint nodeId, jfloat posX, jfloat posY) {

//@line:1063

        ImVec2 pos = ImVec2(posX, posY);
        ImGui::DockBuilderSetNodePos(nodeId, pos);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nDockBuilderSetNodeSize(JNIEnv* env, jclass clazz, jint nodeId, jfloat sizeX, jfloat sizeY) {

//@line:1076

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::DockBuilderSetNodeSize(nodeId, size);
    
}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nDockBuilderSplitNode(JNIEnv* env, jclass clazz, jint nodeId, jint splitDir, jfloat sizeRatioForNodeAtDir, jintArray obj_outIdAtDir, jintArray obj_outIdAtOppositeDir) {

//@line:1088

        auto outIdAtDir = obj_outIdAtDir == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_outIdAtDir, JNI_FALSE);
        auto outIdAtOppositeDir = obj_outIdAtOppositeDir == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_outIdAtOppositeDir, JNI_FALSE);
        auto _result = ImGui::DockBuilderSplitNode(nodeId, static_cast<ImGuiDir>(splitDir), sizeRatioForNodeAtDir, reinterpret_cast<ImGuiID*>((outIdAtDir != NULL ? &outIdAtDir[0] : NULL)), reinterpret_cast<ImGuiID*>((outIdAtOppositeDir != NULL ? &outIdAtOppositeDir[0] : NULL)));
        if (outIdAtDir != NULL) env->ReleasePrimitiveArrayCritical(obj_outIdAtDir, outIdAtDir, JNI_FALSE);
        if (outIdAtOppositeDir != NULL) env->ReleasePrimitiveArrayCritical(obj_outIdAtOppositeDir, outIdAtOppositeDir, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nDockBuilderCopyWindowSettings(JNIEnv* env, jclass clazz, jstring obj_srcName, jstring obj_dstName) {

//@line:1103

        auto srcName = obj_srcName == NULL ? NULL : (char*)env->GetStringUTFChars(obj_srcName, JNI_FALSE);
        auto dstName = obj_dstName == NULL ? NULL : (char*)env->GetStringUTFChars(obj_dstName, JNI_FALSE);
        ImGui::DockBuilderCopyWindowSettings(srcName, dstName);
        if (srcName != NULL) env->ReleaseStringUTFChars(obj_srcName, srcName);
        if (dstName != NULL) env->ReleaseStringUTFChars(obj_dstName, dstName);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nDockBuilderFinish(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:1115

        ImGui::DockBuilderFinish(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nTableOpenContextMenu__(JNIEnv* env, jclass clazz) {


//@line:1129

        ImGui::TableOpenContextMenu();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nTableOpenContextMenu__I(JNIEnv* env, jclass clazz, jint columnN) {


//@line:1133

        ImGui::TableOpenContextMenu(columnN);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nTableSetColumnWidth(JNIEnv* env, jclass clazz, jint columnN, jfloat width) {


//@line:1141

        ImGui::TableSetColumnWidth(columnN, width);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nTableSetColumnSortDirection(JNIEnv* env, jclass clazz, jint columnN, jint sortDirection, jboolean appendToSortSpecs) {


//@line:1149

        ImGui::TableSetColumnSortDirection(columnN, static_cast<ImGuiSortDirection>(sortDirection), appendToSortSpecs);
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nTableGetHoveredColumn(JNIEnv* env, jclass clazz) {


//@line:1161

        return ImGui::TableGetHoveredColumn();
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nTableGetHoveredRow(JNIEnv* env, jclass clazz) {


//@line:1172

        return ImGui::TableGetHoveredRow();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_internal_ImGui_nTableGetHeaderRowHeight(JNIEnv* env, jclass clazz) {


//@line:1180

        return ImGui::TableGetHeaderRowHeight();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nTablePushBackgroundChannel(JNIEnv* env, jclass clazz) {


//@line:1188

        ImGui::TablePushBackgroundChannel();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nTablePopBackgroundChannel(JNIEnv* env, jclass clazz) {


//@line:1196

        ImGui::TablePopBackgroundChannel();
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nTextEx__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_beginText) {

//@line:1214

        auto beginText = obj_beginText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_beginText, JNI_FALSE);
        ImGui::TextEx(beginText);
        if (beginText != NULL) env->ReleaseStringUTFChars(obj_beginText, beginText);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nTextEx__Ljava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_beginText, jstring obj_endText) {

//@line:1220

        auto beginText = obj_beginText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_beginText, JNI_FALSE);
        auto endText = obj_endText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_endText, JNI_FALSE);
        ImGui::TextEx(beginText, endText);
        if (beginText != NULL) env->ReleaseStringUTFChars(obj_beginText, beginText);
        if (endText != NULL) env->ReleaseStringUTFChars(obj_endText, endText);
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nTextEx__Ljava_lang_String_2Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_beginText, jstring obj_endText, jint flags) {

//@line:1228

        auto beginText = obj_beginText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_beginText, JNI_FALSE);
        auto endText = obj_endText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_endText, JNI_FALSE);
        ImGui::TextEx(beginText, endText, static_cast<ImGuiTextFlags>(flags));
        if (beginText != NULL) env->ReleaseStringUTFChars(obj_beginText, beginText);
        if (endText != NULL) env->ReleaseStringUTFChars(obj_endText, endText);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nButtonEx__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:1260

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::ButtonEx(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nButtonEx__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY) {

//@line:1267

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::ButtonEx(label, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nButtonEx__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jint flags) {

//@line:1275

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::ButtonEx(label, size, static_cast<ImGuiButtonFlags>(flags));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nButtonEx__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint flags) {

//@line:1283

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::ButtonEx(label, ImVec2(0,0), static_cast<ImGuiButtonFlags>(flags));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nArrowButtonEx__Ljava_lang_String_2IFF(JNIEnv* env, jclass clazz, jstring obj_strId, jint dir, jfloat sizeX, jfloat sizeY) {

//@line:1306

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::ArrowButtonEx(strId, static_cast<ImGuiDir>(dir), size);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nArrowButtonEx__Ljava_lang_String_2IFFI(JNIEnv* env, jclass clazz, jstring obj_strId, jint dir, jfloat sizeX, jfloat sizeY, jint flags) {

//@line:1314

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::ArrowButtonEx(strId, static_cast<ImGuiDir>(dir), size, static_cast<ImGuiButtonFlags>(flags));
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nImageButtonEx(JNIEnv* env, jclass clazz, jint id, jlong textureId, jfloat sizeX, jfloat sizeY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y, jfloat bgColX, jfloat bgColY, jfloat bgColZ, jfloat bgColW, jfloat tintColX, jfloat tintColY, jfloat tintColZ, jfloat tintColW, jint flags) {

//@line:1330

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec4 bgCol = ImVec4(bgColX, bgColY, bgColZ, bgColW);
        ImVec4 tintCol = ImVec4(tintColX, tintColY, tintColZ, tintColW);
        auto _result = ImGui::ImageButtonEx((ImGuiID)id, (ImTextureID)(uintptr_t)textureId, size, uv0, uv1, bgCol, tintCol, static_cast<ImGuiButtonFlags>(flags));
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSeparatorEx__I(JNIEnv* env, jclass clazz, jint flags) {


//@line:1348

        ImGui::SeparatorEx(static_cast<ImGuiSeparatorFlags>(flags));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSeparatorEx__IF(JNIEnv* env, jclass clazz, jint flags, jfloat thickness) {


//@line:1352

        ImGui::SeparatorEx(static_cast<ImGuiSeparatorFlags>(flags), thickness);
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nSeparatorTextEx(JNIEnv* env, jclass clazz, jint id, jstring obj_label, jstring obj_labelEnd, jfloat extraWidth) {

//@line:1360

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto labelEnd = obj_labelEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelEnd, JNI_FALSE);
        ImGui::SeparatorTextEx((ImGuiID)id, label, labelEnd, extraWidth);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (labelEnd != NULL) env->ReleaseStringUTFChars(obj_labelEnd, labelEnd);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nCloseButton(JNIEnv* env, jclass clazz, jint id, jfloat posX, jfloat posY) {

//@line:1378

        ImVec2 pos = ImVec2(posX, posY);
        auto _result = ImGui::CloseButton((ImGuiID)id, pos);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nCollapseButton(JNIEnv* env, jclass clazz, jint id, jfloat posX, jfloat posY, jlong dockNode) {

//@line:1392

        ImVec2 pos = ImVec2(posX, posY);
        auto _result = ImGui::CollapseButton((ImGuiID)id, pos, reinterpret_cast<ImGuiDockNode*>(dockNode));
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nScrollbar(JNIEnv* env, jclass clazz, jint axis) {


//@line:1402

        ImGui::Scrollbar(static_cast<ImGuiAxis>(axis));
    

}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nGetWindowScrollbarRect(JNIEnv* env, jclass clazz, jobject dst, jlong imGuiWindow, jint axis) {


//@line:1416

        Jni::ImRectCpy(env, ImGui::GetWindowScrollbarRect(reinterpret_cast<ImGuiWindow*>(imGuiWindow), static_cast<ImGuiAxis>(axis)), dst);
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nGetWindowScrollbarID(JNIEnv* env, jclass clazz, jlong window, jint axis) {


//@line:1424

        return ImGui::GetWindowScrollbarID(reinterpret_cast<ImGuiWindow*>(window), static_cast<ImGuiAxis>(axis));
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nGetWindowResizeCornerID(JNIEnv* env, jclass clazz, jlong window, jint n) {


//@line:1432

        return ImGui::GetWindowResizeCornerID(reinterpret_cast<ImGuiWindow*>(window), n);
    

}

JNIEXPORT jint JNICALL Java_imgui_internal_ImGui_nGetWindowResizeBorderID(JNIEnv* env, jclass clazz, jlong window, jint dir) {


//@line:1440

        return ImGui::GetWindowResizeBorderID(reinterpret_cast<ImGuiWindow*>(window), static_cast<ImGuiDir>(dir));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nButtonBehavior__FFFFI_3Z_3Z(JNIEnv* env, jclass clazz, jfloat bbMinX, jfloat bbMinY, jfloat bbMaxX, jfloat bbMaxY, jint id, jbooleanArray obj_outHovered, jbooleanArray obj_outHeld) {

//@line:1462

        auto outHovered = obj_outHovered == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_outHovered, JNI_FALSE);
        auto outHeld = obj_outHeld == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_outHeld, JNI_FALSE);
        auto _result = ImGui::ButtonBehavior(ImRect(bbMinX, bbMinY, bbMaxX, bbMaxY), (ImGuiID)id, (outHovered != NULL ? &outHovered[0] : NULL), (outHeld != NULL ? &outHeld[0] : NULL));
        if (outHovered != NULL) env->ReleasePrimitiveArrayCritical(obj_outHovered, outHovered, JNI_FALSE);
        if (outHeld != NULL) env->ReleasePrimitiveArrayCritical(obj_outHeld, outHeld, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nButtonBehavior__FFFFI_3Z_3ZI(JNIEnv* env, jclass clazz, jfloat bbMinX, jfloat bbMinY, jfloat bbMaxX, jfloat bbMaxY, jint id, jbooleanArray obj_outHovered, jbooleanArray obj_outHeld, jint imGuiButtonFlags) {

//@line:1471

        auto outHovered = obj_outHovered == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_outHovered, JNI_FALSE);
        auto outHeld = obj_outHeld == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_outHeld, JNI_FALSE);
        auto _result = ImGui::ButtonBehavior(ImRect(bbMinX, bbMinY, bbMaxX, bbMaxY), (ImGuiID)id, (outHovered != NULL ? &outHovered[0] : NULL), (outHeld != NULL ? &outHeld[0] : NULL), static_cast<ImGuiButtonFlags>(imGuiButtonFlags));
        if (outHovered != NULL) env->ReleasePrimitiveArrayCritical(obj_outHovered, outHovered, JNI_FALSE);
        if (outHeld != NULL) env->ReleasePrimitiveArrayCritical(obj_outHeld, outHeld, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nSplitterBehavior__FFFFII_3F_3FFF(JNIEnv* env, jclass clazz, jfloat bbMinX, jfloat bbMinY, jfloat bbMaxX, jfloat bbMaxY, jint id, jint axis, jfloatArray obj_size1, jfloatArray obj_size2, jfloat minSize1, jfloat minSize2) {

//@line:1512

        auto size1 = obj_size1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_size1, JNI_FALSE);
        auto size2 = obj_size2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_size2, JNI_FALSE);
        auto _result = ImGui::SplitterBehavior(ImRect(bbMinX, bbMinY, bbMaxX, bbMaxY), id, static_cast<ImGuiAxis>(axis), (size1 != NULL ? &size1[0] : NULL), (size2 != NULL ? &size2[0] : NULL), minSize1, minSize2);
        if (size1 != NULL) env->ReleasePrimitiveArrayCritical(obj_size1, size1, JNI_FALSE);
        if (size2 != NULL) env->ReleasePrimitiveArrayCritical(obj_size2, size2, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nSplitterBehavior__FFFFII_3F_3FFFF(JNIEnv* env, jclass clazz, jfloat bbMinX, jfloat bbMinY, jfloat bbMaxX, jfloat bbMaxY, jint id, jint axis, jfloatArray obj_size1, jfloatArray obj_size2, jfloat minSize1, jfloat minSize2, jfloat hoverExtend) {

//@line:1521

        auto size1 = obj_size1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_size1, JNI_FALSE);
        auto size2 = obj_size2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_size2, JNI_FALSE);
        auto _result = ImGui::SplitterBehavior(ImRect(bbMinX, bbMinY, bbMaxX, bbMaxY), id, static_cast<ImGuiAxis>(axis), (size1 != NULL ? &size1[0] : NULL), (size2 != NULL ? &size2[0] : NULL), minSize1, minSize2, hoverExtend);
        if (size1 != NULL) env->ReleasePrimitiveArrayCritical(obj_size1, size1, JNI_FALSE);
        if (size2 != NULL) env->ReleasePrimitiveArrayCritical(obj_size2, size2, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nSplitterBehavior__FFFFII_3F_3FFFFF(JNIEnv* env, jclass clazz, jfloat bbMinX, jfloat bbMinY, jfloat bbMaxX, jfloat bbMaxY, jint id, jint axis, jfloatArray obj_size1, jfloatArray obj_size2, jfloat minSize1, jfloat minSize2, jfloat hoverExtend, jfloat hoverVisibilityDelay) {

//@line:1530

        auto size1 = obj_size1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_size1, JNI_FALSE);
        auto size2 = obj_size2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_size2, JNI_FALSE);
        auto _result = ImGui::SplitterBehavior(ImRect(bbMinX, bbMinY, bbMaxX, bbMaxY), id, static_cast<ImGuiAxis>(axis), (size1 != NULL ? &size1[0] : NULL), (size2 != NULL ? &size2[0] : NULL), minSize1, minSize2, hoverExtend, hoverVisibilityDelay);
        if (size1 != NULL) env->ReleasePrimitiveArrayCritical(obj_size1, size1, JNI_FALSE);
        if (size2 != NULL) env->ReleasePrimitiveArrayCritical(obj_size2, size2, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_internal_ImGui_nSplitterBehavior__FFFFII_3F_3FFFFFI(JNIEnv* env, jclass clazz, jfloat bbMinX, jfloat bbMinY, jfloat bbMaxX, jfloat bbMaxY, jint id, jint axis, jfloatArray obj_size1, jfloatArray obj_size2, jfloat minSize1, jfloat minSize2, jfloat hoverExtend, jfloat hoverVisibilityDelay, jint bgCol) {

//@line:1539

        auto size1 = obj_size1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_size1, JNI_FALSE);
        auto size2 = obj_size2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_size2, JNI_FALSE);
        auto _result = ImGui::SplitterBehavior(ImRect(bbMinX, bbMinY, bbMaxX, bbMaxY), id, static_cast<ImGuiAxis>(axis), (size1 != NULL ? &size1[0] : NULL), (size2 != NULL ? &size2[0] : NULL), minSize1, minSize2, hoverExtend, hoverVisibilityDelay, bgCol);
        if (size1 != NULL) env->ReleasePrimitiveArrayCritical(obj_size1, size1, JNI_FALSE);
        if (size2 != NULL) env->ReleasePrimitiveArrayCritical(obj_size2, size2, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_internal_ImGui_nShadeVertsTransformPos(JNIEnv* env, jclass clazz, jlong drawList, jint vertStartIdx, jint vertEndIdx, jfloat pivotInX, jfloat pivotInY, jfloat cosA, jfloat sinA, jfloat pivotOutX, jfloat pivotOutY) {

//@line:1558

        ImVec2 pivotIn = ImVec2(pivotInX, pivotInY);
        ImVec2 pivotOut = ImVec2(pivotOutX, pivotOutY);
        ImGui::ShadeVertsTransformPos(reinterpret_cast<ImDrawList*>(drawList), vertStartIdx, vertEndIdx, pivotIn, cosA, sinA, pivotOut);
    
}

