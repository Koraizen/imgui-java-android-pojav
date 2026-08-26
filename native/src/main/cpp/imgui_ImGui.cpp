#include <imgui_ImGui.h>

//@line:137

        #include "_common.h"
     JNIEXPORT void JNICALL Java_imgui_ImGui_nInitJni(JNIEnv* env, jclass clazz) {


//@line:141

        Jni::InitJvm(env);
        Jni::InitCommon(env);
        Jni::InitAssertion(env);
        Jni::InitCallbacks(env);
        Jni::InitBindingStruct(env);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_setAssertCallback(JNIEnv* env, jclass clazz, jobject callback) {


//@line:157

        Jni::SetAssertionCallback(callback);
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nCreateContext__(JNIEnv* env, jclass clazz) {


//@line:174

        return (uintptr_t)ImGui::CreateContext();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nCreateContext__J(JNIEnv* env, jclass clazz, jlong sharedFontAtlas) {


//@line:178

        return (uintptr_t)ImGui::CreateContext(reinterpret_cast<ImFontAtlas*>(sharedFontAtlas));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nDestroyContext__(JNIEnv* env, jclass clazz) {


//@line:190

        ImGui::DestroyContext();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nDestroyContext__J(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:194

        ImGui::DestroyContext(reinterpret_cast<ImGuiContext*>(ctx));
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetCurrentContext(JNIEnv* env, jclass clazz) {


//@line:202

        return (uintptr_t)ImGui::GetCurrentContext();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetCurrentContext(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:210

        ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetIO(JNIEnv* env, jclass clazz) {


//@line:226

        return (uintptr_t)&ImGui::GetIO();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetStyle(JNIEnv* env, jclass clazz) {


//@line:240

        return (uintptr_t)&ImGui::GetStyle();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nNewFrame(JNIEnv* env, jclass clazz) {


//@line:251

        ImGui::NewFrame();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndFrame(JNIEnv* env, jclass clazz) {


//@line:263

        ImGui::EndFrame();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nRender(JNIEnv* env, jclass clazz) {


//@line:274

        ImGui::Render();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetDrawData(JNIEnv* env, jclass clazz) {


//@line:288

        return (uintptr_t)ImGui::GetDrawData();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowDemoWindow__(JNIEnv* env, jclass clazz) {


//@line:308

        ImGui::ShowDemoWindow();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowDemoWindow___3Z(JNIEnv* env, jclass clazz, jbooleanArray obj_pOpen) {

//@line:312

        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        ImGui::ShowDemoWindow((pOpen != NULL ? &pOpen[0] : NULL));
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowMetricsWindow__(JNIEnv* env, jclass clazz) {


//@line:332

        ImGui::ShowMetricsWindow();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowMetricsWindow___3Z(JNIEnv* env, jclass clazz, jbooleanArray obj_pOpen) {

//@line:336

        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        ImGui::ShowMetricsWindow((pOpen != NULL ? &pOpen[0] : NULL));
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowDebugLogWindow__(JNIEnv* env, jclass clazz) {


//@line:356

        ImGui::ShowDebugLogWindow();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowDebugLogWindow___3Z(JNIEnv* env, jclass clazz, jbooleanArray obj_pOpen) {

//@line:360

        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        ImGui::ShowDebugLogWindow((pOpen != NULL ? &pOpen[0] : NULL));
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowIDStackToolWindow__(JNIEnv* env, jclass clazz) {


//@line:380

        ImGui::ShowIDStackToolWindow();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowIDStackToolWindow___3Z(JNIEnv* env, jclass clazz, jbooleanArray obj_pOpen) {

//@line:384

        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        ImGui::ShowIDStackToolWindow((pOpen != NULL ? &pOpen[0] : NULL));
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowAboutWindow__(JNIEnv* env, jclass clazz) {


//@line:404

        ImGui::ShowAboutWindow();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowAboutWindow___3Z(JNIEnv* env, jclass clazz, jbooleanArray obj_pOpen) {

//@line:408

        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        ImGui::ShowAboutWindow((pOpen != NULL ? &pOpen[0] : NULL));
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowStyleEditor__(JNIEnv* env, jclass clazz) {


//@line:430

        ImGui::ShowStyleEditor();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowStyleEditor__J(JNIEnv* env, jclass clazz, jlong ref) {


//@line:434

        ImGui::ShowStyleEditor(reinterpret_cast<ImGuiStyle*>(ref));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nShowStyleSelector(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:445

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::ShowStyleSelector(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowFontSelector(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:459

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImGui::ShowFontSelector(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowUserGuide(JNIEnv* env, jclass clazz) {


//@line:472

        ImGui::ShowUserGuide();
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_nGetVersion(JNIEnv* env, jclass clazz) {


//@line:483

        return env->NewStringUTF(ImGui::GetVersion());
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nStyleColorsDark__(JNIEnv* env, jclass clazz) {


//@line:503

        ImGui::StyleColorsDark();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nStyleColorsDark__J(JNIEnv* env, jclass clazz, jlong style) {


//@line:507

        ImGui::StyleColorsDark(reinterpret_cast<ImGuiStyle*>(style));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nStyleColorsLight__(JNIEnv* env, jclass clazz) {


//@line:525

        ImGui::StyleColorsLight();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nStyleColorsLight__J(JNIEnv* env, jclass clazz, jlong style) {


//@line:529

        ImGui::StyleColorsLight(reinterpret_cast<ImGuiStyle*>(style));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nStyleColorsClassic__(JNIEnv* env, jclass clazz) {


//@line:547

        ImGui::StyleColorsClassic();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nStyleColorsClassic__J(JNIEnv* env, jclass clazz, jlong style) {


//@line:551

        ImGui::StyleColorsClassic(reinterpret_cast<ImGuiStyle*>(style));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBegin__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_title) {

//@line:584

        auto title = obj_title == NULL ? NULL : (char*)env->GetStringUTFChars(obj_title, JNI_FALSE);
        auto _result = ImGui::Begin(title);
        if (title != NULL) env->ReleaseStringUTFChars(obj_title, title);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBegin__Ljava_lang_String_2_3Z(JNIEnv* env, jclass clazz, jstring obj_title, jbooleanArray obj_pOpen) {

//@line:591

        auto title = obj_title == NULL ? NULL : (char*)env->GetStringUTFChars(obj_title, JNI_FALSE);
        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        auto _result = ImGui::Begin(title, (pOpen != NULL ? &pOpen[0] : NULL));
        if (title != NULL) env->ReleaseStringUTFChars(obj_title, title);
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBegin__Ljava_lang_String_2_3ZI(JNIEnv* env, jclass clazz, jstring obj_title, jbooleanArray obj_pOpen, jint imGuiWindowFlags) {

//@line:600

        auto title = obj_title == NULL ? NULL : (char*)env->GetStringUTFChars(obj_title, JNI_FALSE);
        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        auto _result = ImGui::Begin(title, (pOpen != NULL ? &pOpen[0] : NULL), imGuiWindowFlags);
        if (title != NULL) env->ReleaseStringUTFChars(obj_title, title);
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBegin__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_title, jint imGuiWindowFlags) {

//@line:609

        auto title = obj_title == NULL ? NULL : (char*)env->GetStringUTFChars(obj_title, JNI_FALSE);
        auto _result = ImGui::Begin(title, NULL, imGuiWindowFlags);
        if (title != NULL) env->ReleaseStringUTFChars(obj_title, title);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEnd(JNIEnv* env, jclass clazz) {


//@line:620

        ImGui::End();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:679

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginChild(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_strId, jfloat sizeX, jfloat sizeY) {

//@line:686

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::BeginChild(strId, size);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_strId, jfloat sizeX, jfloat sizeY, jint childFlags) {

//@line:694

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::BeginChild(strId, size, childFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__Ljava_lang_String_2FFII(JNIEnv* env, jclass clazz, jstring obj_strId, jfloat sizeX, jfloat sizeY, jint childFlags, jint windowFlags) {

//@line:702

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::BeginChild(strId, size, childFlags, windowFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__Ljava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_strId, jint childFlags, jint windowFlags) {

//@line:710

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginChild(strId, ImVec2(0,0), childFlags, windowFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_strId, jint windowFlags) {

//@line:717

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginChild(strId, ImVec2(0,0), 0, windowFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__I(JNIEnv* env, jclass clazz, jint id) {


//@line:760

        return ImGui::BeginChild(id);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__IFF(JNIEnv* env, jclass clazz, jint id, jfloat sizeX, jfloat sizeY) {

//@line:764

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::BeginChild(id, size);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__IFFI(JNIEnv* env, jclass clazz, jint id, jfloat sizeX, jfloat sizeY, jint childFlags) {

//@line:770

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::BeginChild(id, size, childFlags);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__IFFII(JNIEnv* env, jclass clazz, jint id, jfloat sizeX, jfloat sizeY, jint childFlags, jint windowFlags) {

//@line:776

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::BeginChild(id, size, childFlags, windowFlags);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__III(JNIEnv* env, jclass clazz, jint id, jint childFlags, jint windowFlags) {


//@line:782

        return ImGui::BeginChild(id, ImVec2(0,0), childFlags, windowFlags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__II(JNIEnv* env, jclass clazz, jint id, jint windowFlags) {


//@line:786

        return ImGui::BeginChild(id, ImVec2(0,0), 0, windowFlags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__Ljava_lang_String_2FFZ(JNIEnv* env, jclass clazz, jstring obj_strId, jfloat sizeX, jfloat sizeY, jboolean border) {

//@line:806

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::BeginChild(strId, size, static_cast<ImGuiChildFlags>(border));
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__Ljava_lang_String_2FFZI(JNIEnv* env, jclass clazz, jstring obj_strId, jfloat sizeX, jfloat sizeY, jboolean border, jint windowFlags) {

//@line:814

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::BeginChild(strId, size, static_cast<ImGuiChildFlags>(border), windowFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__IFFZ(JNIEnv* env, jclass clazz, jint id, jfloat sizeX, jfloat sizeY, jboolean border) {

//@line:858

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::BeginChild(id, size, static_cast<ImGuiChildFlags>(border));
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginChild__IFFZI(JNIEnv* env, jclass clazz, jint id, jfloat sizeX, jfloat sizeY, jboolean border, jint windowFlags) {

//@line:864

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::BeginChild(id, size, static_cast<ImGuiChildFlags>(border), windowFlags);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndChild(JNIEnv* env, jclass clazz) {


//@line:874

        ImGui::EndChild();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsWindowAppearing(JNIEnv* env, jclass clazz) {


//@line:885

        return ImGui::IsWindowAppearing();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsWindowCollapsed(JNIEnv* env, jclass clazz) {


//@line:893

        return ImGui::IsWindowCollapsed();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsWindowFocused__(JNIEnv* env, jclass clazz) {


//@line:911

        return ImGui::IsWindowFocused();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsWindowFocused__I(JNIEnv* env, jclass clazz, jint imGuiFocusedFlags) {


//@line:915

        return ImGui::IsWindowFocused(imGuiFocusedFlags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsWindowHovered__(JNIEnv* env, jclass clazz) {


//@line:939

        return ImGui::IsWindowHovered();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsWindowHovered__I(JNIEnv* env, jclass clazz, jint imGuiHoveredFlags) {


//@line:943

        return ImGui::IsWindowHovered(imGuiHoveredFlags);
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetWindowDrawList(JNIEnv* env, jclass clazz) {


//@line:954

        return (uintptr_t)ImGui::GetWindowDrawList();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetWindowDpiScale(JNIEnv* env, jclass clazz) {


//@line:965

        return ImGui::GetWindowDpiScale();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetWindowPos(JNIEnv* env, jclass clazz, jobject dst) {


//@line:1003

        Jni::ImVec2Cpy(env, ImGui::GetWindowPos(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetWindowPosX(JNIEnv* env, jclass clazz) {


//@line:1007

        return ImGui::GetWindowPos().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetWindowPosY(JNIEnv* env, jclass clazz) {


//@line:1011

        return ImGui::GetWindowPos().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetWindowSize(JNIEnv* env, jclass clazz, jobject dst) {


//@line:1045

        Jni::ImVec2Cpy(env, ImGui::GetWindowSize(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetWindowSizeX(JNIEnv* env, jclass clazz) {


//@line:1049

        return ImGui::GetWindowSize().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetWindowSizeY(JNIEnv* env, jclass clazz) {


//@line:1053

        return ImGui::GetWindowSize().y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetWindowWidth(JNIEnv* env, jclass clazz) {


//@line:1064

        return ImGui::GetWindowWidth();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetWindowHeight(JNIEnv* env, jclass clazz) {


//@line:1075

        return ImGui::GetWindowHeight();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetWindowViewport(JNIEnv* env, jclass clazz) {


//@line:1086

        return (uintptr_t)ImGui::GetWindowViewport();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowPos__FF(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY) {

//@line:1148

        ImVec2 pos = ImVec2(posX, posY);
        ImGui::SetNextWindowPos(pos);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowPos__FFI(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY, jint cond) {

//@line:1153

        ImVec2 pos = ImVec2(posX, posY);
        ImGui::SetNextWindowPos(pos, cond);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowPos__FFIFF(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY, jint cond, jfloat pivotX, jfloat pivotY) {

//@line:1158

        ImVec2 pos = ImVec2(posX, posY);
        ImVec2 pivot = ImVec2(pivotX, pivotY);
        ImGui::SetNextWindowPos(pos, cond, pivot);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowPos__FFFF(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY, jfloat pivotX, jfloat pivotY) {

//@line:1164

        ImVec2 pos = ImVec2(posX, posY);
        ImVec2 pivot = ImVec2(pivotX, pivotY);
        ImGui::SetNextWindowPos(pos, ImGuiCond_None, pivot);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowSize__FF(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY) {

//@line:1198

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::SetNextWindowSize(size);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowSize__FFI(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY, jint cond) {

//@line:1203

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::SetNextWindowSize(size, cond);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowSizeConstraints(JNIEnv* env, jclass clazz, jfloat sizeMinX, jfloat sizeMinY, jfloat sizeMaxX, jfloat sizeMaxY) {

//@line:1224

        ImVec2 sizeMin = ImVec2(sizeMinX, sizeMinY);
        ImVec2 sizeMax = ImVec2(sizeMaxX, sizeMaxY);
        ImGui::SetNextWindowSizeConstraints(sizeMin, sizeMax);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowContentSize(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY) {

//@line:1246

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::SetNextWindowContentSize(size);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowCollapsed__Z(JNIEnv* env, jclass clazz, jboolean collapsed) {


//@line:1265

        ImGui::SetNextWindowCollapsed(collapsed);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowCollapsed__ZI(JNIEnv* env, jclass clazz, jboolean collapsed, jint cond) {


//@line:1269

        ImGui::SetNextWindowCollapsed(collapsed, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowFocus(JNIEnv* env, jclass clazz) {


//@line:1280

        ImGui::SetNextWindowFocus();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowScroll(JNIEnv* env, jclass clazz, jfloat scrollX, jfloat scrollY) {

//@line:1298

        ImVec2 scroll = ImVec2(scrollX, scrollY);
        ImGui::SetNextWindowScroll(scroll);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowBgAlpha(JNIEnv* env, jclass clazz, jfloat alpha) {


//@line:1311

        ImGui::SetNextWindowBgAlpha(alpha);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowViewport(JNIEnv* env, jclass clazz, jint viewportId) {


//@line:1322

        ImGui::SetNextWindowViewport(viewportId);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowPos__FF(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY) {

//@line:1358

        ImVec2 pos = ImVec2(posX, posY);
        ImGui::SetWindowPos(pos);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowPos__FFI(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY, jint cond) {

//@line:1363

        ImVec2 pos = ImVec2(posX, posY);
        ImGui::SetWindowPos(pos, cond);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowSize__FF(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY) {

//@line:1400

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::SetWindowSize(size);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowSize__FFI(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY, jint cond) {

//@line:1405

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::SetWindowSize(size, cond);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowCollapsed__Z(JNIEnv* env, jclass clazz, jboolean collapsed) {


//@line:1424

        ImGui::SetWindowCollapsed(collapsed);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowCollapsed__ZI(JNIEnv* env, jclass clazz, jboolean collapsed, jint cond) {


//@line:1428

        ImGui::SetWindowCollapsed(collapsed, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowFocus__(JNIEnv* env, jclass clazz) {


//@line:1439

        ImGui::SetWindowFocus();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowFontScale(JNIEnv* env, jclass clazz, jfloat scale) {


//@line:1451

        ImGui::SetWindowFontScale(scale);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowPos__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_name, jfloat posX, jfloat posY) {

//@line:1483

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImGui::SetWindowPos(name, pos);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowPos__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_name, jfloat posX, jfloat posY, jint cond) {

//@line:1490

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImGui::SetWindowPos(name, pos, cond);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowSize__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_name, jfloat sizeX, jfloat sizeY) {

//@line:1525

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::SetWindowSize(name, size);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowSize__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_name, jfloat sizeX, jfloat sizeY, jint cond) {

//@line:1532

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::SetWindowSize(name, size, cond);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowCollapsed__Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_name, jboolean collapsed) {

//@line:1553

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        ImGui::SetWindowCollapsed((const char *)name, (bool)collapsed);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowCollapsed__Ljava_lang_String_2ZI(JNIEnv* env, jclass clazz, jstring obj_name, jboolean collapsed, jint cond) {

//@line:1559

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        ImGui::SetWindowCollapsed((const char *)name, (bool)collapsed, cond);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetWindowFocus__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_name) {

//@line:1572

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        ImGui::SetWindowFocus(name);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetContentRegionAvail(JNIEnv* env, jclass clazz, jobject dst) {


//@line:1612

        Jni::ImVec2Cpy(env, ImGui::GetContentRegionAvail(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetContentRegionAvailX(JNIEnv* env, jclass clazz) {


//@line:1616

        return ImGui::GetContentRegionAvail().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetContentRegionAvailY(JNIEnv* env, jclass clazz) {


//@line:1620

        return ImGui::GetContentRegionAvail().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetContentRegionMax(JNIEnv* env, jclass clazz, jobject dst) {


//@line:1654

        Jni::ImVec2Cpy(env, ImGui::GetContentRegionMax(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetContentRegionMaxX(JNIEnv* env, jclass clazz) {


//@line:1658

        return ImGui::GetContentRegionMax().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetContentRegionMaxY(JNIEnv* env, jclass clazz) {


//@line:1662

        return ImGui::GetContentRegionMax().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetWindowContentRegionMin(JNIEnv* env, jclass clazz, jobject dst) {


//@line:1696

        Jni::ImVec2Cpy(env, ImGui::GetWindowContentRegionMin(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetWindowContentRegionMinX(JNIEnv* env, jclass clazz) {


//@line:1700

        return ImGui::GetWindowContentRegionMin().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetWindowContentRegionMinY(JNIEnv* env, jclass clazz) {


//@line:1704

        return ImGui::GetWindowContentRegionMin().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetWindowContentRegionMax(JNIEnv* env, jclass clazz, jobject dst) {


//@line:1738

        Jni::ImVec2Cpy(env, ImGui::GetWindowContentRegionMax(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetWindowContentRegionMaxX(JNIEnv* env, jclass clazz) {


//@line:1742

        return ImGui::GetWindowContentRegionMax().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetWindowContentRegionMaxY(JNIEnv* env, jclass clazz) {


//@line:1746

        return ImGui::GetWindowContentRegionMax().y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetScrollX(JNIEnv* env, jclass clazz) {


//@line:1761

        return ImGui::GetScrollX();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetScrollY(JNIEnv* env, jclass clazz) {


//@line:1772

        return ImGui::GetScrollY();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetScrollX(JNIEnv* env, jclass clazz, jfloat scrollX) {


//@line:1783

        ImGui::SetScrollX(scrollX);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetScrollY(JNIEnv* env, jclass clazz, jfloat scrollY) {


//@line:1794

        ImGui::SetScrollY(scrollY);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetScrollMaxX(JNIEnv* env, jclass clazz) {


//@line:1805

        return ImGui::GetScrollMaxX();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetScrollMaxY(JNIEnv* env, jclass clazz) {


//@line:1816

        return ImGui::GetScrollMaxY();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetScrollHereX__(JNIEnv* env, jclass clazz) {


//@line:1836

        ImGui::SetScrollHereX();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetScrollHereX__F(JNIEnv* env, jclass clazz, jfloat centerXRatio) {


//@line:1840

        ImGui::SetScrollHereX(centerXRatio);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetScrollHereY__(JNIEnv* env, jclass clazz) {


//@line:1860

        ImGui::SetScrollHereY();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetScrollHereY__F(JNIEnv* env, jclass clazz, jfloat centerYRatio) {


//@line:1864

        ImGui::SetScrollHereY(centerYRatio);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetScrollFromPosX__F(JNIEnv* env, jclass clazz, jfloat localX) {


//@line:1882

        ImGui::SetScrollFromPosX(localX);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetScrollFromPosX__FF(JNIEnv* env, jclass clazz, jfloat localX, jfloat centerXRatio) {


//@line:1886

        ImGui::SetScrollFromPosX(localX, centerXRatio);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetScrollFromPosY__F(JNIEnv* env, jclass clazz, jfloat localY) {


//@line:1904

        ImGui::SetScrollFromPosY(localY);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetScrollFromPosY__FF(JNIEnv* env, jclass clazz, jfloat localY, jfloat centerYRatio) {


//@line:1908

        ImGui::SetScrollFromPosY(localY, centerYRatio);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushFont(JNIEnv* env, jclass clazz, jlong font) {


//@line:1918

        ImGui::PushFont(reinterpret_cast<ImFont*>(font));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPopFont(JNIEnv* env, jclass clazz) {


//@line:1926

        ImGui::PopFont();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushStyleColor(JNIEnv* env, jclass clazz, jint imGuiCol, jint r, jint g, jint b, jint a) {


//@line:1933

        ImGui::PushStyleColor(imGuiCol, (ImU32)ImColor((int)r, (int)g, (int)b, (int)a));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushStyleColor__IFFFF(JNIEnv* env, jclass clazz, jint imGuiCol, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:1951

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImGui::PushStyleColor(imGuiCol, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushStyleColor__II(JNIEnv* env, jclass clazz, jint imGuiCol, jint col) {


//@line:1963

        ImGui::PushStyleColor(imGuiCol, col);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPopStyleColor__(JNIEnv* env, jclass clazz) {


//@line:1975

        ImGui::PopStyleColor();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPopStyleColor__I(JNIEnv* env, jclass clazz, jint count) {


//@line:1979

        ImGui::PopStyleColor(count);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushStyleVar__IF(JNIEnv* env, jclass clazz, jint imGuiStyleVar, jfloat val) {


//@line:1990

        ImGui::PushStyleVar(imGuiStyleVar, val);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushStyleVar__IFF(JNIEnv* env, jclass clazz, jint imGuiStyleVar, jfloat valX, jfloat valY) {

//@line:2008

        ImVec2 val = ImVec2(valX, valY);
        ImGui::PushStyleVar(imGuiStyleVar, val);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPopStyleVar__(JNIEnv* env, jclass clazz) {


//@line:2021

        ImGui::PopStyleVar();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPopStyleVar__I(JNIEnv* env, jclass clazz, jint count) {


//@line:2025

        ImGui::PopStyleVar(count);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushTabStop(JNIEnv* env, jclass clazz, jboolean tabStop) {


//@line:2036

        ImGui::PushTabStop(tabStop);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPopTabStop(JNIEnv* env, jclass clazz) {


//@line:2044

        ImGui::PopTabStop();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushButtonRepeat(JNIEnv* env, jclass clazz, jboolean repeat) {


//@line:2056

        ImGui::PushButtonRepeat(repeat);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPopButtonRepeat(JNIEnv* env, jclass clazz) {


//@line:2064

        ImGui::PopButtonRepeat();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushItemWidth(JNIEnv* env, jclass clazz, jfloat itemWidth) {


//@line:2078

        ImGui::PushItemWidth(itemWidth);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPopItemWidth(JNIEnv* env, jclass clazz) {


//@line:2086

        ImGui::PopItemWidth();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextItemWidth(JNIEnv* env, jclass clazz, jfloat itemWidth) {


//@line:2098

        ImGui::SetNextItemWidth(itemWidth);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nCalcItemWidth(JNIEnv* env, jclass clazz) {


//@line:2109

        return ImGui::CalcItemWidth();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushTextWrapPos__(JNIEnv* env, jclass clazz) {


//@line:2129

        ImGui::PushTextWrapPos();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushTextWrapPos__F(JNIEnv* env, jclass clazz, jfloat wrapLocalPosX) {


//@line:2133

        ImGui::PushTextWrapPos(wrapLocalPosX);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPopTextWrapPos(JNIEnv* env, jclass clazz) {


//@line:2141

        ImGui::PopTextWrapPos();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetFont(JNIEnv* env, jclass clazz) {


//@line:2158

        return (uintptr_t)ImGui::GetFont();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetFontSize(JNIEnv* env, jclass clazz) {


//@line:2169

        return ImGui::GetFontSize();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetFontTexUvWhitePixel(JNIEnv* env, jclass clazz, jobject dst) {


//@line:2203

        Jni::ImVec2Cpy(env, ImGui::GetFontTexUvWhitePixel(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetFontTexUvWhitePixelX(JNIEnv* env, jclass clazz) {


//@line:2207

        return ImGui::GetFontTexUvWhitePixel().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetFontTexUvWhitePixelY(JNIEnv* env, jclass clazz) {


//@line:2211

        return ImGui::GetFontTexUvWhitePixel().y;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetColorU32__I(JNIEnv* env, jclass clazz, jint idx) {


//@line:2229

        return ImGui::GetColorU32(static_cast<ImGuiCol>(idx));
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetColorU32__IF(JNIEnv* env, jclass clazz, jint idx, jfloat alphaMul) {


//@line:2233

        return ImGui::GetColorU32(static_cast<ImGuiCol>(idx), alphaMul);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetColorU32__FFFF(JNIEnv* env, jclass clazz, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:2251

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImGui::GetColorU32(col);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetColorU32i__I(JNIEnv* env, jclass clazz, jint col) {


//@line:2271

        return ImGui::GetColorU32(static_cast<ImU32>(col));
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetColorU32i__IF(JNIEnv* env, jclass clazz, jint col, jfloat alphaMul) {


//@line:2275

        return ImGui::GetColorU32(static_cast<ImU32>(col), alphaMul);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetStyleColorVec4(JNIEnv* env, jclass clazz, jobject dst, jint imGuiColIdx) {


//@line:2329

        Jni::ImVec4Cpy(env, ImGui::GetStyleColorVec4(imGuiColIdx), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetStyleColorVec4X(JNIEnv* env, jclass clazz, jint imGuiColIdx) {


//@line:2333

        return ImGui::GetStyleColorVec4(imGuiColIdx).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetStyleColorVec4Y(JNIEnv* env, jclass clazz, jint imGuiColIdx) {


//@line:2337

        return ImGui::GetStyleColorVec4(imGuiColIdx).y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetStyleColorVec4Z(JNIEnv* env, jclass clazz, jint imGuiColIdx) {


//@line:2341

        return ImGui::GetStyleColorVec4(imGuiColIdx).z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetStyleColorVec4W(JNIEnv* env, jclass clazz, jint imGuiColIdx) {


//@line:2345

        return ImGui::GetStyleColorVec4(imGuiColIdx).w;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetCursorScreenPos(JNIEnv* env, jclass clazz, jobject dst) {


//@line:2388

        Jni::ImVec2Cpy(env, ImGui::GetCursorScreenPos(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetCursorScreenPosX(JNIEnv* env, jclass clazz) {


//@line:2392

        return ImGui::GetCursorScreenPos().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetCursorScreenPosY(JNIEnv* env, jclass clazz) {


//@line:2396

        return ImGui::GetCursorScreenPos().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetCursorScreenPos(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY) {

//@line:2414

        ImVec2 pos = ImVec2(posX, posY);
        ImGui::SetCursorScreenPos(pos);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetCursorPos(JNIEnv* env, jclass clazz, jobject dst) {


//@line:2449

        Jni::ImVec2Cpy(env, ImGui::GetCursorPos(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetCursorPosX(JNIEnv* env, jclass clazz) {


//@line:2453

        return ImGui::GetCursorPos().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetCursorPosY(JNIEnv* env, jclass clazz) {


//@line:2457

        return ImGui::GetCursorPos().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetCursorPos(JNIEnv* env, jclass clazz, jfloat localPosX, jfloat localPosY) {

//@line:2475

        ImVec2 localPos = ImVec2(localPosX, localPosY);
        ImGui::SetCursorPos(localPos);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetCursorPosX(JNIEnv* env, jclass clazz, jfloat localX) {


//@line:2487

        ImGui::SetCursorPosX(localX);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetCursorPosY(JNIEnv* env, jclass clazz, jfloat localY) {


//@line:2498

        ImGui::SetCursorPosY(localY);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetCursorStartPos(JNIEnv* env, jclass clazz, jobject dst) {


//@line:2532

        Jni::ImVec2Cpy(env, ImGui::GetCursorStartPos(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetCursorStartPosX(JNIEnv* env, jclass clazz) {


//@line:2536

        return ImGui::GetCursorStartPos().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetCursorStartPosY(JNIEnv* env, jclass clazz) {


//@line:2540

        return ImGui::GetCursorStartPos().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSeparator(JNIEnv* env, jclass clazz) {


//@line:2553

        ImGui::Separator();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSameLine__(JNIEnv* env, jclass clazz) {


//@line:2578

        ImGui::SameLine();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSameLine__F(JNIEnv* env, jclass clazz, jfloat offsetFromStartX) {


//@line:2582

        ImGui::SameLine(offsetFromStartX);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSameLine__FF(JNIEnv* env, jclass clazz, jfloat offsetFromStartX, jfloat spacing) {


//@line:2586

        ImGui::SameLine(offsetFromStartX, spacing);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nNewLine(JNIEnv* env, jclass clazz) {


//@line:2597

        ImGui::NewLine();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSpacing(JNIEnv* env, jclass clazz) {


//@line:2608

        ImGui::Spacing();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nDummy(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY) {

//@line:2626

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::Dummy(size);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nIndent__(JNIEnv* env, jclass clazz) {


//@line:2645

        ImGui::Indent();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nIndent__F(JNIEnv* env, jclass clazz, jfloat indentW) {


//@line:2649

        ImGui::Indent(indentW);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nUnindent__(JNIEnv* env, jclass clazz) {


//@line:2667

        ImGui::Unindent();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nUnindent__F(JNIEnv* env, jclass clazz, jfloat indentW) {


//@line:2671

        ImGui::Unindent(indentW);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nBeginGroup(JNIEnv* env, jclass clazz) {


//@line:2682

        ImGui::BeginGroup();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndGroup(JNIEnv* env, jclass clazz) {


//@line:2693

        ImGui::EndGroup();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nAlignTextToFramePadding(JNIEnv* env, jclass clazz) {


//@line:2709

        ImGui::AlignTextToFramePadding();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetTextLineHeight(JNIEnv* env, jclass clazz) {


//@line:2720

        return ImGui::GetTextLineHeight();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetTextLineHeightWithSpacing(JNIEnv* env, jclass clazz) {


//@line:2731

        return ImGui::GetTextLineHeightWithSpacing();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetFrameHeight(JNIEnv* env, jclass clazz) {


//@line:2742

        return ImGui::GetFrameHeight();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetFrameHeightWithSpacing(JNIEnv* env, jclass clazz) {


//@line:2753

        return ImGui::GetFrameHeightWithSpacing();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushID__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:2776

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImGui::PushID(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushID__Ljava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strIdBegin, jstring obj_strIdEnd) {

//@line:2789

        auto strIdBegin = obj_strIdBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strIdBegin, JNI_FALSE);
        auto strIdEnd = obj_strIdEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strIdEnd, JNI_FALSE);
        ImGui::PushID(strIdBegin, strIdEnd);
        if (strIdBegin != NULL) env->ReleaseStringUTFChars(obj_strIdBegin, strIdBegin);
        if (strIdEnd != NULL) env->ReleaseStringUTFChars(obj_strIdEnd, strIdEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushID__J(JNIEnv* env, jclass clazz, jlong ptrId) {


//@line:2804

        ImGui::PushID((void*)ptrId);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushID__I(JNIEnv* env, jclass clazz, jint intId) {


//@line:2815

        ImGui::PushID(intId);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPopID(JNIEnv* env, jclass clazz) {


//@line:2826

        ImGui::PopID();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetID__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:2837

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::GetID(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetID__Ljava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strIdBegin, jstring obj_strIdEnd) {

//@line:2851

        auto strIdBegin = obj_strIdBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strIdBegin, JNI_FALSE);
        auto strIdEnd = obj_strIdEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strIdEnd, JNI_FALSE);
        auto _result = ImGui::GetID(strIdBegin, strIdEnd);
        if (strIdBegin != NULL) env->ReleaseStringUTFChars(obj_strIdBegin, strIdBegin);
        if (strIdEnd != NULL) env->ReleaseStringUTFChars(obj_strIdEnd, strIdEnd);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetID__J(JNIEnv* env, jclass clazz, jlong ptrId) {


//@line:2867

        return ImGui::GetID((void*)ptrId);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTextUnformatted__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:2891

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImGui::TextUnformatted(text);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTextUnformatted__Ljava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_text, jstring obj_textEnd) {

//@line:2897

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImGui::TextUnformatted(text, textEnd);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nText(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:2912

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImGui::Text(text, NULL);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTextColored(JNIEnv* env, jclass clazz, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jstring obj_text) {

//@line:2932

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImGui::TextColored(col, text, NULL);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_textColored__IIIILjava_lang_String_2(JNIEnv* env, jclass clazz, jint r, jint g, jint b, jint a, jstring obj_text) {
	char* text = (char*)env->GetStringUTFChars(obj_text, 0);


//@line:2942

        ImGui::TextColored(ImColor((int)r, (int)g, (int)b, (int)a), text, NULL);
    
	env->ReleaseStringUTFChars(obj_text, text);

}

JNIEXPORT void JNICALL Java_imgui_ImGui_textColored__ILjava_lang_String_2(JNIEnv* env, jclass clazz, jint col, jstring obj_text) {
	char* text = (char*)env->GetStringUTFChars(obj_text, 0);


//@line:2949

        ImGui::TextColored(ImColor(col), text, NULL);
    
	env->ReleaseStringUTFChars(obj_text, text);

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTextDisabled(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:2960

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImGui::TextDisabled(text, NULL);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTextWrapped(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:2975

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImGui::TextWrapped(text, NULL);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLabelText(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_text) {

//@line:2988

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImGui::LabelText(label, text, NULL);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nBulletText(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:3003

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImGui::BulletText(text, NULL);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSeparatorText(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:3016

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImGui::SeparatorText(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nButton__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:3047

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::Button(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nButton__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY) {

//@line:3054

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::Button(label, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSmallButton(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:3069

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::SmallButton(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInvisibleButton__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_strId, jfloat sizeX, jfloat sizeY) {

//@line:3104

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::InvisibleButton(strId, size);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInvisibleButton__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_strId, jfloat sizeX, jfloat sizeY, jint imGuiButtonFlags) {

//@line:3112

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::InvisibleButton(strId, size, imGuiButtonFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nArrowButton(JNIEnv* env, jclass clazz, jstring obj_strId, jint dir) {

//@line:3127

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::ArrowButton(strId, static_cast<ImGuiDir>(dir));
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

static inline jboolean wrapped_Java_imgui_ImGui_nCheckbox__Ljava_lang_String_2Z
(JNIEnv* env, jclass clazz, jstring obj_label, jboolean active, char* label) {

//@line:3138

        bool flag = (bool)active;
        return ImGui::Checkbox(label, &flag);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCheckbox__Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_label, jboolean active) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_imgui_ImGui_nCheckbox__Ljava_lang_String_2Z(env, clazz, obj_label, active, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCheckbox__Ljava_lang_String_2_3Z(JNIEnv* env, jclass clazz, jstring obj_label, jbooleanArray obj_data) {

//@line:3147

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto data = obj_data == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_data, JNI_FALSE);
        auto _result = ImGui::Checkbox(label, (data != NULL ? &data[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (data != NULL) env->ReleasePrimitiveArrayCritical(obj_data, data, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCheckboxFlags(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_flags, jint flagsValue) {

//@line:3160

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto flags = obj_flags == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_flags, JNI_FALSE);
        auto _result = ImGui::CheckboxFlags(label, (flags != NULL ? &flags[0] : NULL), flagsValue);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (flags != NULL) env->ReleasePrimitiveArrayCritical(obj_flags, flags, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nRadioButton__Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_label, jboolean active) {

//@line:3176

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::RadioButton(label, active);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nRadioButton__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vButton) {

//@line:3190

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::RadioButton(label, (v != NULL ? &v[0] : NULL), vButton);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nProgressBar__F(JNIEnv* env, jclass clazz, jfloat fraction) {


//@line:3223

        ImGui::ProgressBar(fraction);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nProgressBar__FFF(JNIEnv* env, jclass clazz, jfloat fraction, jfloat sizeX, jfloat sizeY) {

//@line:3227

        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::ProgressBar(fraction, size);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nProgressBar__FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jfloat fraction, jfloat sizeX, jfloat sizeY, jstring obj_overlay) {

//@line:3232

        auto overlay = obj_overlay == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlay, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGui::ProgressBar(fraction, size, overlay);
        if (overlay != NULL) env->ReleaseStringUTFChars(obj_overlay, overlay);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nProgressBar__FLjava_lang_String_2(JNIEnv* env, jclass clazz, jfloat fraction, jstring obj_overlay) {

//@line:3239

        auto overlay = obj_overlay == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlay, JNI_FALSE);
        ImGui::ProgressBar(fraction, ImVec2(-FLT_MIN,0), overlay);
        if (overlay != NULL) env->ReleaseStringUTFChars(obj_overlay, overlay);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nBullet(JNIEnv* env, jclass clazz) {


//@line:3252

        ImGui::Bullet();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nImage__JFF(JNIEnv* env, jclass clazz, jlong userTextureId, jfloat imageSizeX, jfloat imageSizeY) {

//@line:3299

        ImVec2 imageSize = ImVec2(imageSizeX, imageSizeY);
        ImGui::Image((ImTextureID)(uintptr_t)userTextureId, imageSize);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nImage__JFFFF(JNIEnv* env, jclass clazz, jlong userTextureId, jfloat imageSizeX, jfloat imageSizeY, jfloat uv0X, jfloat uv0Y) {

//@line:3304

        ImVec2 imageSize = ImVec2(imageSizeX, imageSizeY);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImGui::Image((ImTextureID)(uintptr_t)userTextureId, imageSize, uv0);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nImage__JFFFFFF(JNIEnv* env, jclass clazz, jlong userTextureId, jfloat imageSizeX, jfloat imageSizeY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y) {

//@line:3310

        ImVec2 imageSize = ImVec2(imageSizeX, imageSizeY);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImGui::Image((ImTextureID)(uintptr_t)userTextureId, imageSize, uv0, uv1);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nImage__JFFFFFFFFFF(JNIEnv* env, jclass clazz, jlong userTextureId, jfloat imageSizeX, jfloat imageSizeY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y, jfloat tintColX, jfloat tintColY, jfloat tintColZ, jfloat tintColW) {

//@line:3317

        ImVec2 imageSize = ImVec2(imageSizeX, imageSizeY);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec4 tintCol = ImVec4(tintColX, tintColY, tintColZ, tintColW);
        ImGui::Image((ImTextureID)(uintptr_t)userTextureId, imageSize, uv0, uv1, tintCol);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nImage__JFFFFFFFFFFFFFF(JNIEnv* env, jclass clazz, jlong userTextureId, jfloat imageSizeX, jfloat imageSizeY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y, jfloat tintColX, jfloat tintColY, jfloat tintColZ, jfloat tintColW, jfloat borderColX, jfloat borderColY, jfloat borderColZ, jfloat borderColW) {

//@line:3325

        ImVec2 imageSize = ImVec2(imageSizeX, imageSizeY);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec4 tintCol = ImVec4(tintColX, tintColY, tintColZ, tintColW);
        ImVec4 borderCol = ImVec4(borderColX, borderColY, borderColZ, borderColW);
        ImGui::Image((ImTextureID)(uintptr_t)userTextureId, imageSize, uv0, uv1, tintCol, borderCol);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nImageButton__Ljava_lang_String_2JFF(JNIEnv* env, jclass clazz, jstring obj_strId, jlong userTextureId, jfloat imageSizeX, jfloat imageSizeY) {

//@line:3374

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 imageSize = ImVec2(imageSizeX, imageSizeY);
        auto _result = ImGui::ImageButton(strId, (ImTextureID)(uintptr_t)userTextureId, imageSize);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nImageButton__Ljava_lang_String_2JFFFF(JNIEnv* env, jclass clazz, jstring obj_strId, jlong userTextureId, jfloat imageSizeX, jfloat imageSizeY, jfloat uv0X, jfloat uv0Y) {

//@line:3382

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 imageSize = ImVec2(imageSizeX, imageSizeY);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        auto _result = ImGui::ImageButton(strId, (ImTextureID)(uintptr_t)userTextureId, imageSize, uv0);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nImageButton__Ljava_lang_String_2JFFFFFF(JNIEnv* env, jclass clazz, jstring obj_strId, jlong userTextureId, jfloat imageSizeX, jfloat imageSizeY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y) {

//@line:3391

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 imageSize = ImVec2(imageSizeX, imageSizeY);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        auto _result = ImGui::ImageButton(strId, (ImTextureID)(uintptr_t)userTextureId, imageSize, uv0, uv1);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nImageButton__Ljava_lang_String_2JFFFFFFFFFF(JNIEnv* env, jclass clazz, jstring obj_strId, jlong userTextureId, jfloat imageSizeX, jfloat imageSizeY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y, jfloat bgColX, jfloat bgColY, jfloat bgColZ, jfloat bgColW) {

//@line:3401

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 imageSize = ImVec2(imageSizeX, imageSizeY);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec4 bgCol = ImVec4(bgColX, bgColY, bgColZ, bgColW);
        auto _result = ImGui::ImageButton(strId, (ImTextureID)(uintptr_t)userTextureId, imageSize, uv0, uv1, bgCol);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nImageButton__Ljava_lang_String_2JFFFFFFFFFFFFFF(JNIEnv* env, jclass clazz, jstring obj_strId, jlong userTextureId, jfloat imageSizeX, jfloat imageSizeY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y, jfloat bgColX, jfloat bgColY, jfloat bgColZ, jfloat bgColW, jfloat tintColX, jfloat tintColY, jfloat tintColZ, jfloat tintColW) {

//@line:3412

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImVec2 imageSize = ImVec2(imageSizeX, imageSizeY);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec4 bgCol = ImVec4(bgColX, bgColY, bgColZ, bgColW);
        ImVec4 tintCol = ImVec4(tintColX, tintColY, tintColZ, tintColW);
        auto _result = ImGui::ImageButton(strId, (ImTextureID)(uintptr_t)userTextureId, imageSize, uv0, uv1, bgCol, tintCol);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginCombo__Ljava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_previewValue) {

//@line:3437

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto previewValue = obj_previewValue == NULL ? NULL : (char*)env->GetStringUTFChars(obj_previewValue, JNI_FALSE);
        auto _result = ImGui::BeginCombo(label, previewValue);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (previewValue != NULL) env->ReleaseStringUTFChars(obj_previewValue, previewValue);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginCombo__Ljava_lang_String_2Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_previewValue, jint imGuiComboFlags) {

//@line:3446

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto previewValue = obj_previewValue == NULL ? NULL : (char*)env->GetStringUTFChars(obj_previewValue, JNI_FALSE);
        auto _result = ImGui::BeginCombo(label, previewValue, imGuiComboFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (previewValue != NULL) env->ReleaseStringUTFChars(obj_previewValue, previewValue);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndCombo(JNIEnv* env, jclass clazz) {


//@line:3462

        ImGui::EndCombo();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCombo__Ljava_lang_String_2_3I_3Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_currentItem, jobjectArray obj_items, jint itemsCount) {

//@line:3474

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto currentItem = obj_currentItem == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_currentItem, JNI_FALSE);
        const char* items[itemsCount];
        for (int i = 0; i < itemsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_items, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            items[i] = rawStr;
        };
        auto _result = ImGui::Combo(label, (currentItem != NULL ? &currentItem[0] : NULL), items, itemsCount);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (currentItem != NULL) env->ReleasePrimitiveArrayCritical(obj_currentItem, currentItem, JNI_FALSE);
        for (int i = 0; i < itemsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_items, i);
            env->ReleaseStringUTFChars(str, items[i]);
        };
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCombo__Ljava_lang_String_2_3I_3Ljava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_currentItem, jobjectArray obj_items, jint itemsCount, jint popupMaxHeightInItems) {

//@line:3493

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto currentItem = obj_currentItem == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_currentItem, JNI_FALSE);
        const char* items[itemsCount];
        for (int i = 0; i < itemsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_items, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            items[i] = rawStr;
        };
        auto _result = ImGui::Combo(label, (currentItem != NULL ? &currentItem[0] : NULL), items, itemsCount, popupMaxHeightInItems);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (currentItem != NULL) env->ReleasePrimitiveArrayCritical(obj_currentItem, currentItem, JNI_FALSE);
        for (int i = 0; i < itemsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_items, i);
            env->ReleaseStringUTFChars(str, items[i]);
        };
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCombo__Ljava_lang_String_2_3ILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_currentItem, jstring obj_itemsSeparatedByZeros) {

//@line:3526

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto currentItem = obj_currentItem == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_currentItem, JNI_FALSE);
        auto itemsSeparatedByZeros = obj_itemsSeparatedByZeros == NULL ? NULL : (char*)env->GetStringUTFChars(obj_itemsSeparatedByZeros, JNI_FALSE);
        auto _result = ImGui::Combo(label, (currentItem != NULL ? &currentItem[0] : NULL), itemsSeparatedByZeros);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (currentItem != NULL) env->ReleasePrimitiveArrayCritical(obj_currentItem, currentItem, JNI_FALSE);
        if (itemsSeparatedByZeros != NULL) env->ReleaseStringUTFChars(obj_itemsSeparatedByZeros, itemsSeparatedByZeros);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCombo__Ljava_lang_String_2_3ILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_currentItem, jstring obj_itemsSeparatedByZeros, jint popupMaxHeightInItems) {

//@line:3537

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto currentItem = obj_currentItem == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_currentItem, JNI_FALSE);
        auto itemsSeparatedByZeros = obj_itemsSeparatedByZeros == NULL ? NULL : (char*)env->GetStringUTFChars(obj_itemsSeparatedByZeros, JNI_FALSE);
        auto _result = ImGui::Combo(label, (currentItem != NULL ? &currentItem[0] : NULL), itemsSeparatedByZeros, popupMaxHeightInItems);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (currentItem != NULL) env->ReleasePrimitiveArrayCritical(obj_currentItem, currentItem, JNI_FALSE);
        if (itemsSeparatedByZeros != NULL) env->ReleaseStringUTFChars(obj_itemsSeparatedByZeros, itemsSeparatedByZeros);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v) {

//@line:3610

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat__Ljava_lang_String_2_3FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed) {

//@line:3619

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat(label, &v[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin) {

//@line:3628

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat(label, &v[0], vSpeed, vMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat__Ljava_lang_String_2_3FFFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax) {

//@line:3637

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat(label, &v[0], vSpeed, vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat__Ljava_lang_String_2_3FFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jstring obj_format) {

//@line:3646

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragFloat(label, &v[0], vSpeed, vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat__Ljava_lang_String_2_3FFFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:3657

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragFloat(label, &v[0], vSpeed, vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat__Ljava_lang_String_2_3FFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jint imGuiSliderFlags) {

//@line:3668

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat(label, &v[0], vSpeed, vMin, vMax, "%.3f", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat2__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v) {

//@line:3705

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat2(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat2__Ljava_lang_String_2_3FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed) {

//@line:3714

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat2(label, &v[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat2__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin) {

//@line:3723

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat2(label, &v[0], vSpeed, vMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat2__Ljava_lang_String_2_3FFFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax) {

//@line:3732

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat2(label, &v[0], vSpeed, vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat2__Ljava_lang_String_2_3FFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jstring obj_format) {

//@line:3741

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragFloat2(label, &v[0], vSpeed, vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat2__Ljava_lang_String_2_3FFFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:3752

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragFloat2(label, &v[0], vSpeed, vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat2__Ljava_lang_String_2_3FFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jint imGuiSliderFlags) {

//@line:3763

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat2(label, &v[0], vSpeed, vMin, vMax, "%.3f", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat3__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v) {

//@line:3800

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat3(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat3__Ljava_lang_String_2_3FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed) {

//@line:3809

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat3(label, &v[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat3__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin) {

//@line:3818

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat3(label, &v[0], vSpeed, vMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat3__Ljava_lang_String_2_3FFFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax) {

//@line:3827

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat3(label, &v[0], vSpeed, vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat3__Ljava_lang_String_2_3FFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jstring obj_format) {

//@line:3836

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragFloat3(label, &v[0], vSpeed, vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat3__Ljava_lang_String_2_3FFFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:3847

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragFloat3(label, &v[0], vSpeed, vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat3__Ljava_lang_String_2_3FFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jint imGuiSliderFlags) {

//@line:3858

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat3(label, &v[0], vSpeed, vMin, vMax, "%.3f", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat4__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v) {

//@line:3895

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat4(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat4__Ljava_lang_String_2_3FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed) {

//@line:3904

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat4(label, &v[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat4__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin) {

//@line:3913

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat4(label, &v[0], vSpeed, vMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat4__Ljava_lang_String_2_3FFFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax) {

//@line:3922

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat4(label, &v[0], vSpeed, vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat4__Ljava_lang_String_2_3FFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jstring obj_format) {

//@line:3931

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragFloat4(label, &v[0], vSpeed, vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat4__Ljava_lang_String_2_3FFFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:3942

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragFloat4(label, &v[0], vSpeed, vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloat4__Ljava_lang_String_2_3FFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vSpeed, jfloat vMin, jfloat vMax, jint imGuiSliderFlags) {

//@line:3953

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragFloat4(label, &v[0], vSpeed, vMin, vMax, "%.3f", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloatRange2__Ljava_lang_String_2_3F_3FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vCurrentMin, jfloatArray obj_vCurrentMax, jfloat vSpeed) {

//@line:3986

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto _result = ImGui::DragFloatRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloatRange2__Ljava_lang_String_2_3F_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vCurrentMin, jfloatArray obj_vCurrentMax, jfloat vSpeed, jfloat vMin) {

//@line:3997

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto _result = ImGui::DragFloatRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed, vMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloatRange2__Ljava_lang_String_2_3F_3FFFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vCurrentMin, jfloatArray obj_vCurrentMax, jfloat vSpeed, jfloat vMin, jfloat vMax) {

//@line:4008

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto _result = ImGui::DragFloatRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed, vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloatRange2__Ljava_lang_String_2_3F_3FFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vCurrentMin, jfloatArray obj_vCurrentMax, jfloat vSpeed, jfloat vMin, jfloat vMax, jstring obj_format) {

//@line:4019

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragFloatRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed, vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloatRange2__Ljava_lang_String_2_3F_3FFFFLjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vCurrentMin, jfloatArray obj_vCurrentMax, jfloat vSpeed, jfloat vMin, jfloat vMax, jstring obj_format, jstring obj_formatMax) {

//@line:4032

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto formatMax = obj_formatMax == NULL ? NULL : (char*)env->GetStringUTFChars(obj_formatMax, JNI_FALSE);
        auto _result = ImGui::DragFloatRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed, vMin, vMax, format, formatMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        if (formatMax != NULL) env->ReleaseStringUTFChars(obj_formatMax, formatMax);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragFloatRange2__Ljava_lang_String_2_3F_3FFFFLjava_lang_String_2Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vCurrentMin, jfloatArray obj_vCurrentMax, jfloat vSpeed, jfloat vMin, jfloat vMax, jstring obj_format, jstring obj_formatMax, jint imGuiSliderFlags) {

//@line:4047

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto formatMax = obj_formatMax == NULL ? NULL : (char*)env->GetStringUTFChars(obj_formatMax, JNI_FALSE);
        auto _result = ImGui::DragFloatRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed, vMin, vMax, format, formatMax, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        if (formatMax != NULL) env->ReleaseStringUTFChars(obj_formatMax, formatMax);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v) {

//@line:4111

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt__Ljava_lang_String_2_3IF(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed) {

//@line:4120

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt(label, &v[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt__Ljava_lang_String_2_3IFI(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin) {

//@line:4129

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt(label, &v[0], vSpeed, vMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt__Ljava_lang_String_2_3IFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax) {

//@line:4138

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt(label, &v[0], vSpeed, vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt__Ljava_lang_String_2_3IFIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jstring obj_format) {

//@line:4147

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragInt(label, &v[0], vSpeed, vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt__Ljava_lang_String_2_3IFIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:4158

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragInt(label, &v[0], vSpeed, vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt__Ljava_lang_String_2_3IFIII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jint imGuiSliderFlags) {

//@line:4169

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt(label, &v[0], vSpeed, vMin, vMax, "%d", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt2__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v) {

//@line:4206

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt2(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt2__Ljava_lang_String_2_3IF(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed) {

//@line:4215

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt2(label, &v[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt2__Ljava_lang_String_2_3IFI(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin) {

//@line:4224

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt2(label, &v[0], vSpeed, vMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt2__Ljava_lang_String_2_3IFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax) {

//@line:4233

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt2(label, &v[0], vSpeed, vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt2__Ljava_lang_String_2_3IFIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jstring obj_format) {

//@line:4242

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragInt2(label, &v[0], vSpeed, vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt2__Ljava_lang_String_2_3IFIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:4253

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragInt2(label, &v[0], vSpeed, vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt2__Ljava_lang_String_2_3IFIII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jint imGuiSliderFlags) {

//@line:4264

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt2(label, &v[0], vSpeed, vMin, vMax, "%d", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt3__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v) {

//@line:4301

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt3(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt3__Ljava_lang_String_2_3IF(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed) {

//@line:4310

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt3(label, &v[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt3__Ljava_lang_String_2_3IFI(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin) {

//@line:4319

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt3(label, &v[0], vSpeed, vMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt3__Ljava_lang_String_2_3IFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax) {

//@line:4328

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt3(label, &v[0], vSpeed, vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt3__Ljava_lang_String_2_3IFIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jstring obj_format) {

//@line:4337

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragInt3(label, &v[0], vSpeed, vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt3__Ljava_lang_String_2_3IFIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:4348

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragInt3(label, &v[0], vSpeed, vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt3__Ljava_lang_String_2_3IFIII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jint imGuiSliderFlags) {

//@line:4359

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt3(label, &v[0], vSpeed, vMin, vMax, "%d", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt4__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v) {

//@line:4396

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt4(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt4__Ljava_lang_String_2_3IF(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed) {

//@line:4405

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt4(label, &v[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt4__Ljava_lang_String_2_3IFI(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin) {

//@line:4414

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt4(label, &v[0], vSpeed, vMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt4__Ljava_lang_String_2_3IFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax) {

//@line:4423

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt4(label, &v[0], vSpeed, vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt4__Ljava_lang_String_2_3IFIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jstring obj_format) {

//@line:4432

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragInt4(label, &v[0], vSpeed, vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt4__Ljava_lang_String_2_3IFIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:4443

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragInt4(label, &v[0], vSpeed, vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragInt4__Ljava_lang_String_2_3IFIII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jfloat vSpeed, jint vMin, jint vMax, jint imGuiSliderFlags) {

//@line:4454

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::DragInt4(label, &v[0], vSpeed, vMin, vMax, "%d", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragIntRange2__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_vCurrentMin, jintArray obj_vCurrentMax) {

//@line:4491

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto _result = ImGui::DragIntRange2(label, &vCurrentMin[0], &vCurrentMax[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragIntRange2__Ljava_lang_String_2_3I_3IF(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_vCurrentMin, jintArray obj_vCurrentMax, jfloat vSpeed) {

//@line:4502

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto _result = ImGui::DragIntRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragIntRange2__Ljava_lang_String_2_3I_3IFI(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_vCurrentMin, jintArray obj_vCurrentMax, jfloat vSpeed, jint vMin) {

//@line:4513

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto _result = ImGui::DragIntRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed, vMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragIntRange2__Ljava_lang_String_2_3I_3IFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_vCurrentMin, jintArray obj_vCurrentMax, jfloat vSpeed, jint vMin, jint vMax) {

//@line:4524

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto _result = ImGui::DragIntRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed, vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragIntRange2__Ljava_lang_String_2_3I_3IFIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_vCurrentMin, jintArray obj_vCurrentMax, jfloat vSpeed, jint vMin, jint vMax, jstring obj_format) {

//@line:4535

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragIntRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed, vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragIntRange2__Ljava_lang_String_2_3I_3IFIILjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_vCurrentMin, jintArray obj_vCurrentMax, jfloat vSpeed, jint vMin, jint vMax, jstring obj_format, jstring obj_formatMax) {

//@line:4548

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto formatMax = obj_formatMax == NULL ? NULL : (char*)env->GetStringUTFChars(obj_formatMax, JNI_FALSE);
        auto _result = ImGui::DragIntRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed, vMin, vMax, format, formatMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        if (formatMax != NULL) env->ReleaseStringUTFChars(obj_formatMax, formatMax);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragIntRange2__Ljava_lang_String_2_3I_3IFIILjava_lang_String_2Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_vCurrentMin, jintArray obj_vCurrentMax, jfloat vSpeed, jint vMin, jint vMax, jstring obj_format, jstring obj_formatMax, jint imGuiSliderFlags) {

//@line:4563

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vCurrentMin = obj_vCurrentMin == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMin, JNI_FALSE);
        auto vCurrentMax = obj_vCurrentMax == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_vCurrentMax, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto formatMax = obj_formatMax == NULL ? NULL : (char*)env->GetStringUTFChars(obj_formatMax, JNI_FALSE);
        auto _result = ImGui::DragIntRange2(label, &vCurrentMin[0], &vCurrentMax[0], vSpeed, vMin, vMax, format, formatMax, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vCurrentMin != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMin, vCurrentMin, JNI_FALSE);
        if (vCurrentMax != NULL) env->ReleasePrimitiveArrayCritical(obj_vCurrentMax, vCurrentMax, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        if (formatMax != NULL) env->ReleaseStringUTFChars(obj_formatMax, formatMax);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData) {

//@line:4602

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S16, &pData[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3SF(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jfloat vSpeed) {

//@line:4611

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S16, &pData[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3SFS(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jfloat vSpeed, jshort pMin) {

//@line:4620

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S16, &pData[0], vSpeed, &pMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3SFSS(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jfloat vSpeed, jshort pMin, jshort pMax) {

//@line:4629

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S16, &pData[0], vSpeed, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3SFSSLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jfloat vSpeed, jshort pMin, jshort pMax, jstring obj_format) {

//@line:4638

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S16, &pData[0], vSpeed, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3SFSSLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jfloat vSpeed, jshort pMin, jshort pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:4649

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S16, &pData[0], vSpeed, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData) {

//@line:4684

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S32, &pData[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3IF(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jfloat vSpeed) {

//@line:4693

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S32, &pData[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3IFI(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jfloat vSpeed, jint pMin) {

//@line:4702

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S32, &pData[0], vSpeed, &pMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3IFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jfloat vSpeed, jint pMin, jint pMax) {

//@line:4711

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S32, &pData[0], vSpeed, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3IFIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jfloat vSpeed, jint pMin, jint pMax, jstring obj_format) {

//@line:4720

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S32, &pData[0], vSpeed, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3IFIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jfloat vSpeed, jint pMin, jint pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:4731

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S32, &pData[0], vSpeed, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData) {

//@line:4766

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S64, &pData[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3JF(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jfloat vSpeed) {

//@line:4775

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S64, &pData[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3JFJ(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jfloat vSpeed, jlong pMin) {

//@line:4784

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S64, &pData[0], vSpeed, &pMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3JFJJ(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jfloat vSpeed, jlong pMin, jlong pMax) {

//@line:4793

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S64, &pData[0], vSpeed, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3JFJJLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jfloat vSpeed, jlong pMin, jlong pMax, jstring obj_format) {

//@line:4802

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S64, &pData[0], vSpeed, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3JFJJLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jfloat vSpeed, jlong pMin, jlong pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:4813

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_S64, &pData[0], vSpeed, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData) {

//@line:4848

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Float, &pData[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat vSpeed) {

//@line:4857

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Float, &pData[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat vSpeed, jfloat pMin) {

//@line:4866

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Float, &pData[0], vSpeed, &pMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3FFFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat vSpeed, jfloat pMin, jfloat pMax) {

//@line:4875

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Float, &pData[0], vSpeed, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3FFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat vSpeed, jfloat pMin, jfloat pMax, jstring obj_format) {

//@line:4884

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Float, &pData[0], vSpeed, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3FFFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat vSpeed, jfloat pMin, jfloat pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:4895

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Float, &pData[0], vSpeed, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData) {

//@line:4930

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Double, &pData[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3DF(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jfloat vSpeed) {

//@line:4939

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Double, &pData[0], vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3DFD(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jfloat vSpeed, jdouble pMin) {

//@line:4948

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Double, &pData[0], vSpeed, &pMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3DFDD(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jfloat vSpeed, jdouble pMin, jdouble pMax) {

//@line:4957

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Double, &pData[0], vSpeed, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3DFDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jfloat vSpeed, jdouble pMin, jdouble pMax, jstring obj_format) {

//@line:4966

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Double, &pData[0], vSpeed, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar__Ljava_lang_String_2_3DFDDLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jfloat vSpeed, jdouble pMin, jdouble pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:4977

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalar(label, ImGuiDataType_Double, &pData[0], vSpeed, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components) {

//@line:5012

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S16, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3SIF(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jfloat vSpeed) {

//@line:5021

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S16, &pData[0], components, vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3SIFS(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jfloat vSpeed, jshort pMin) {

//@line:5030

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S16, &pData[0], components, vSpeed, &pMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3SIFSS(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jfloat vSpeed, jshort pMin, jshort pMax) {

//@line:5039

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S16, &pData[0], components, vSpeed, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3SIFSSLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jfloat vSpeed, jshort pMin, jshort pMax, jstring obj_format) {

//@line:5048

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S16, &pData[0], components, vSpeed, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3SIFSSLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jfloat vSpeed, jshort pMin, jshort pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5059

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S16, &pData[0], components, vSpeed, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components) {

//@line:5094

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S32, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3IIF(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jfloat vSpeed) {

//@line:5103

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S32, &pData[0], components, vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3IIFI(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jfloat vSpeed, jint pMin) {

//@line:5112

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S32, &pData[0], components, vSpeed, &pMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3IIFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jfloat vSpeed, jint pMin, jint pMax) {

//@line:5121

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S32, &pData[0], components, vSpeed, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3IIFIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jfloat vSpeed, jint pMin, jint pMax, jstring obj_format) {

//@line:5130

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S32, &pData[0], components, vSpeed, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3IIFIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jfloat vSpeed, jint pMin, jint pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5141

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S32, &pData[0], components, vSpeed, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components) {

//@line:5176

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S64, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3JIF(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jfloat vSpeed) {

//@line:5185

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S64, &pData[0], components, vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3JIFJ(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jfloat vSpeed, jlong pMin) {

//@line:5194

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S64, &pData[0], components, vSpeed, &pMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3JIFJJ(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jfloat vSpeed, jlong pMin, jlong pMax) {

//@line:5203

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S64, &pData[0], components, vSpeed, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3JIFJJLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jfloat vSpeed, jlong pMin, jlong pMax, jstring obj_format) {

//@line:5212

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S64, &pData[0], components, vSpeed, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3JIFJJLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jfloat vSpeed, jlong pMin, jlong pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5223

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_S64, &pData[0], components, vSpeed, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components) {

//@line:5258

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Float, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3FIF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat vSpeed) {

//@line:5267

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Float, &pData[0], components, vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3FIFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat vSpeed, jfloat pMin) {

//@line:5276

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Float, &pData[0], components, vSpeed, &pMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3FIFFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat vSpeed, jfloat pMin, jfloat pMax) {

//@line:5285

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Float, &pData[0], components, vSpeed, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3FIFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat vSpeed, jfloat pMin, jfloat pMax, jstring obj_format) {

//@line:5294

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Float, &pData[0], components, vSpeed, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3FIFFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat vSpeed, jfloat pMin, jfloat pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5305

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Float, &pData[0], components, vSpeed, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components) {

//@line:5340

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Double, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3DIF(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jfloat vSpeed) {

//@line:5349

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Double, &pData[0], components, vSpeed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3DIFD(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jfloat vSpeed, jdouble pMin) {

//@line:5358

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Double, &pData[0], components, vSpeed, &pMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3DIFDD(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jfloat vSpeed, jdouble pMin, jdouble pMax) {

//@line:5367

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Double, &pData[0], components, vSpeed, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3DIFDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jfloat vSpeed, jdouble pMin, jdouble pMax, jstring obj_format) {

//@line:5376

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Double, &pData[0], components, vSpeed, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN__Ljava_lang_String_2_3DIFDDLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jfloat vSpeed, jdouble pMin, jdouble pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5387

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::DragScalarN(label, ImGuiDataType_Double, &pData[0], components, vSpeed, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax) {

//@line:5433

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderFloat(label, &v[0], vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat__Ljava_lang_String_2_3FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jstring obj_format) {

//@line:5442

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderFloat(label, &v[0], vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat__Ljava_lang_String_2_3FFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5453

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderFloat(label, &v[0], vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat__Ljava_lang_String_2_3FFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jint imGuiSliderFlags) {

//@line:5464

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderFloat(label, &v[0], vMin, vMax, "%.3f", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat2__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax) {

//@line:5489

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderFloat2(label, &v[0], vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat2__Ljava_lang_String_2_3FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jstring obj_format) {

//@line:5498

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderFloat2(label, &v[0], vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat2__Ljava_lang_String_2_3FFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5509

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderFloat2(label, &v[0], vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat2__Ljava_lang_String_2_3FFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jint imGuiSliderFlags) {

//@line:5520

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderFloat2(label, &v[0], vMin, vMax, "%.3f", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat3__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax) {

//@line:5545

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderFloat3(label, &v[0], vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat3__Ljava_lang_String_2_3FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jstring obj_format) {

//@line:5554

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderFloat3(label, &v[0], vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat3__Ljava_lang_String_2_3FFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5565

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderFloat3(label, &v[0], vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat3__Ljava_lang_String_2_3FFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jint imGuiSliderFlags) {

//@line:5576

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderFloat3(label, &v[0], vMin, vMax, "%.3f", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat4__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax) {

//@line:5601

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderFloat4(label, &v[0], vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat4__Ljava_lang_String_2_3FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jstring obj_format) {

//@line:5610

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderFloat4(label, &v[0], vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat4__Ljava_lang_String_2_3FFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5621

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderFloat4(label, &v[0], vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderFloat4__Ljava_lang_String_2_3FFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat vMin, jfloat vMax, jint imGuiSliderFlags) {

//@line:5632

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderFloat4(label, &v[0], vMin, vMax, "%.3f", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderAngle__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vRad) {

//@line:5665

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vRad = obj_vRad == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vRad, JNI_FALSE);
        auto _result = ImGui::SliderAngle(label, &vRad[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vRad != NULL) env->ReleasePrimitiveArrayCritical(obj_vRad, vRad, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderAngle__Ljava_lang_String_2_3FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vRad, jfloat vDegreesMin) {

//@line:5674

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vRad = obj_vRad == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vRad, JNI_FALSE);
        auto _result = ImGui::SliderAngle(label, &vRad[0], vDegreesMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vRad != NULL) env->ReleasePrimitiveArrayCritical(obj_vRad, vRad, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderAngle__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vRad, jfloat vDegreesMin, jfloat vDegreesMax) {

//@line:5683

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vRad = obj_vRad == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vRad, JNI_FALSE);
        auto _result = ImGui::SliderAngle(label, &vRad[0], vDegreesMin, vDegreesMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vRad != NULL) env->ReleasePrimitiveArrayCritical(obj_vRad, vRad, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderAngle__Ljava_lang_String_2_3FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vRad, jfloat vDegreesMin, jfloat vDegreesMax, jstring obj_format) {

//@line:5692

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vRad = obj_vRad == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vRad, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderAngle(label, &vRad[0], vDegreesMin, vDegreesMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vRad != NULL) env->ReleasePrimitiveArrayCritical(obj_vRad, vRad, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderAngle__Ljava_lang_String_2_3FFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vRad, jfloat vDegreesMin, jfloat vDegreesMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5703

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vRad = obj_vRad == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vRad, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderAngle(label, &vRad[0], vDegreesMin, vDegreesMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vRad != NULL) env->ReleasePrimitiveArrayCritical(obj_vRad, vRad, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderAngle__Ljava_lang_String_2_3FFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_vRad, jfloat vDegreesMin, jfloat vDegreesMax, jint imGuiSliderFlags) {

//@line:5714

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto vRad = obj_vRad == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_vRad, JNI_FALSE);
        auto _result = ImGui::SliderAngle(label, &vRad[0], vDegreesMin, vDegreesMax, "%.0f deg", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (vRad != NULL) env->ReleasePrimitiveArrayCritical(obj_vRad, vRad, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax) {

//@line:5739

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderInt(label, &v[0], vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt__Ljava_lang_String_2_3IIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jstring obj_format) {

//@line:5748

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderInt(label, &v[0], vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt__Ljava_lang_String_2_3IIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5759

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderInt(label, &v[0], vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt__Ljava_lang_String_2_3IIII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jint imGuiSliderFlags) {

//@line:5770

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderInt(label, &v[0], vMin, vMax, "%d", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt2__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax) {

//@line:5795

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderInt2(label, &v[0], vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt2__Ljava_lang_String_2_3IIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jstring obj_format) {

//@line:5804

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderInt2(label, &v[0], vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt2__Ljava_lang_String_2_3IIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5815

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderInt2(label, &v[0], vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt2__Ljava_lang_String_2_3IIII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jint imGuiSliderFlags) {

//@line:5826

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderInt2(label, &v[0], vMin, vMax, "%d", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt3__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax) {

//@line:5851

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderInt3(label, &v[0], vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt3__Ljava_lang_String_2_3IIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jstring obj_format) {

//@line:5860

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderInt3(label, &v[0], vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt3__Ljava_lang_String_2_3IIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5871

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderInt3(label, &v[0], vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt3__Ljava_lang_String_2_3IIII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jint imGuiSliderFlags) {

//@line:5882

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderInt3(label, &v[0], vMin, vMax, "%d", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt4__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax) {

//@line:5907

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderInt4(label, &v[0], vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt4__Ljava_lang_String_2_3IIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jstring obj_format) {

//@line:5916

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderInt4(label, &v[0], vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt4__Ljava_lang_String_2_3IIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5927

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderInt4(label, &v[0], vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderInt4__Ljava_lang_String_2_3IIII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint vMin, jint vMax, jint imGuiSliderFlags) {

//@line:5938

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::SliderInt4(label, &v[0], vMin, vMax, "%d", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3SSS(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jshort pMin, jshort pMax) {

//@line:5959

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_S16, &pData[0], &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3SSSLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jshort pMin, jshort pMax, jstring obj_format) {

//@line:5968

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_S16, &pData[0], &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3SSSLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jshort pMin, jshort pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:5979

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_S16, &pData[0], &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint pMin, jint pMax) {

//@line:6002

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_S32, &pData[0], &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3IIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint pMin, jint pMax, jstring obj_format) {

//@line:6011

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_S32, &pData[0], &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3IIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint pMin, jint pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6022

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_S32, &pData[0], &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3JJJ(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jlong pMin, jlong pMax) {

//@line:6045

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_S64, &pData[0], &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3JJJLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jlong pMin, jlong pMax, jstring obj_format) {

//@line:6054

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_S64, &pData[0], &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3JJJLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jlong pMin, jlong pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6065

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_S64, &pData[0], &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat pMin, jfloat pMax) {

//@line:6088

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_Float, &pData[0], &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat pMin, jfloat pMax, jstring obj_format) {

//@line:6097

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_Float, &pData[0], &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3FFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat pMin, jfloat pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6108

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_Float, &pData[0], &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jdouble pMin, jdouble pMax) {

//@line:6131

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_Double, &pData[0], &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3DDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jdouble pMin, jdouble pMax, jstring obj_format) {

//@line:6140

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_Double, &pData[0], &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar__Ljava_lang_String_2_3DDDLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jdouble pMin, jdouble pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6151

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalar(label, ImGuiDataType_Double, &pData[0], &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3SISS(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jshort pMin, jshort pMax) {

//@line:6174

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_S16, &pData[0], components, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3SISSLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jshort pMin, jshort pMax, jstring obj_format) {

//@line:6183

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_S16, &pData[0], components, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3SISSLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jshort pMin, jshort pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6194

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_S16, &pData[0], components, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3IIII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jint pMin, jint pMax) {

//@line:6217

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_S32, &pData[0], components, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3IIIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jint pMin, jint pMax, jstring obj_format) {

//@line:6226

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_S32, &pData[0], components, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3IIIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jint pMin, jint pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6237

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_S32, &pData[0], components, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3JIJJ(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jlong pMin, jlong pMax) {

//@line:6260

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_S64, &pData[0], components, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3JIJJLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jlong pMin, jlong pMax, jstring obj_format) {

//@line:6269

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_S64, &pData[0], components, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3JIJJLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jlong pMin, jlong pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6280

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_S64, &pData[0], components, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3FIFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat pMin, jfloat pMax) {

//@line:6303

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_Float, &pData[0], components, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3FIFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat pMin, jfloat pMax, jstring obj_format) {

//@line:6312

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_Float, &pData[0], components, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3FIFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat pMin, jfloat pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6323

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_Float, &pData[0], components, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jdouble pMin, jdouble pMax) {

//@line:6346

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_Double, &pData[0], components, &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3DIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jdouble pMin, jdouble pMax, jstring obj_format) {

//@line:6355

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_Double, &pData[0], components, &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN__Ljava_lang_String_2_3DIDDLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jdouble pMin, jdouble pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6366

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::SliderScalarN(label, ImGuiDataType_Double, &pData[0], components, &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderFloat__Ljava_lang_String_2FF_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jfloatArray obj_v, jfloat vMin, jfloat vMax) {

//@line:6409

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderFloat(label, size, &v[0], vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderFloat__Ljava_lang_String_2FF_3FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jfloatArray obj_v, jfloat vMin, jfloat vMax, jstring obj_format) {

//@line:6419

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderFloat(label, size, &v[0], vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderFloat__Ljava_lang_String_2FF_3FFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jfloatArray obj_v, jfloat vMin, jfloat vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6431

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderFloat(label, size, &v[0], vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderFloat__Ljava_lang_String_2FF_3FFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jfloatArray obj_v, jfloat vMin, jfloat vMax, jint imGuiSliderFlags) {

//@line:6443

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderFloat(label, size, &v[0], vMin, vMax, "%.3f", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderInt__Ljava_lang_String_2FF_3III(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jintArray obj_v, jint vMin, jint vMax) {

//@line:6485

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderInt(label, size, &v[0], vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderInt__Ljava_lang_String_2FF_3IIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jintArray obj_v, jint vMin, jint vMax, jstring obj_format) {

//@line:6495

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderInt(label, size, &v[0], vMin, vMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderInt__Ljava_lang_String_2FF_3IIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jintArray obj_v, jint vMin, jint vMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6507

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderInt(label, size, &v[0], vMin, vMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderInt__Ljava_lang_String_2FF_3IIII(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jintArray obj_v, jint vMin, jint vMax, jint imGuiSliderFlags) {

//@line:6519

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderInt(label, size, &v[0], vMin, vMax, "%d", imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3SSS(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jshortArray obj_pData, jshort pMin, jshort pMax) {

//@line:6553

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_S16, &pData[0], &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3SSSLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jshortArray obj_pData, jshort pMin, jshort pMax, jstring obj_format) {

//@line:6563

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_S16, &pData[0], &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3SSSLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jshortArray obj_pData, jshort pMin, jshort pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6575

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_S16, &pData[0], &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3III(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jintArray obj_pData, jint pMin, jint pMax) {

//@line:6611

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_S32, &pData[0], &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3IIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jintArray obj_pData, jint pMin, jint pMax, jstring obj_format) {

//@line:6621

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_S32, &pData[0], &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3IIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jintArray obj_pData, jint pMin, jint pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6633

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_S32, &pData[0], &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3JJJ(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jlongArray obj_pData, jlong pMin, jlong pMax) {

//@line:6669

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_S64, &pData[0], &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3JJJLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jlongArray obj_pData, jlong pMin, jlong pMax, jstring obj_format) {

//@line:6679

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_S64, &pData[0], &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3JJJLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jlongArray obj_pData, jlong pMin, jlong pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6691

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_S64, &pData[0], &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jfloatArray obj_pData, jfloat pMin, jfloat pMax) {

//@line:6727

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_Float, &pData[0], &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jfloatArray obj_pData, jfloat pMin, jfloat pMax, jstring obj_format) {

//@line:6737

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_Float, &pData[0], &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3FFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jfloatArray obj_pData, jfloat pMin, jfloat pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6749

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_Float, &pData[0], &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3DDD(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jdoubleArray obj_pData, jdouble pMin, jdouble pMax) {

//@line:6785

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_Double, &pData[0], &pMin, &pMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3DDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jdoubleArray obj_pData, jdouble pMin, jdouble pMax, jstring obj_format) {

//@line:6795

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_Double, &pData[0], &pMin, &pMax, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar__Ljava_lang_String_2FF_3DDDLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jdoubleArray obj_pData, jdouble pMin, jdouble pMax, jstring obj_format, jint imGuiSliderFlags) {

//@line:6807

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::VSliderScalar(label, size, ImGuiDataType_Double, &pData[0], &pMin, &pMax, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}


//@line:6823

        jmethodID jImStringResizeInternalMID;
        jmethodID jInputTextCallbackMID;

        jfieldID inputDataSizeID;
        jfieldID inputDataIsDirtyID;
        jfieldID inputDataIsResizedID;

        struct InputTextCallbackUserData {
            JNIEnv* env;
            jobject* imString;
            int maxSize;
            jbyteArray jResizedBuf;
            char* resizedBuf;
            jobject* textInputData;
            char* allowedChars;
            jobject* handler;
        };

        static int TextEditCallbackStub(ImGuiInputTextCallbackData* data) {
            InputTextCallbackUserData* userData = (InputTextCallbackUserData*)data->UserData;

            if (data->EventFlag == ImGuiInputTextFlags_CallbackCharFilter) {
                int allowedCharLength = strlen(userData->allowedChars);
                if(allowedCharLength > 0) {
                    bool found = false;
                    for(int i = 0; i < allowedCharLength; i++) {
                        if(userData->allowedChars[i] == data->EventChar) {
                            found = true;
                            break;
                        }
                    }
                    return found ? 0 : 1;
                }
            } else if (data->EventFlag == ImGuiInputTextFlags_CallbackResize) {
                int newSize = data->BufTextLen;
                if (newSize >= userData->maxSize) {
                    JNIEnv* env = userData->env;

                    jbyteArray newBufArr = (jbyteArray)env->CallObjectMethod(*userData->imString, jImStringResizeInternalMID, newSize);
                    char* newBuf = (char*)env->GetPrimitiveArrayCritical(newBufArr, 0);

                    data->Buf = newBuf;

                    userData->jResizedBuf = newBufArr;
                    userData->resizedBuf = newBuf;
                }
            }

            if (userData->handler != NULL) {
                JNIEnv* env = userData->env;
                env->CallObjectMethod(*userData->handler, jInputTextCallbackMID, data);
            }

            return 0;
        }
    JNIEXPORT void JNICALL Java_imgui_ImGui_nInitInputTextData(JNIEnv* env, jclass clazz) {


//@line:6881

        jclass jInputDataClass = env->FindClass("imgui/type/ImString$InputData");
        inputDataSizeID = env->GetFieldID(jInputDataClass, "size", "I");
        inputDataIsDirtyID = env->GetFieldID(jInputDataClass, "isDirty", "Z");
        inputDataIsResizedID = env->GetFieldID(jInputDataClass, "isResized", "Z");

        jclass jImString = env->FindClass("imgui/type/ImString");
        jImStringResizeInternalMID = env->GetMethodID(jImString, "resizeInternal", "(I)[B");

        jclass jCallback = env->FindClass("imgui/callback/ImGuiInputTextCallback");
        jInputTextCallbackMID = env->GetMethodID(jCallback, "accept", "(J)V");
    

}

static inline jboolean wrapped_Java_imgui_ImGui_nInputText
(JNIEnv* env, jclass clazz, jboolean multiline, jboolean hint, jstring obj_label, jstring obj_hintLabel, jobject imString, jbyteArray obj_buf, jint maxSize, jfloat width, jfloat height, jint flagsV, jobject textInputData, jstring obj_allowedChars, jboolean isResizable, jobject callback, char* label, char* hintLabel, char* allowedChars, char* buf) {

//@line:6995

        InputTextCallbackUserData userData;
        userData.imString = &imString;
        userData.maxSize = maxSize;
        userData.jResizedBuf = NULL;
        userData.resizedBuf = NULL;
        userData.textInputData = &textInputData;
        userData.env = env;
        userData.allowedChars = allowedChars;
        userData.handler = callback != NULL ? &callback : NULL;

        int flags = flagsV;
        if (isResizable) {
            flags |= ImGuiInputTextFlags_CallbackResize;
        }
        if (strlen(allowedChars) > 0) {
            flags |= ImGuiInputTextFlags_CallbackCharFilter;
        }

        bool valueChanged;

        if (multiline) {
            valueChanged = ImGui::InputTextMultiline(label, buf, maxSize, ImVec2(width, height), flags, &TextEditCallbackStub, &userData);
        } else if (hint) {
            valueChanged = ImGui::InputTextWithHint(label, hintLabel, buf, maxSize, flags, &TextEditCallbackStub, &userData);
        } else {
            valueChanged = ImGui::InputText(label, buf, maxSize, flags, &TextEditCallbackStub, &userData);
        }

        if (valueChanged) {
            int size;

            if (userData.jResizedBuf != NULL) {
                size = strlen(userData.resizedBuf);
                env->ReleasePrimitiveArrayCritical(userData.jResizedBuf, userData.resizedBuf, 0);
            } else {
                size = strlen(buf);
            }

            env->SetIntField(textInputData, inputDataSizeID, size);
            env->SetBooleanField(textInputData, inputDataIsDirtyID, true);
        }

        return valueChanged;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputText(JNIEnv* env, jclass clazz, jboolean multiline, jboolean hint, jstring obj_label, jstring obj_hintLabel, jobject imString, jbyteArray obj_buf, jint maxSize, jfloat width, jfloat height, jint flagsV, jobject textInputData, jstring obj_allowedChars, jboolean isResizable, jobject callback) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);
	char* hintLabel = (char*)env->GetStringUTFChars(obj_hintLabel, 0);
	char* allowedChars = (char*)env->GetStringUTFChars(obj_allowedChars, 0);
	char* buf = (char*)env->GetPrimitiveArrayCritical(obj_buf, 0);

	jboolean JNI_returnValue = wrapped_Java_imgui_ImGui_nInputText(env, clazz, multiline, hint, obj_label, obj_hintLabel, imString, obj_buf, maxSize, width, height, flagsV, textInputData, obj_allowedChars, isResizable, callback, label, hintLabel, allowedChars, buf);

	env->ReleasePrimitiveArrayCritical(obj_buf, buf, 0);
	env->ReleaseStringUTFChars(obj_label, label);
	env->ReleaseStringUTFChars(obj_hintLabel, hintLabel);
	env->ReleaseStringUTFChars(obj_allowedChars, allowedChars);

	return JNI_returnValue;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v) {

//@line:7065

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputFloat(label, (v != NULL ? &v[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat__Ljava_lang_String_2_3FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat step) {

//@line:7074

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputFloat(label, (v != NULL ? &v[0] : NULL), step);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat step, jfloat stepFast) {

//@line:7083

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputFloat(label, (v != NULL ? &v[0] : NULL), step, stepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat__Ljava_lang_String_2_3FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat step, jfloat stepFast, jstring obj_format) {

//@line:7092

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputFloat(label, (v != NULL ? &v[0] : NULL), step, stepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat__Ljava_lang_String_2_3FFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat step, jfloat stepFast, jstring obj_format, jint imGuiInputTextFlags) {

//@line:7103

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputFloat(label, (v != NULL ? &v[0] : NULL), step, stepFast, format, imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat__Ljava_lang_String_2_3FFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jfloat step, jfloat stepFast, jint imGuiInputTextFlags) {

//@line:7114

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputFloat(label, (v != NULL ? &v[0] : NULL), step, stepFast, "%.3f", imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat2__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v) {

//@line:7139

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputFloat2(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat2__Ljava_lang_String_2_3FLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jstring obj_format) {

//@line:7148

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputFloat2(label, &v[0], format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat2__Ljava_lang_String_2_3FLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jstring obj_format, jint imGuiInputTextFlags) {

//@line:7159

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputFloat2(label, &v[0], format, imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat2__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jint imGuiInputTextFlags) {

//@line:7170

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputFloat2(label, &v[0], "%.3f", imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat3__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v) {

//@line:7195

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputFloat3(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat3__Ljava_lang_String_2_3FLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jstring obj_format) {

//@line:7204

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputFloat3(label, &v[0], format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat3__Ljava_lang_String_2_3FLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jstring obj_format, jint imGuiInputTextFlags) {

//@line:7215

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputFloat3(label, &v[0], format, imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat3__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jint imGuiInputTextFlags) {

//@line:7226

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputFloat3(label, &v[0], "%.3f", imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat4__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v) {

//@line:7251

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputFloat4(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat4__Ljava_lang_String_2_3FLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jstring obj_format) {

//@line:7260

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputFloat4(label, &v[0], format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat4__Ljava_lang_String_2_3FLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jstring obj_format, jint imGuiInputTextFlags) {

//@line:7271

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputFloat4(label, &v[0], format, imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat4__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_v, jint imGuiInputTextFlags) {

//@line:7282

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputFloat4(label, &v[0], "%.3f", imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputInt__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v) {

//@line:7307

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputInt(label, (v != NULL ? &v[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputInt__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint step) {

//@line:7316

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputInt(label, (v != NULL ? &v[0] : NULL), step);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputInt__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint step, jint stepFast) {

//@line:7325

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputInt(label, (v != NULL ? &v[0] : NULL), step, stepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputInt__Ljava_lang_String_2_3IIII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint step, jint stepFast, jint imGuiInputTextFlags) {

//@line:7334

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputInt(label, (v != NULL ? &v[0] : NULL), step, stepFast, imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputInt2__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v) {

//@line:7351

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputInt2(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputInt2__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint imGuiInputTextFlags) {

//@line:7360

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputInt2(label, &v[0], imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputInt3__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v) {

//@line:7377

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputInt3(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputInt3__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint imGuiInputTextFlags) {

//@line:7386

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputInt3(label, &v[0], imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputInt4__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v) {

//@line:7403

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputInt4(label, &v[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputInt4__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_v, jint imGuiInputTextFlags) {

//@line:7412

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputInt4(label, &v[0], imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputDouble__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_v) {

//@line:7445

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputDouble(label, (v != NULL ? &v[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputDouble__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_v, jdouble step) {

//@line:7454

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputDouble(label, (v != NULL ? &v[0] : NULL), step);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputDouble__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_v, jdouble step, jdouble stepFast) {

//@line:7463

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputDouble(label, (v != NULL ? &v[0] : NULL), step, stepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputDouble__Ljava_lang_String_2_3DDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_v, jdouble step, jdouble stepFast, jstring obj_format) {

//@line:7472

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputDouble(label, (v != NULL ? &v[0] : NULL), step, stepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputDouble__Ljava_lang_String_2_3DDDLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_v, jdouble step, jdouble stepFast, jstring obj_format, jint imGuiInputTextFlags) {

//@line:7483

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputDouble(label, (v != NULL ? &v[0] : NULL), step, stepFast, format, imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputDouble__Ljava_lang_String_2_3DDDI(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_v, jdouble step, jdouble stepFast, jint imGuiInputTextFlags) {

//@line:7494

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto v = obj_v == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_v, JNI_FALSE);
        auto _result = ImGui::InputDouble(label, (v != NULL ? &v[0] : NULL), step, stepFast, "%.6f", imGuiInputTextFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (v != NULL) env->ReleasePrimitiveArrayCritical(obj_v, v, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData) {

//@line:7523

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S16, (pData != NULL ? &pData[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3SS(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jshort pStep) {

//@line:7532

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S16, (pData != NULL ? &pData[0] : NULL), &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3SSS(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jshort pStep, jshort pStepFast) {

//@line:7541

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S16, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3SSSLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jshort pStep, jshort pStepFast, jstring obj_format) {

//@line:7550

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S16, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3SSSLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jshort pStep, jshort pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:7561

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S16, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData) {

//@line:7592

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S32, (pData != NULL ? &pData[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint pStep) {

//@line:7601

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S32, (pData != NULL ? &pData[0] : NULL), &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint pStep, jint pStepFast) {

//@line:7610

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S32, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3IIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint pStep, jint pStepFast, jstring obj_format) {

//@line:7619

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S32, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3IIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint pStep, jint pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:7630

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S32, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData) {

//@line:7661

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S64, (pData != NULL ? &pData[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3JJ(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jlong pStep) {

//@line:7670

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S64, (pData != NULL ? &pData[0] : NULL), &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3JJJ(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jlong pStep, jlong pStepFast) {

//@line:7679

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S64, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3JJJLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jlong pStep, jlong pStepFast, jstring obj_format) {

//@line:7688

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S64, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3JJJLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jlong pStep, jlong pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:7699

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_S64, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData) {

//@line:7730

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_Float, (pData != NULL ? &pData[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat pStep) {

//@line:7739

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_Float, (pData != NULL ? &pData[0] : NULL), &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat pStep, jfloat pStepFast) {

//@line:7748

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_Float, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat pStep, jfloat pStepFast, jstring obj_format) {

//@line:7757

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_Float, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3FFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jfloat pStep, jfloat pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:7768

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_Float, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData) {

//@line:7799

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_Double, (pData != NULL ? &pData[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jdouble pStep) {

//@line:7808

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_Double, (pData != NULL ? &pData[0] : NULL), &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jdouble pStep, jdouble pStepFast) {

//@line:7817

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_Double, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3DDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jdouble pStep, jdouble pStepFast, jstring obj_format) {

//@line:7826

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_Double, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2_3DDDLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jdouble pStep, jdouble pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:7837

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, ImGuiDataType_Double, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3S(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jshortArray obj_pData) {

//@line:7868

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3SS(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jshortArray obj_pData, jshort pStep) {

//@line:7877

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3SSS(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jshortArray obj_pData, jshort pStep, jshort pStepFast) {

//@line:7886

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3SSSLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jshortArray obj_pData, jshort pStep, jshort pStepFast, jstring obj_format) {

//@line:7895

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3SSSLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jshortArray obj_pData, jshort pStep, jshort pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:7906

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3I(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jintArray obj_pData) {

//@line:7937

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3II(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jintArray obj_pData, jint pStep) {

//@line:7946

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3III(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jintArray obj_pData, jint pStep, jint pStepFast) {

//@line:7955

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3IIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jintArray obj_pData, jint pStep, jint pStepFast, jstring obj_format) {

//@line:7964

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3IIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jintArray obj_pData, jint pStep, jint pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:7975

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3J(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jlongArray obj_pData) {

//@line:8006

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3JJ(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jlongArray obj_pData, jlong pStep) {

//@line:8015

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3JJJ(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jlongArray obj_pData, jlong pStep, jlong pStepFast) {

//@line:8024

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3JJJLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jlongArray obj_pData, jlong pStep, jlong pStepFast, jstring obj_format) {

//@line:8033

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3JJJLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jlongArray obj_pData, jlong pStep, jlong pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8044

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3F(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jfloatArray obj_pData) {

//@line:8075

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3FF(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jfloatArray obj_pData, jfloat pStep) {

//@line:8084

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jfloatArray obj_pData, jfloat pStep, jfloat pStepFast) {

//@line:8093

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3FFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jfloatArray obj_pData, jfloat pStep, jfloat pStepFast, jstring obj_format) {

//@line:8102

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3FFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jfloatArray obj_pData, jfloat pStep, jfloat pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8113

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3D(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jdoubleArray obj_pData) {

//@line:8144

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3DD(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jdoubleArray obj_pData, jdouble pStep) {

//@line:8153

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3DDD(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jdoubleArray obj_pData, jdouble pStep, jdouble pStepFast) {

//@line:8162

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3DDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jdoubleArray obj_pData, jdouble pStep, jdouble pStepFast, jstring obj_format) {

//@line:8171

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar__Ljava_lang_String_2I_3DDDLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jdoubleArray obj_pData, jdouble pStep, jdouble pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8182

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalar(label, dataType, (pData != NULL ? &pData[0] : NULL), &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components) {

//@line:8213

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S16, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3SIS(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jshort pStep) {

//@line:8222

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S16, &pData[0], components, &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3SISS(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jshort pStep, jshort pStepFast) {

//@line:8231

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S16, &pData[0], components, &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3SISSLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jshort pStep, jshort pStepFast, jstring obj_format) {

//@line:8240

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S16, &pData[0], components, &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3SISSLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jshortArray obj_pData, jint components, jshort pStep, jshort pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8251

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S16, &pData[0], components, &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components) {

//@line:8282

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S32, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jint pStep) {

//@line:8291

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S32, &pData[0], components, &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3IIII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jint pStep, jint pStepFast) {

//@line:8300

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S32, &pData[0], components, &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3IIIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jint pStep, jint pStepFast, jstring obj_format) {

//@line:8309

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S32, &pData[0], components, &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3IIIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pData, jint components, jint pStep, jint pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8320

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S32, &pData[0], components, &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components) {

//@line:8351

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S64, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3JIJ(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jlong pStep) {

//@line:8360

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S64, &pData[0], components, &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3JIJJ(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jlong pStep, jlong pStepFast) {

//@line:8369

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S64, &pData[0], components, &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3JIJJLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jlong pStep, jlong pStepFast, jstring obj_format) {

//@line:8378

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S64, &pData[0], components, &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3JIJJLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jlongArray obj_pData, jint components, jlong pStep, jlong pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8389

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_S64, &pData[0], components, &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components) {

//@line:8420

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_Float, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3FIF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat pStep) {

//@line:8429

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_Float, &pData[0], components, &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3FIFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat pStep, jfloat pStepFast) {

//@line:8438

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_Float, &pData[0], components, &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3FIFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat pStep, jfloat pStepFast, jstring obj_format) {

//@line:8447

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_Float, &pData[0], components, &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3FIFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pData, jint components, jfloat pStep, jfloat pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8458

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_Float, &pData[0], components, &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components) {

//@line:8489

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_Double, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jdouble pStep) {

//@line:8498

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_Double, &pData[0], components, &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jdouble pStep, jdouble pStepFast) {

//@line:8507

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_Double, &pData[0], components, &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3DIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jdouble pStep, jdouble pStepFast, jstring obj_format) {

//@line:8516

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_Double, &pData[0], components, &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2_3DIDDLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jdoubleArray obj_pData, jint components, jdouble pStep, jdouble pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8527

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, ImGuiDataType_Double, &pData[0], components, &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3SI(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jshortArray obj_pData, jint components) {

//@line:8558

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3SIS(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jshortArray obj_pData, jint components, jshort pStep) {

//@line:8567

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3SISS(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jshortArray obj_pData, jint components, jshort pStep, jshort pStepFast) {

//@line:8576

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3SISSLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jshortArray obj_pData, jint components, jshort pStep, jshort pStepFast, jstring obj_format) {

//@line:8585

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3SISSLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jshortArray obj_pData, jint components, jshort pStep, jshort pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8596

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3II(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jintArray obj_pData, jint components) {

//@line:8627

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3III(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jintArray obj_pData, jint components, jint pStep) {

//@line:8636

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3IIII(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jintArray obj_pData, jint components, jint pStep, jint pStepFast) {

//@line:8645

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3IIIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jintArray obj_pData, jint components, jint pStep, jint pStepFast, jstring obj_format) {

//@line:8654

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3IIIILjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jintArray obj_pData, jint components, jint pStep, jint pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8665

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3JI(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jlongArray obj_pData, jint components) {

//@line:8696

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3JIJ(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jlongArray obj_pData, jint components, jlong pStep) {

//@line:8705

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3JIJJ(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jlongArray obj_pData, jint components, jlong pStep, jlong pStepFast) {

//@line:8714

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3JIJJLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jlongArray obj_pData, jint components, jlong pStep, jlong pStepFast, jstring obj_format) {

//@line:8723

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3JIJJLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jlongArray obj_pData, jint components, jlong pStep, jlong pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8734

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jfloatArray obj_pData, jint components) {

//@line:8765

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3FIF(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jfloatArray obj_pData, jint components, jfloat pStep) {

//@line:8774

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3FIFF(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jfloatArray obj_pData, jint components, jfloat pStep, jfloat pStepFast) {

//@line:8783

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3FIFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jfloatArray obj_pData, jint components, jfloat pStep, jfloat pStepFast, jstring obj_format) {

//@line:8792

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3FIFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jfloatArray obj_pData, jint components, jfloat pStep, jfloat pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8803

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3DI(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jdoubleArray obj_pData, jint components) {

//@line:8834

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3DID(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jdoubleArray obj_pData, jint components, jdouble pStep) {

//@line:8843

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3DIDD(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jdoubleArray obj_pData, jint components, jdouble pStep, jdouble pStepFast) {

//@line:8852

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3DIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jdoubleArray obj_pData, jint components, jdouble pStep, jdouble pStepFast, jstring obj_format) {

//@line:8861

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN__Ljava_lang_String_2I_3DIDDLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint dataType, jdoubleArray obj_pData, jint components, jdouble pStep, jdouble pStepFast, jstring obj_format, jint imGuiSliderFlags) {

//@line:8872

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pData = obj_pData == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pData, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGui::InputScalarN(label, dataType, &pData[0], components, &pStep, &pStepFast, format, imGuiSliderFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pData != NULL) env->ReleasePrimitiveArrayCritical(obj_pData, pData, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorEdit3__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_col) {

//@line:8895

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto _result = ImGui::ColorEdit3(label, &col[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorEdit3__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_col, jint imGuiColorEditFlags) {

//@line:8904

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto _result = ImGui::ColorEdit3(label, &col[0], imGuiColorEditFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorEdit4__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_col) {

//@line:8921

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto _result = ImGui::ColorEdit4(label, &col[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorEdit4__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_col, jint imGuiColorEditFlags) {

//@line:8930

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto _result = ImGui::ColorEdit4(label, &col[0], imGuiColorEditFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorPicker3__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_col) {

//@line:8947

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto _result = ImGui::ColorPicker3(label, &col[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorPicker3__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_col, jint imGuiColorEditFlags) {

//@line:8956

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto _result = ImGui::ColorPicker3(label, &col[0], imGuiColorEditFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorPicker4__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_col) {

//@line:8981

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto _result = ImGui::ColorPicker4(label, &col[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorPicker4__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_col, jint imGuiColorEditFlags) {

//@line:8990

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto _result = ImGui::ColorPicker4(label, &col[0], imGuiColorEditFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorPicker4__Ljava_lang_String_2_3FI_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_col, jint imGuiColorEditFlags, jfloatArray obj_refCol) {

//@line:8999

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto refCol = obj_refCol == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_refCol, JNI_FALSE);
        auto _result = ImGui::ColorPicker4(label, &col[0], imGuiColorEditFlags, &refCol[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        if (refCol != NULL) env->ReleasePrimitiveArrayCritical(obj_refCol, refCol, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorPicker4__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_col, jfloatArray obj_refCol) {

//@line:9010

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto refCol = obj_refCol == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_refCol, JNI_FALSE);
        auto _result = ImGui::ColorPicker4(label, &col[0], 0, &refCol[0]);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        if (refCol != NULL) env->ReleasePrimitiveArrayCritical(obj_refCol, refCol, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorButton__Ljava_lang_String_2FFFF(JNIEnv* env, jclass clazz, jstring obj_descId, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:9077

        auto descId = obj_descId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_descId, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImGui::ColorButton(descId, col);
        if (descId != NULL) env->ReleaseStringUTFChars(obj_descId, descId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorButton__Ljava_lang_String_2FFFFI(JNIEnv* env, jclass clazz, jstring obj_descId, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jint imGuiColorEditFlags) {

//@line:9085

        auto descId = obj_descId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_descId, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImGui::ColorButton(descId, col, imGuiColorEditFlags);
        if (descId != NULL) env->ReleaseStringUTFChars(obj_descId, descId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorButton__Ljava_lang_String_2FFFFIFF(JNIEnv* env, jclass clazz, jstring obj_descId, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jint imGuiColorEditFlags, jfloat sizeX, jfloat sizeY) {

//@line:9093

        auto descId = obj_descId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_descId, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::ColorButton(descId, col, imGuiColorEditFlags, size);
        if (descId != NULL) env->ReleaseStringUTFChars(obj_descId, descId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorButton__Ljava_lang_String_2FFFFFF(JNIEnv* env, jclass clazz, jstring obj_descId, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat sizeX, jfloat sizeY) {

//@line:9102

        auto descId = obj_descId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_descId, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::ColorButton(descId, col, 0, size);
        if (descId != NULL) env->ReleaseStringUTFChars(obj_descId, descId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorButton__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_descId, jfloatArray obj_col) {

//@line:9171

        auto descId = obj_descId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_descId, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto _result = ImGui::ColorButton(descId, ImVec4(col[0], col[1], col[2], col[3]));
        if (descId != NULL) env->ReleaseStringUTFChars(obj_descId, descId);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorButton__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_descId, jfloatArray obj_col, jint imGuiColorEditFlags) {

//@line:9180

        auto descId = obj_descId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_descId, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        auto _result = ImGui::ColorButton(descId, ImVec4(col[0], col[1], col[2], col[3]), imGuiColorEditFlags);
        if (descId != NULL) env->ReleaseStringUTFChars(obj_descId, descId);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorButton__Ljava_lang_String_2_3FIFF(JNIEnv* env, jclass clazz, jstring obj_descId, jfloatArray obj_col, jint imGuiColorEditFlags, jfloat sizeX, jfloat sizeY) {

//@line:9189

        auto descId = obj_descId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_descId, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::ColorButton(descId, ImVec4(col[0], col[1], col[2], col[3]), imGuiColorEditFlags, size);
        if (descId != NULL) env->ReleaseStringUTFChars(obj_descId, descId);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nColorButton__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_descId, jfloatArray obj_col, jfloat sizeX, jfloat sizeY) {

//@line:9199

        auto descId = obj_descId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_descId, JNI_FALSE);
        auto col = obj_col == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_col, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::ColorButton(descId, ImVec4(col[0], col[1], col[2], col[3]), 0, size);
        if (descId != NULL) env->ReleaseStringUTFChars(obj_descId, descId);
        if (col != NULL) env->ReleasePrimitiveArrayCritical(obj_col, col, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetColorEditOptions(JNIEnv* env, jclass clazz, jint imGuiColorEditFlags) {


//@line:9217

        ImGui::SetColorEditOptions(imGuiColorEditFlags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nTreeNode__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:9228

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::TreeNode(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nTreeNode__Ljava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId, jstring obj_label) {

//@line:9243

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::TreeNode(strId, label, NULL);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nTreeNode__JLjava_lang_String_2(JNIEnv* env, jclass clazz, jlong ptrId, jstring obj_label) {

//@line:9256

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::TreeNode((void*)ptrId, label, NULL);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nTreeNodeEx__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:9271

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::TreeNodeEx(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nTreeNodeEx__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint flags) {

//@line:9278

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::TreeNodeEx(label, flags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nTreeNodeEx__Ljava_lang_String_2ILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId, jint flags, jstring obj_label) {

//@line:9289

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::TreeNodeEx(strId, flags, label, NULL);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nTreeNodeEx__JILjava_lang_String_2(JNIEnv* env, jclass clazz, jlong ptrId, jint flags, jstring obj_label) {

//@line:9302

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::TreeNodeEx((void*)ptrId, flags, label, NULL);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTreePush__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:9316

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImGui::TreePush(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTreePush__J(JNIEnv* env, jclass clazz, jlong ptrId) {


//@line:9329

        ImGui::TreePush((void*)ptrId);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTreePop(JNIEnv* env, jclass clazz) {


//@line:9340

        ImGui::TreePop();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetTreeNodeToLabelSpacing(JNIEnv* env, jclass clazz) {


//@line:9351

        return ImGui::GetTreeNodeToLabelSpacing();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCollapsingHeader__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:9369

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::CollapsingHeader(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCollapsingHeader__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint imGuiTreeNodeFlags) {

//@line:9376

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::CollapsingHeader(label, imGuiTreeNodeFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCollapsingHeader__Ljava_lang_String_2_3Z(JNIEnv* env, jclass clazz, jstring obj_label, jbooleanArray obj_pVisible) {

//@line:9399

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pVisible = obj_pVisible == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pVisible, JNI_FALSE);
        auto _result = ImGui::CollapsingHeader(label, (pVisible != NULL ? &pVisible[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pVisible != NULL) env->ReleasePrimitiveArrayCritical(obj_pVisible, pVisible, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCollapsingHeader__Ljava_lang_String_2_3ZI(JNIEnv* env, jclass clazz, jstring obj_label, jbooleanArray obj_pVisible, jint imGuiTreeNodeFlags) {

//@line:9408

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pVisible = obj_pVisible == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pVisible, JNI_FALSE);
        auto _result = ImGui::CollapsingHeader(label, (pVisible != NULL ? &pVisible[0] : NULL), imGuiTreeNodeFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pVisible != NULL) env->ReleasePrimitiveArrayCritical(obj_pVisible, pVisible, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextItemOpen__Z(JNIEnv* env, jclass clazz, jboolean isOpen) {


//@line:9431

        ImGui::SetNextItemOpen(isOpen);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextItemOpen__ZI(JNIEnv* env, jclass clazz, jboolean isOpen, jint cond) {


//@line:9435

        ImGui::SetNextItemOpen(isOpen, cond);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:9487

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::Selectable(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable__Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_label, jboolean selected) {

//@line:9494

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::Selectable(label, selected);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable__Ljava_lang_String_2ZI(JNIEnv* env, jclass clazz, jstring obj_label, jboolean selected, jint imGuiSelectableFlags) {

//@line:9501

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::Selectable(label, selected, imGuiSelectableFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable__Ljava_lang_String_2ZIFF(JNIEnv* env, jclass clazz, jstring obj_label, jboolean selected, jint imGuiSelectableFlags, jfloat sizeX, jfloat sizeY) {

//@line:9508

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::Selectable(label, selected, imGuiSelectableFlags, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable__Ljava_lang_String_2IFF(JNIEnv* env, jclass clazz, jstring obj_label, jint imGuiSelectableFlags, jfloat sizeX, jfloat sizeY) {

//@line:9516

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::Selectable(label, false, imGuiSelectableFlags, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY) {

//@line:9524

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::Selectable(label, false, 0, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable__Ljava_lang_String_2ZFF(JNIEnv* env, jclass clazz, jstring obj_label, jboolean selected, jfloat sizeX, jfloat sizeY) {

//@line:9532

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::Selectable(label, selected, 0, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable__Ljava_lang_String_2_3Z(JNIEnv* env, jclass clazz, jstring obj_label, jbooleanArray obj_pSelected) {

//@line:9564

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pSelected = obj_pSelected == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pSelected, JNI_FALSE);
        auto _result = ImGui::Selectable(label, (pSelected != NULL ? &pSelected[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pSelected != NULL) env->ReleasePrimitiveArrayCritical(obj_pSelected, pSelected, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable__Ljava_lang_String_2_3ZI(JNIEnv* env, jclass clazz, jstring obj_label, jbooleanArray obj_pSelected, jint imGuiSelectableFlags) {

//@line:9573

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pSelected = obj_pSelected == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pSelected, JNI_FALSE);
        auto _result = ImGui::Selectable(label, (pSelected != NULL ? &pSelected[0] : NULL), imGuiSelectableFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pSelected != NULL) env->ReleasePrimitiveArrayCritical(obj_pSelected, pSelected, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable__Ljava_lang_String_2_3ZIFF(JNIEnv* env, jclass clazz, jstring obj_label, jbooleanArray obj_pSelected, jint imGuiSelectableFlags, jfloat sizeX, jfloat sizeY) {

//@line:9582

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pSelected = obj_pSelected == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pSelected, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::Selectable(label, (pSelected != NULL ? &pSelected[0] : NULL), imGuiSelectableFlags, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pSelected != NULL) env->ReleasePrimitiveArrayCritical(obj_pSelected, pSelected, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable__Ljava_lang_String_2_3ZFF(JNIEnv* env, jclass clazz, jstring obj_label, jbooleanArray obj_pSelected, jfloat sizeX, jfloat sizeY) {

//@line:9592

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pSelected = obj_pSelected == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pSelected, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::Selectable(label, (pSelected != NULL ? &pSelected[0] : NULL), 0, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pSelected != NULL) env->ReleasePrimitiveArrayCritical(obj_pSelected, pSelected, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginListBox__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:9630

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::BeginListBox(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginListBox__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY) {

//@line:9637

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::BeginListBox(label, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndListBox(JNIEnv* env, jclass clazz) {


//@line:9652

        ImGui::EndListBox();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nListBox__Ljava_lang_String_2_3I_3Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_currentItem, jobjectArray obj_items, jint itemsCount) {

//@line:9664

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto currentItem = obj_currentItem == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_currentItem, JNI_FALSE);
        const char* items[itemsCount];
        for (int i = 0; i < itemsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_items, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            items[i] = rawStr;
        };
        ImGui::ListBox(label, (currentItem != NULL ? &currentItem[0] : NULL), items, itemsCount);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (currentItem != NULL) env->ReleasePrimitiveArrayCritical(obj_currentItem, currentItem, JNI_FALSE);
        for (int i = 0; i < itemsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_items, i);
            env->ReleaseStringUTFChars(str, items[i]);
        };
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nListBox__Ljava_lang_String_2_3I_3Ljava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_currentItem, jobjectArray obj_items, jint itemsCount, jint heightInItems) {

//@line:9682

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto currentItem = obj_currentItem == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_currentItem, JNI_FALSE);
        const char* items[itemsCount];
        for (int i = 0; i < itemsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_items, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            items[i] = rawStr;
        };
        ImGui::ListBox(label, (currentItem != NULL ? &currentItem[0] : NULL), items, itemsCount, heightInItems);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (currentItem != NULL) env->ReleasePrimitiveArrayCritical(obj_currentItem, currentItem, JNI_FALSE);
        for (int i = 0; i < itemsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_items, i);
            env->ReleaseStringUTFChars(str, items[i]);
        };
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotLines__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount) {

//@line:9767

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImGui::PlotLines(label, &values[0], valuesCount);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotLines__Ljava_lang_String_2_3FII(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset) {

//@line:9775

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImGui::PlotLines(label, &values[0], valuesCount, valuesOffset);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotLines__Ljava_lang_String_2_3FIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText) {

//@line:9783

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImGui::PlotLines(label, &values[0], valuesCount, valuesOffset, overlayText);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotLines__Ljava_lang_String_2_3FIILjava_lang_String_2F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText, jfloat scaleMin) {

//@line:9793

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImGui::PlotLines(label, &values[0], valuesCount, valuesOffset, overlayText, scaleMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotLines__Ljava_lang_String_2_3FIILjava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText, jfloat scaleMin, jfloat scaleMax) {

//@line:9803

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImGui::PlotLines(label, &values[0], valuesCount, valuesOffset, overlayText, scaleMin, scaleMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotLines__Ljava_lang_String_2_3FIILjava_lang_String_2FFFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText, jfloat scaleMin, jfloat scaleMax, jfloat graphSizeX, jfloat graphSizeY) {

//@line:9813

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImVec2 graphSize = ImVec2(graphSizeX, graphSizeY);
        ImGui::PlotLines(label, &values[0], valuesCount, valuesOffset, overlayText, scaleMin, scaleMax, graphSize);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotLines__Ljava_lang_String_2_3FIILjava_lang_String_2FFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText, jfloat scaleMin, jfloat scaleMax, jfloat graphSizeX, jfloat graphSizeY, jint stride) {

//@line:9824

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImVec2 graphSize = ImVec2(graphSizeX, graphSizeY);
        ImGui::PlotLines(label, &values[0], valuesCount, valuesOffset, overlayText, scaleMin, scaleMax, graphSize, stride);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotLines__Ljava_lang_String_2_3FILjava_lang_String_2FFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jstring obj_overlayText, jfloat scaleMin, jfloat scaleMax, jfloat graphSizeX, jfloat graphSizeY, jint stride) {

//@line:9835

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImVec2 graphSize = ImVec2(graphSizeX, graphSizeY);
        ImGui::PlotLines(label, &values[0], valuesCount, 0, overlayText, scaleMin, scaleMax, graphSize, stride);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotLines__Ljava_lang_String_2_3FIFFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jfloat scaleMin, jfloat scaleMax, jfloat graphSizeX, jfloat graphSizeY, jint stride) {

//@line:9846

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImVec2 graphSize = ImVec2(graphSizeX, graphSizeY);
        ImGui::PlotLines(label, &values[0], valuesCount, 0, NULL, scaleMin, scaleMax, graphSize, stride);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotLines__Ljava_lang_String_2_3FIIFFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jfloat scaleMin, jfloat scaleMax, jfloat graphSizeX, jfloat graphSizeY, jint stride) {

//@line:9855

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImVec2 graphSize = ImVec2(graphSizeX, graphSizeY);
        ImGui::PlotLines(label, &values[0], valuesCount, valuesOffset, NULL, scaleMin, scaleMax, graphSize, stride);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotLines__Ljava_lang_String_2_3FIILjava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText, jfloat scaleMin, jfloat scaleMax, jint stride) {

//@line:9864

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImGui::PlotLines(label, &values[0], valuesCount, valuesOffset, overlayText, scaleMin, scaleMax, ImVec2(0,0), stride);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotHistogram__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount) {

//@line:9938

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImGui::PlotHistogram(label, &values[0], valuesCount);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotHistogram__Ljava_lang_String_2_3FII(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset) {

//@line:9946

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImGui::PlotHistogram(label, &values[0], valuesCount, valuesOffset);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotHistogram__Ljava_lang_String_2_3FIILjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText) {

//@line:9954

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImGui::PlotHistogram(label, &values[0], valuesCount, valuesOffset, overlayText);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotHistogram__Ljava_lang_String_2_3FIILjava_lang_String_2F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText, jfloat scaleMin) {

//@line:9964

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImGui::PlotHistogram(label, &values[0], valuesCount, valuesOffset, overlayText, scaleMin);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotHistogram__Ljava_lang_String_2_3FIILjava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText, jfloat scaleMin, jfloat scaleMax) {

//@line:9974

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImGui::PlotHistogram(label, &values[0], valuesCount, valuesOffset, overlayText, scaleMin, scaleMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotHistogram__Ljava_lang_String_2_3FIILjava_lang_String_2FFFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText, jfloat scaleMin, jfloat scaleMax, jfloat graphSizeX, jfloat graphSizeY) {

//@line:9984

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImVec2 graphSize = ImVec2(graphSizeX, graphSizeY);
        ImGui::PlotHistogram(label, &values[0], valuesCount, valuesOffset, overlayText, scaleMin, scaleMax, graphSize);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotHistogram__Ljava_lang_String_2_3FIILjava_lang_String_2FFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText, jfloat scaleMin, jfloat scaleMax, jfloat graphSizeX, jfloat graphSizeY, jint stride) {

//@line:9995

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImVec2 graphSize = ImVec2(graphSizeX, graphSizeY);
        ImGui::PlotHistogram(label, &values[0], valuesCount, valuesOffset, overlayText, scaleMin, scaleMax, graphSize, stride);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotHistogram__Ljava_lang_String_2_3FILjava_lang_String_2FFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jstring obj_overlayText, jfloat scaleMin, jfloat scaleMax, jfloat graphSizeX, jfloat graphSizeY, jint stride) {

//@line:10006

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImVec2 graphSize = ImVec2(graphSizeX, graphSizeY);
        ImGui::PlotHistogram(label, &values[0], valuesCount, 0, overlayText, scaleMin, scaleMax, graphSize, stride);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotHistogram__Ljava_lang_String_2_3FIFFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jfloat scaleMin, jfloat scaleMax, jfloat graphSizeX, jfloat graphSizeY, jint stride) {

//@line:10017

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImVec2 graphSize = ImVec2(graphSizeX, graphSizeY);
        ImGui::PlotHistogram(label, &values[0], valuesCount, 0, NULL, scaleMin, scaleMax, graphSize, stride);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotHistogram__Ljava_lang_String_2_3FIIFFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jfloat scaleMin, jfloat scaleMax, jfloat graphSizeX, jfloat graphSizeY, jint stride) {

//@line:10026

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImVec2 graphSize = ImVec2(graphSizeX, graphSizeY);
        ImGui::PlotHistogram(label, &values[0], valuesCount, valuesOffset, NULL, scaleMin, scaleMax, graphSize, stride);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPlotHistogram__Ljava_lang_String_2_3FIILjava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_values, jint valuesCount, jint valuesOffset, jstring obj_overlayText, jfloat scaleMin, jfloat scaleMax, jint stride) {

//@line:10035

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto overlayText = obj_overlayText == NULL ? NULL : (char*)env->GetStringUTFChars(obj_overlayText, JNI_FALSE);
        ImGui::PlotHistogram(label, &values[0], valuesCount, valuesOffset, overlayText, scaleMin, scaleMax, ImVec2(0,0), stride);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (overlayText != NULL) env->ReleaseStringUTFChars(obj_overlayText, overlayText);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nValue(JNIEnv* env, jclass clazz, jstring obj_prefix, jstring obj_value) {
	char* prefix = (char*)env->GetStringUTFChars(obj_prefix, 0);
	char* value = (char*)env->GetStringUTFChars(obj_value, 0);


//@line:10056

        ImGui::Value(prefix, value);
    
	env->ReleaseStringUTFChars(obj_prefix, prefix);
	env->ReleaseStringUTFChars(obj_value, value);

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginMenuBar(JNIEnv* env, jclass clazz) {


//@line:10072

        return ImGui::BeginMenuBar();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndMenuBar(JNIEnv* env, jclass clazz) {


//@line:10083

        ImGui::EndMenuBar();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginMainMenuBar(JNIEnv* env, jclass clazz) {


//@line:10094

        return ImGui::BeginMainMenuBar();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndMainMenuBar(JNIEnv* env, jclass clazz) {


//@line:10105

        ImGui::EndMainMenuBar();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginMenu__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:10123

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::BeginMenu(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginMenu__Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_label, jboolean enabled) {

//@line:10130

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::BeginMenu(label, enabled);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndMenu(JNIEnv* env, jclass clazz) {


//@line:10144

        ImGui::EndMenu();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nMenuItem__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:10169

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::MenuItem(label, NULL);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nMenuItem__Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_label, jboolean selected) {

//@line:10176

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::MenuItem(label, NULL, selected);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nMenuItem__Ljava_lang_String_2ZZ(JNIEnv* env, jclass clazz, jstring obj_label, jboolean selected, jboolean enabled) {

//@line:10183

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::MenuItem(label, NULL, selected, enabled);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nMenuItem__Ljava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_shortcut) {

//@line:10211

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto shortcut = obj_shortcut == NULL ? NULL : (char*)env->GetStringUTFChars(obj_shortcut, JNI_FALSE);
        auto _result = ImGui::MenuItem(label, shortcut);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (shortcut != NULL) env->ReleaseStringUTFChars(obj_shortcut, shortcut);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nMenuItem__Ljava_lang_String_2Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_shortcut, jboolean selected) {

//@line:10220

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto shortcut = obj_shortcut == NULL ? NULL : (char*)env->GetStringUTFChars(obj_shortcut, JNI_FALSE);
        auto _result = ImGui::MenuItem(label, shortcut, selected);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (shortcut != NULL) env->ReleaseStringUTFChars(obj_shortcut, shortcut);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nMenuItem__Ljava_lang_String_2Ljava_lang_String_2ZZ(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_shortcut, jboolean selected, jboolean enabled) {

//@line:10229

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto shortcut = obj_shortcut == NULL ? NULL : (char*)env->GetStringUTFChars(obj_shortcut, JNI_FALSE);
        auto _result = ImGui::MenuItem(label, shortcut, selected, enabled);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (shortcut != NULL) env->ReleaseStringUTFChars(obj_shortcut, shortcut);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nMenuItem__Ljava_lang_String_2Ljava_lang_String_2_3Z(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_shortcut, jbooleanArray obj_pSelected) {

//@line:10252

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto shortcut = obj_shortcut == NULL ? NULL : (char*)env->GetStringUTFChars(obj_shortcut, JNI_FALSE);
        auto pSelected = obj_pSelected == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pSelected, JNI_FALSE);
        auto _result = ImGui::MenuItem(label, shortcut, (pSelected != NULL ? &pSelected[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (shortcut != NULL) env->ReleaseStringUTFChars(obj_shortcut, shortcut);
        if (pSelected != NULL) env->ReleasePrimitiveArrayCritical(obj_pSelected, pSelected, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nMenuItem__Ljava_lang_String_2Ljava_lang_String_2_3ZZ(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_shortcut, jbooleanArray obj_pSelected, jboolean enabled) {

//@line:10263

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto shortcut = obj_shortcut == NULL ? NULL : (char*)env->GetStringUTFChars(obj_shortcut, JNI_FALSE);
        auto pSelected = obj_pSelected == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pSelected, JNI_FALSE);
        auto _result = ImGui::MenuItem(label, shortcut, (pSelected != NULL ? &pSelected[0] : NULL), enabled);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (shortcut != NULL) env->ReleaseStringUTFChars(obj_shortcut, shortcut);
        if (pSelected != NULL) env->ReleasePrimitiveArrayCritical(obj_pSelected, pSelected, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nBeginTooltip(JNIEnv* env, jclass clazz) {


//@line:10286

        ImGui::BeginTooltip();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndTooltip(JNIEnv* env, jclass clazz) {


//@line:10297

        ImGui::EndTooltip();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetTooltip(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:10308

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImGui::SetTooltip(text, NULL);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginItemTooltip(JNIEnv* env, jclass clazz) {


//@line:10326

        return ImGui::BeginItemTooltip();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetItemTooltip(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:10337

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImGui::SetItemTooltip(text, NULL);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopup__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:10368

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginPopup(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopup__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_strId, jint imGuiWindowFlags) {

//@line:10375

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginPopup(strId, imGuiWindowFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupModal__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_name) {

//@line:10410

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        auto _result = ImGui::BeginPopupModal(name);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupModal__Ljava_lang_String_2_3Z(JNIEnv* env, jclass clazz, jstring obj_name, jbooleanArray obj_pOpen) {

//@line:10417

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        auto _result = ImGui::BeginPopupModal(name, (pOpen != NULL ? &pOpen[0] : NULL));
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupModal__Ljava_lang_String_2_3ZI(JNIEnv* env, jclass clazz, jstring obj_name, jbooleanArray obj_pOpen, jint imGuiWindowFlags) {

//@line:10426

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        auto _result = ImGui::BeginPopupModal(name, (pOpen != NULL ? &pOpen[0] : NULL), imGuiWindowFlags);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupModal__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_name, jint imGuiWindowFlags) {

//@line:10435

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        auto _result = ImGui::BeginPopupModal(name, NULL, imGuiWindowFlags);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndPopup(JNIEnv* env, jclass clazz) {


//@line:10449

        ImGui::EndPopup();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nOpenPopup__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:10474

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImGui::OpenPopup(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nOpenPopup__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_strId, jint imGuiPopupFlags) {

//@line:10480

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImGui::OpenPopup(strId, imGuiPopupFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nOpenPopup__I(JNIEnv* env, jclass clazz, jint id) {


//@line:10500

        ImGui::OpenPopup((ImGuiID)id);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nOpenPopup__II(JNIEnv* env, jclass clazz, jint id, jint imGuiPopupFlags) {


//@line:10504

        ImGui::OpenPopup((ImGuiID)id, imGuiPopupFlags);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nOpenPopupOnItemClick__(JNIEnv* env, jclass clazz) {


//@line:10536

        ImGui::OpenPopupOnItemClick();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nOpenPopupOnItemClick__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:10540

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImGui::OpenPopupOnItemClick(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nOpenPopupOnItemClick__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_strId, jint imGuiPopupFlags) {

//@line:10546

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        ImGui::OpenPopupOnItemClick(strId, imGuiPopupFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nOpenPopupOnItemClick__I(JNIEnv* env, jclass clazz, jint imGuiPopupFlags) {


//@line:10552

        ImGui::OpenPopupOnItemClick(NULL, imGuiPopupFlags);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nCloseCurrentPopup(JNIEnv* env, jclass clazz) {


//@line:10563

        ImGui::CloseCurrentPopup();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextItem__(JNIEnv* env, jclass clazz) {


//@line:10605

        return ImGui::BeginPopupContextItem();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextItem__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:10609

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginPopupContextItem(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextItem__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_strId, jint imGuiPopupFlags) {

//@line:10616

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginPopupContextItem(strId, imGuiPopupFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextItem__I(JNIEnv* env, jclass clazz, jint imGuiPopupFlags) {


//@line:10623

        return ImGui::BeginPopupContextItem(NULL, imGuiPopupFlags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextWindow__(JNIEnv* env, jclass clazz) {


//@line:10655

        return ImGui::BeginPopupContextWindow();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextWindow__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:10659

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginPopupContextWindow(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextWindow__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_strId, jint imGuiPopupFlags) {

//@line:10666

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginPopupContextWindow(strId, imGuiPopupFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextWindow__I(JNIEnv* env, jclass clazz, jint imGuiPopupFlags) {


//@line:10673

        return ImGui::BeginPopupContextWindow(NULL, imGuiPopupFlags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextVoid__(JNIEnv* env, jclass clazz) {


//@line:10705

        return ImGui::BeginPopupContextVoid();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextVoid__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:10709

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginPopupContextVoid(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextVoid__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_strId, jint imGuiPopupFlags) {

//@line:10716

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginPopupContextVoid(strId, imGuiPopupFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupContextVoid__I(JNIEnv* env, jclass clazz, jint imGuiPopupFlags) {


//@line:10723

        return ImGui::BeginPopupContextVoid(NULL, imGuiPopupFlags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsPopupOpen__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:10746

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::IsPopupOpen(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsPopupOpen__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_strId, jint imGuiPopupFlags) {

//@line:10753

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::IsPopupOpen(strId, imGuiPopupFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTable__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_id, jint columns) {

//@line:10822

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        auto _result = ImGui::BeginTable(id, columns);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTable__Ljava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_id, jint columns, jint imGuiTableFlags) {

//@line:10829

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        auto _result = ImGui::BeginTable(id, columns, imGuiTableFlags);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTable__Ljava_lang_String_2IIFF(JNIEnv* env, jclass clazz, jstring obj_id, jint columns, jint imGuiTableFlags, jfloat outerSizeX, jfloat outerSizeY) {

//@line:10836

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        ImVec2 outerSize = ImVec2(outerSizeX, outerSizeY);
        auto _result = ImGui::BeginTable(id, columns, imGuiTableFlags, outerSize);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTable__Ljava_lang_String_2IIFFF(JNIEnv* env, jclass clazz, jstring obj_id, jint columns, jint imGuiTableFlags, jfloat outerSizeX, jfloat outerSizeY, jfloat innerWidth) {

//@line:10844

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        ImVec2 outerSize = ImVec2(outerSizeX, outerSizeY);
        auto _result = ImGui::BeginTable(id, columns, imGuiTableFlags, outerSize, innerWidth);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTable__Ljava_lang_String_2IFFF(JNIEnv* env, jclass clazz, jstring obj_id, jint columns, jfloat outerSizeX, jfloat outerSizeY, jfloat innerWidth) {

//@line:10852

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        ImVec2 outerSize = ImVec2(outerSizeX, outerSizeY);
        auto _result = ImGui::BeginTable(id, columns, 0, outerSize, innerWidth);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTable__Ljava_lang_String_2IF(JNIEnv* env, jclass clazz, jstring obj_id, jint columns, jfloat innerWidth) {

//@line:10860

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        auto _result = ImGui::BeginTable(id, columns, 0, ImVec2(0,0), innerWidth);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTable__Ljava_lang_String_2IIF(JNIEnv* env, jclass clazz, jstring obj_id, jint columns, jint imGuiTableFlags, jfloat innerWidth) {

//@line:10867

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        auto _result = ImGui::BeginTable(id, columns, imGuiTableFlags, ImVec2(0,0), innerWidth);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndTable(JNIEnv* env, jclass clazz) {


//@line:10881

        ImGui::EndTable();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableNextRow__(JNIEnv* env, jclass clazz) {


//@line:10913

        ImGui::TableNextRow();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableNextRow__I(JNIEnv* env, jclass clazz, jint imGuiTableRowFlags) {


//@line:10917

        ImGui::TableNextRow(imGuiTableRowFlags);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableNextRow__IF(JNIEnv* env, jclass clazz, jint imGuiTableRowFlags, jfloat minRowHeight) {


//@line:10921

        ImGui::TableNextRow(imGuiTableRowFlags, minRowHeight);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableNextRow__F(JNIEnv* env, jclass clazz, jfloat minRowHeight) {


//@line:10925

        ImGui::TableNextRow(0, minRowHeight);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nTableNextColumn(JNIEnv* env, jclass clazz) {


//@line:10936

        return ImGui::TableNextColumn();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nTableSetColumnIndex(JNIEnv* env, jclass clazz, jint columnN) {


//@line:10947

        return ImGui::TableSetColumnIndex(columnN);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableSetupColumn__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:10984

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImGui::TableSetupColumn(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableSetupColumn__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint imGuiTableColumnFlags) {

//@line:10990

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImGui::TableSetupColumn(label, imGuiTableColumnFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableSetupColumn__Ljava_lang_String_2IF(JNIEnv* env, jclass clazz, jstring obj_label, jint imGuiTableColumnFlags, jfloat initWidthOrWeight) {

//@line:10996

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImGui::TableSetupColumn(label, imGuiTableColumnFlags, initWidthOrWeight);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableSetupColumn__Ljava_lang_String_2IFI(JNIEnv* env, jclass clazz, jstring obj_label, jint imGuiTableColumnFlags, jfloat initWidthOrWeight, jint userId) {

//@line:11002

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImGui::TableSetupColumn(label, imGuiTableColumnFlags, initWidthOrWeight, userId);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableSetupColumn__Ljava_lang_String_2FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloat initWidthOrWeight, jint userId) {

//@line:11008

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImGui::TableSetupColumn(label, 0, initWidthOrWeight, userId);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableSetupColumn__Ljava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_label, jint imGuiTableColumnFlags, jint userId) {

//@line:11014

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImGui::TableSetupColumn(label, imGuiTableColumnFlags, 0.0f, userId);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableSetupScrollFreeze(JNIEnv* env, jclass clazz, jint cols, jint rows) {


//@line:11027

        ImGui::TableSetupScrollFreeze(cols, rows);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableHeader(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:11038

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImGui::TableHeader(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableHeadersRow(JNIEnv* env, jclass clazz) {


//@line:11051

        ImGui::TableHeadersRow();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableAngledHeadersRow(JNIEnv* env, jclass clazz) {


//@line:11062

        ImGui::TableAngledHeadersRow();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nTableGetSortSpecs(JNIEnv* env, jclass clazz) {


//@line:11081

        return (uintptr_t)ImGui::TableGetSortSpecs();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nTableGetColumnCount(JNIEnv* env, jclass clazz) {


//@line:11095

        return ImGui::TableGetColumnCount();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nTableGetColumnIndex(JNIEnv* env, jclass clazz) {


//@line:11106

        return ImGui::TableGetColumnIndex();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nTableGetRowIndex(JNIEnv* env, jclass clazz) {


//@line:11117

        return ImGui::TableGetRowIndex();
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_nTableGetColumnName__(JNIEnv* env, jclass clazz) {


//@line:11135

        return env->NewStringUTF(ImGui::TableGetColumnName());
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_nTableGetColumnName__I(JNIEnv* env, jclass clazz, jint columnN) {


//@line:11139

        return env->NewStringUTF(ImGui::TableGetColumnName(columnN));
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nTableGetColumnFlags__(JNIEnv* env, jclass clazz) {


//@line:11157

        return ImGui::TableGetColumnFlags();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nTableGetColumnFlags__I(JNIEnv* env, jclass clazz, jint columnN) {


//@line:11161

        return ImGui::TableGetColumnFlags(columnN);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableSetColumnEnabled(JNIEnv* env, jclass clazz, jint columnN, jboolean value) {


//@line:11173

        ImGui::TableSetColumnEnabled(columnN, value);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nTableGetHoveredColumn(JNIEnv* env, jclass clazz) {


//@line:11184

        return ImGui::TableGetHoveredColumn();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableSetBgColor__II(JNIEnv* env, jclass clazz, jint imGuiTableBgTarget, jint color) {


//@line:11202

        ImGui::TableSetBgColor(imGuiTableBgTarget, color);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nTableSetBgColor__III(JNIEnv* env, jclass clazz, jint imGuiTableBgTarget, jint color, jint columnN) {


//@line:11206

        ImGui::TableSetBgColor(imGuiTableBgTarget, color, columnN);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nColumns__(JNIEnv* env, jclass clazz) {


//@line:11242

        ImGui::Columns();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nColumns__I(JNIEnv* env, jclass clazz, jint count) {


//@line:11246

        ImGui::Columns(count);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nColumns__ILjava_lang_String_2(JNIEnv* env, jclass clazz, jint count, jstring obj_id) {

//@line:11250

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        ImGui::Columns(count, id);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nColumns__ILjava_lang_String_2Z(JNIEnv* env, jclass clazz, jint count, jstring obj_id, jboolean border) {

//@line:11256

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        ImGui::Columns(count, id, border);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nColumns__Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_id, jboolean border) {

//@line:11262

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        ImGui::Columns(1, id, border);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nColumns__Z(JNIEnv* env, jclass clazz, jboolean border) {


//@line:11268

        ImGui::Columns(1, NULL, border);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nColumns__IZ(JNIEnv* env, jclass clazz, jint count, jboolean border) {


//@line:11272

        ImGui::Columns(count, NULL, border);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nNextColumn(JNIEnv* env, jclass clazz) {


//@line:11283

        ImGui::NextColumn();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetColumnIndex(JNIEnv* env, jclass clazz) {


//@line:11294

        return ImGui::GetColumnIndex();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetColumnWidth__(JNIEnv* env, jclass clazz) {


//@line:11312

        return ImGui::GetColumnWidth();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetColumnWidth__I(JNIEnv* env, jclass clazz, jint columnIndex) {


//@line:11316

        return ImGui::GetColumnWidth(columnIndex);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetColumnWidth(JNIEnv* env, jclass clazz, jint columnIndex, jfloat width) {


//@line:11327

        ImGui::SetColumnWidth(columnIndex, width);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetColumnOffset__(JNIEnv* env, jclass clazz) {


//@line:11345

        return ImGui::GetColumnOffset();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetColumnOffset__I(JNIEnv* env, jclass clazz, jint columnIndex) {


//@line:11349

        return ImGui::GetColumnOffset(columnIndex);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetColumnOffset(JNIEnv* env, jclass clazz, jint columnIndex, jfloat offsetX) {


//@line:11360

        ImGui::SetColumnOffset(columnIndex, offsetX);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetColumnsCount(JNIEnv* env, jclass clazz) {


//@line:11368

        return ImGui::GetColumnsCount();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTabBar__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_strId) {

//@line:11389

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginTabBar(strId);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTabBar__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_strId, jint imGuiTabBarFlags) {

//@line:11396

        auto strId = obj_strId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_strId, JNI_FALSE);
        auto _result = ImGui::BeginTabBar(strId, imGuiTabBarFlags);
        if (strId != NULL) env->ReleaseStringUTFChars(obj_strId, strId);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndTabBar(JNIEnv* env, jclass clazz) {


//@line:11410

        ImGui::EndTabBar();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTabItem__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:11442

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::BeginTabItem(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTabItem__Ljava_lang_String_2_3Z(JNIEnv* env, jclass clazz, jstring obj_label, jbooleanArray obj_pOpen) {

//@line:11449

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        auto _result = ImGui::BeginTabItem(label, (pOpen != NULL ? &pOpen[0] : NULL));
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTabItem__Ljava_lang_String_2_3ZI(JNIEnv* env, jclass clazz, jstring obj_label, jbooleanArray obj_pOpen, jint imGuiTabItemFlags) {

//@line:11458

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        auto _result = ImGui::BeginTabItem(label, (pOpen != NULL ? &pOpen[0] : NULL), imGuiTabItemFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTabItem__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint imGuiTabItemFlags) {

//@line:11467

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::BeginTabItem(label, NULL, imGuiTabItemFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndTabItem(JNIEnv* env, jclass clazz) {


//@line:11481

        ImGui::EndTabItem();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nTabItemButton__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:11499

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::TabItemButton(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nTabItemButton__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint imGuiTabItemFlags) {

//@line:11506

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImGui::TabItemButton(label, imGuiTabItemFlags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetTabItemClosed(JNIEnv* env, jclass clazz, jstring obj_tabOrDockedWindowLabel) {

//@line:11521

        auto tabOrDockedWindowLabel = obj_tabOrDockedWindowLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_tabOrDockedWindowLabel, JNI_FALSE);
        ImGui::SetTabItemClosed(tabOrDockedWindowLabel);
        if (tabOrDockedWindowLabel != NULL) env->ReleaseStringUTFChars(obj_tabOrDockedWindowLabel, tabOrDockedWindowLabel);
    
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpace__I(JNIEnv* env, jclass clazz, jint dockspaceId) {


//@line:11585

        return ImGui::DockSpace(dockspaceId);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpace__IFF(JNIEnv* env, jclass clazz, jint dockspaceId, jfloat sizeX, jfloat sizeY) {

//@line:11589

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::DockSpace(dockspaceId, size);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpace__IFFI(JNIEnv* env, jclass clazz, jint dockspaceId, jfloat sizeX, jfloat sizeY, jint imGuiDockNodeFlags) {

//@line:11595

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::DockSpace(dockspaceId, size, imGuiDockNodeFlags);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpace__IFFIJ(JNIEnv* env, jclass clazz, jint dockspaceId, jfloat sizeX, jfloat sizeY, jint imGuiDockNodeFlags, jlong windowClass) {

//@line:11601

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::DockSpace(dockspaceId, size, imGuiDockNodeFlags, reinterpret_cast<ImGuiWindowClass*>(windowClass));
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpace__IIJ(JNIEnv* env, jclass clazz, jint dockspaceId, jint imGuiDockNodeFlags, jlong windowClass) {


//@line:11607

        return ImGui::DockSpace(dockspaceId, ImVec2(0,0), imGuiDockNodeFlags, reinterpret_cast<ImGuiWindowClass*>(windowClass));
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpace__IJ(JNIEnv* env, jclass clazz, jint dockspaceId, jlong windowClass) {


//@line:11611

        return ImGui::DockSpace(dockspaceId, ImVec2(0,0), 0, reinterpret_cast<ImGuiWindowClass*>(windowClass));
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpace__IFFJ(JNIEnv* env, jclass clazz, jint dockspaceId, jfloat sizeX, jfloat sizeY, jlong windowClass) {

//@line:11615

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::DockSpace(dockspaceId, size, 0, reinterpret_cast<ImGuiWindowClass*>(windowClass));
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpaceOverViewport__(JNIEnv* env, jclass clazz) {


//@line:11649

        return ImGui::DockSpaceOverViewport();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpaceOverViewport__I(JNIEnv* env, jclass clazz, jint dockspaceId) {


//@line:11653

        return ImGui::DockSpaceOverViewport(dockspaceId);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpaceOverViewport__IJ(JNIEnv* env, jclass clazz, jint dockspaceId, jlong viewport) {


//@line:11657

        return ImGui::DockSpaceOverViewport(dockspaceId, reinterpret_cast<ImGuiViewport*>(viewport));
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpaceOverViewport__IJI(JNIEnv* env, jclass clazz, jint dockspaceId, jlong viewport, jint imGuiDockNodeFlags) {


//@line:11661

        return ImGui::DockSpaceOverViewport(dockspaceId, reinterpret_cast<ImGuiViewport*>(viewport), imGuiDockNodeFlags);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpaceOverViewport__IJIJ(JNIEnv* env, jclass clazz, jint dockspaceId, jlong viewport, jint imGuiDockNodeFlags, jlong windowClass) {


//@line:11665

        return ImGui::DockSpaceOverViewport(dockspaceId, reinterpret_cast<ImGuiViewport*>(viewport), imGuiDockNodeFlags, reinterpret_cast<ImGuiWindowClass*>(windowClass));
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpaceOverViewport__JIJ(JNIEnv* env, jclass clazz, jlong viewport, jint imGuiDockNodeFlags, jlong windowClass) {


//@line:11669

        return ImGui::DockSpaceOverViewport(0, reinterpret_cast<ImGuiViewport*>(viewport), imGuiDockNodeFlags, reinterpret_cast<ImGuiWindowClass*>(windowClass));
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpaceOverViewport__IJJ(JNIEnv* env, jclass clazz, jint dockspaceId, jlong viewport, jlong windowClass) {


//@line:11673

        return ImGui::DockSpaceOverViewport(dockspaceId, reinterpret_cast<ImGuiViewport*>(viewport), 0, reinterpret_cast<ImGuiWindowClass*>(windowClass));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowDockID__I(JNIEnv* env, jclass clazz, jint dockId) {


//@line:11691

        ImGui::SetNextWindowDockID(dockId);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowDockID__II(JNIEnv* env, jclass clazz, jint dockId, jint imGuiCond) {


//@line:11695

        ImGui::SetNextWindowDockID(dockId, imGuiCond);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowClass(JNIEnv* env, jclass clazz, jlong windowClass) {


//@line:11706

        ImGui::SetNextWindowClass(reinterpret_cast<ImGuiWindowClass*>(windowClass));
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetWindowDockID(JNIEnv* env, jclass clazz) {


//@line:11714

        return ImGui::GetWindowDockID();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsWindowDocked(JNIEnv* env, jclass clazz) {


//@line:11725

        return ImGui::IsWindowDocked();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLogToTTY__(JNIEnv* env, jclass clazz) {


//@line:11746

        ImGui::LogToTTY();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLogToTTY__I(JNIEnv* env, jclass clazz, jint autoOpenDepth) {


//@line:11750

        ImGui::LogToTTY(autoOpenDepth);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLogToFile__(JNIEnv* env, jclass clazz) {


//@line:11782

        ImGui::LogToFile();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLogToFile__I(JNIEnv* env, jclass clazz, jint autoOpenDepth) {


//@line:11786

        ImGui::LogToFile(autoOpenDepth);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLogToFile__ILjava_lang_String_2(JNIEnv* env, jclass clazz, jint autoOpenDepth, jstring obj_filename) {

//@line:11790

        auto filename = obj_filename == NULL ? NULL : (char*)env->GetStringUTFChars(obj_filename, JNI_FALSE);
        ImGui::LogToFile(autoOpenDepth, filename);
        if (filename != NULL) env->ReleaseStringUTFChars(obj_filename, filename);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLogToFile__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_filename) {

//@line:11796

        auto filename = obj_filename == NULL ? NULL : (char*)env->GetStringUTFChars(obj_filename, JNI_FALSE);
        ImGui::LogToFile(-1, filename);
        if (filename != NULL) env->ReleaseStringUTFChars(obj_filename, filename);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLogToClipboard__(JNIEnv* env, jclass clazz) {


//@line:11816

        ImGui::LogToClipboard();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLogToClipboard__I(JNIEnv* env, jclass clazz, jint autoOpenDepth) {


//@line:11820

        ImGui::LogToClipboard(autoOpenDepth);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLogFinish(JNIEnv* env, jclass clazz) {


//@line:11831

        ImGui::LogFinish();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLogButtons(JNIEnv* env, jclass clazz) {


//@line:11842

        ImGui::LogButtons();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLogText(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:11853

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImGui::LogText(text, NULL);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginDragDropSource__(JNIEnv* env, jclass clazz) {


//@line:11876

        return ImGui::BeginDragDropSource();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginDragDropSource__I(JNIEnv* env, jclass clazz, jint imGuiDragDropFlags) {


//@line:11880

        return ImGui::BeginDragDropSource(imGuiDragDropFlags);
    

}

static inline jboolean wrapped_Java_imgui_ImGui_nSetDragDropPayload
(JNIEnv* env, jclass clazz, jstring obj_dataType, jbyteArray obj_data, jint sz, jint imGuiCond, char* dataType, char* data) {

//@line:11926

        return ImGui::SetDragDropPayload(dataType, &data[0], sz, imGuiCond);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSetDragDropPayload(JNIEnv* env, jclass clazz, jstring obj_dataType, jbyteArray obj_data, jint sz, jint imGuiCond) {
	char* dataType = (char*)env->GetStringUTFChars(obj_dataType, 0);
	char* data = (char*)env->GetPrimitiveArrayCritical(obj_data, 0);

	jboolean JNI_returnValue = wrapped_Java_imgui_ImGui_nSetDragDropPayload(env, clazz, obj_dataType, obj_data, sz, imGuiCond, dataType, data);

	env->ReleasePrimitiveArrayCritical(obj_data, data, 0);
	env->ReleaseStringUTFChars(obj_dataType, dataType);

	return JNI_returnValue;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndDragDropSource(JNIEnv* env, jclass clazz) {


//@line:11937

        ImGui::EndDragDropSource();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginDragDropTarget(JNIEnv* env, jclass clazz) {


//@line:11948

        return ImGui::BeginDragDropTarget();
    

}

static inline jboolean wrapped_Java_imgui_ImGui_nAcceptDragDropPayload
(JNIEnv* env, jclass clazz, jstring obj_dataType, jint imGuiDragDropFlags, char* dataType) {

//@line:12003

        return ImGui::AcceptDragDropPayload(dataType, imGuiDragDropFlags) != NULL;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nAcceptDragDropPayload(JNIEnv* env, jclass clazz, jstring obj_dataType, jint imGuiDragDropFlags) {
	char* dataType = (char*)env->GetStringUTFChars(obj_dataType, 0);

	jboolean JNI_returnValue = wrapped_Java_imgui_ImGui_nAcceptDragDropPayload(env, clazz, obj_dataType, imGuiDragDropFlags, dataType);

	env->ReleaseStringUTFChars(obj_dataType, dataType);

	return JNI_returnValue;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndDragDropTarget(JNIEnv* env, jclass clazz) {


//@line:12014

        ImGui::EndDragDropTarget();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nHasDragDropPayload__(JNIEnv* env, jclass clazz) {


//@line:12053

        const ImGuiPayload* payload = ImGui::GetDragDropPayload();
        return payload != NULL && payload->Data != NULL;
    

}

static inline jboolean wrapped_Java_imgui_ImGui_nHasDragDropPayload__Ljava_lang_String_2
(JNIEnv* env, jclass clazz, jstring obj_dataType, char* dataType) {

//@line:12058

        const ImGuiPayload* payload = ImGui::GetDragDropPayload();
        return payload != NULL && payload->IsDataType(dataType);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nHasDragDropPayload__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_dataType) {
	char* dataType = (char*)env->GetStringUTFChars(obj_dataType, 0);

	jboolean JNI_returnValue = wrapped_Java_imgui_ImGui_nHasDragDropPayload__Ljava_lang_String_2(env, clazz, obj_dataType, dataType);

	env->ReleaseStringUTFChars(obj_dataType, dataType);

	return JNI_returnValue;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nBeginDisabled__(JNIEnv* env, jclass clazz) {


//@line:12087

        ImGui::BeginDisabled();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nBeginDisabled__Z(JNIEnv* env, jclass clazz, jboolean disabled) {


//@line:12091

        ImGui::BeginDisabled(disabled);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nEndDisabled(JNIEnv* env, jclass clazz) {


//@line:12099

        ImGui::EndDisabled();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushClipRect(JNIEnv* env, jclass clazz, jfloat clipRectMinX, jfloat clipRectMinY, jfloat clipRectMaxX, jfloat clipRectMaxY, jboolean intersectWithCurrentClipRect) {

//@line:12114

        ImVec2 clipRectMin = ImVec2(clipRectMinX, clipRectMinY);
        ImVec2 clipRectMax = ImVec2(clipRectMaxX, clipRectMaxY);
        ImGui::PushClipRect(clipRectMin, clipRectMax, intersectWithCurrentClipRect);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPopClipRect(JNIEnv* env, jclass clazz) {


//@line:12124

        ImGui::PopClipRect();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetItemDefaultFocus(JNIEnv* env, jclass clazz) {


//@line:12138

        ImGui::SetItemDefaultFocus();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetKeyboardFocusHere__(JNIEnv* env, jclass clazz) {


//@line:12156

        ImGui::SetKeyboardFocusHere();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetKeyboardFocusHere__I(JNIEnv* env, jclass clazz, jint offset) {


//@line:12160

        ImGui::SetKeyboardFocusHere(offset);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextItemAllowOverlap(JNIEnv* env, jclass clazz) {


//@line:12175

        ImGui::SetNextItemAllowOverlap();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemHovered__(JNIEnv* env, jclass clazz) {


//@line:12197

        return ImGui::IsItemHovered();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemHovered__I(JNIEnv* env, jclass clazz, jint imGuiHoveredFlags) {


//@line:12201

        return ImGui::IsItemHovered(imGuiHoveredFlags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemActive(JNIEnv* env, jclass clazz) {


//@line:12214

        return ImGui::IsItemActive();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemFocused(JNIEnv* env, jclass clazz) {


//@line:12225

        return ImGui::IsItemFocused();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemClicked__(JNIEnv* env, jclass clazz) {


//@line:12245

        return ImGui::IsItemClicked();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemClicked__I(JNIEnv* env, jclass clazz, jint mouseButton) {


//@line:12249

        return ImGui::IsItemClicked(mouseButton);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemVisible(JNIEnv* env, jclass clazz) {


//@line:12260

        return ImGui::IsItemVisible();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemEdited(JNIEnv* env, jclass clazz) {


//@line:12271

        return ImGui::IsItemEdited();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemActivated(JNIEnv* env, jclass clazz) {


//@line:12282

        return ImGui::IsItemActivated();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemDeactivated(JNIEnv* env, jclass clazz) {


//@line:12293

        return ImGui::IsItemDeactivated();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemDeactivatedAfterEdit(JNIEnv* env, jclass clazz) {


//@line:12306

        return ImGui::IsItemDeactivatedAfterEdit();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsItemToggledOpen(JNIEnv* env, jclass clazz) {


//@line:12317

        return ImGui::IsItemToggledOpen();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsAnyItemHovered(JNIEnv* env, jclass clazz) {


//@line:12328

        return ImGui::IsAnyItemHovered();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsAnyItemActive(JNIEnv* env, jclass clazz) {


//@line:12339

        return ImGui::IsAnyItemActive();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsAnyItemFocused(JNIEnv* env, jclass clazz) {


//@line:12349

        return ImGui::IsAnyItemFocused();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetItemID(JNIEnv* env, jclass clazz) {


//@line:12360

        return ImGui::GetItemID();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetItemRectMin(JNIEnv* env, jclass clazz, jobject dst) {


//@line:12394

        Jni::ImVec2Cpy(env, ImGui::GetItemRectMin(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetItemRectMinX(JNIEnv* env, jclass clazz) {


//@line:12398

        return ImGui::GetItemRectMin().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetItemRectMinY(JNIEnv* env, jclass clazz) {


//@line:12402

        return ImGui::GetItemRectMin().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetItemRectMax(JNIEnv* env, jclass clazz, jobject dst) {


//@line:12436

        Jni::ImVec2Cpy(env, ImGui::GetItemRectMax(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetItemRectMaxX(JNIEnv* env, jclass clazz) {


//@line:12440

        return ImGui::GetItemRectMax().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetItemRectMaxY(JNIEnv* env, jclass clazz) {


//@line:12444

        return ImGui::GetItemRectMax().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetItemRectSize(JNIEnv* env, jclass clazz, jobject dst) {


//@line:12478

        Jni::ImVec2Cpy(env, ImGui::GetItemRectSize(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetItemRectSizeX(JNIEnv* env, jclass clazz) {


//@line:12482

        return ImGui::GetItemRectSize().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetItemRectSizeY(JNIEnv* env, jclass clazz) {


//@line:12486

        return ImGui::GetItemRectSize().y;
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetMainViewport(JNIEnv* env, jclass clazz) {


//@line:12505

        return (uintptr_t)ImGui::GetMainViewport();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetBackgroundDrawList__(JNIEnv* env, jclass clazz) {


//@line:12527

        return (uintptr_t)ImGui::GetBackgroundDrawList();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetBackgroundDrawList__J(JNIEnv* env, jclass clazz, jlong viewport) {


//@line:12531

        return (uintptr_t)ImGui::GetBackgroundDrawList(reinterpret_cast<ImGuiViewport*>(viewport));
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetForegroundDrawList__(JNIEnv* env, jclass clazz) {


//@line:12551

        return (uintptr_t)ImGui::GetForegroundDrawList();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetForegroundDrawList__J(JNIEnv* env, jclass clazz, jlong viewport) {


//@line:12555

        return (uintptr_t)ImGui::GetForegroundDrawList(reinterpret_cast<ImGuiViewport*>(viewport));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsRectVisible__FF(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY) {

//@line:12575

        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImGui::IsRectVisible(size);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsRectVisible__FFFF(JNIEnv* env, jclass clazz, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY) {

//@line:12595

        ImVec2 rectMin = ImVec2(rectMinX, rectMinY);
        ImVec2 rectMax = ImVec2(rectMaxX, rectMaxY);
        auto _result = ImGui::IsRectVisible(rectMin, rectMax);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_ImGui_nGetTime(JNIEnv* env, jclass clazz) {


//@line:12609

        return ImGui::GetTime();
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetFrameCount(JNIEnv* env, jclass clazz) {


//@line:12620

        return ImGui::GetFrameCount();
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_nGetStyleColorName(JNIEnv* env, jclass clazz, jint imGuiColIdx) {


//@line:12635

        return env->NewStringUTF(ImGui::GetStyleColorName(imGuiColIdx));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetStateStorage(JNIEnv* env, jclass clazz, jlong storage) {


//@line:12646

        ImGui::SetStateStorage(reinterpret_cast<ImGuiStorage*>(storage));
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetStateStorage(JNIEnv* env, jclass clazz) {


//@line:12654

        return (uintptr_t)ImGui::GetStateStorage();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nCalcTextSize__Limgui_ImVec2_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jobject dst, jstring obj_text) {

//@line:12732

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        Jni::ImVec2Cpy(env, ImGui::CalcTextSize(text, NULL), dst);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nCalcTextSizeX__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:12738

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto _result = ImGui::CalcTextSize(text, NULL).x;
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nCalcTextSizeY__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:12745

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto _result = ImGui::CalcTextSize(text, NULL).y;
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nCalcTextSize__Limgui_ImVec2_2Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jobject dst, jstring obj_text, jboolean hideTextAfterDoubleHash) {

//@line:12752

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        Jni::ImVec2Cpy(env, ImGui::CalcTextSize(text, NULL, hideTextAfterDoubleHash), dst);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nCalcTextSizeX__Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_text, jboolean hideTextAfterDoubleHash) {

//@line:12758

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto _result = ImGui::CalcTextSize(text, NULL, hideTextAfterDoubleHash).x;
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nCalcTextSizeY__Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_text, jboolean hideTextAfterDoubleHash) {

//@line:12765

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto _result = ImGui::CalcTextSize(text, NULL, hideTextAfterDoubleHash).y;
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nCalcTextSize__Limgui_ImVec2_2Ljava_lang_String_2ZF(JNIEnv* env, jclass clazz, jobject dst, jstring obj_text, jboolean hideTextAfterDoubleHash, jfloat wrapWidth) {

//@line:12772

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        Jni::ImVec2Cpy(env, ImGui::CalcTextSize(text, NULL, hideTextAfterDoubleHash, wrapWidth), dst);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nCalcTextSizeX__Ljava_lang_String_2ZF(JNIEnv* env, jclass clazz, jstring obj_text, jboolean hideTextAfterDoubleHash, jfloat wrapWidth) {

//@line:12778

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto _result = ImGui::CalcTextSize(text, NULL, hideTextAfterDoubleHash, wrapWidth).x;
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nCalcTextSizeY__Ljava_lang_String_2ZF(JNIEnv* env, jclass clazz, jstring obj_text, jboolean hideTextAfterDoubleHash, jfloat wrapWidth) {

//@line:12785

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto _result = ImGui::CalcTextSize(text, NULL, hideTextAfterDoubleHash, wrapWidth).y;
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nCalcTextSize__Limgui_ImVec2_2Ljava_lang_String_2F(JNIEnv* env, jclass clazz, jobject dst, jstring obj_text, jfloat wrapWidth) {

//@line:12792

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        Jni::ImVec2Cpy(env, ImGui::CalcTextSize(text, NULL, false, wrapWidth), dst);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nCalcTextSizeX__Ljava_lang_String_2F(JNIEnv* env, jclass clazz, jstring obj_text, jfloat wrapWidth) {

//@line:12798

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto _result = ImGui::CalcTextSize(text, NULL, false, wrapWidth).x;
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nCalcTextSizeY__Ljava_lang_String_2F(JNIEnv* env, jclass clazz, jstring obj_text, jfloat wrapWidth) {

//@line:12805

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto _result = ImGui::CalcTextSize(text, NULL, false, wrapWidth).y;
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nColorConvertU32ToFloat4(JNIEnv* env, jclass clazz, jobject dst, jint in) {


//@line:12840

        Jni::ImVec4Cpy(env, ImGui::ColorConvertU32ToFloat4(in), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nColorConvertU32ToFloat4X(JNIEnv* env, jclass clazz, jint in) {


//@line:12844

        return ImGui::ColorConvertU32ToFloat4(in).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nColorConvertU32ToFloat4Y(JNIEnv* env, jclass clazz, jint in) {


//@line:12848

        return ImGui::ColorConvertU32ToFloat4(in).y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nColorConvertU32ToFloat4Z(JNIEnv* env, jclass clazz, jint in) {


//@line:12852

        return ImGui::ColorConvertU32ToFloat4(in).z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nColorConvertU32ToFloat4W(JNIEnv* env, jclass clazz, jint in) {


//@line:12856

        return ImGui::ColorConvertU32ToFloat4(in).w;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nColorConvertFloat4ToU32(JNIEnv* env, jclass clazz, jfloat inX, jfloat inY, jfloat inZ, jfloat inW) {

//@line:12868

        ImVec4 in = ImVec4(inX, inY, inZ, inW);
        auto _result = ImGui::ColorConvertFloat4ToU32(in);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nColorConvertRGBtoHSV(JNIEnv* env, jclass clazz, jfloatArray obj_rgb, jfloatArray obj_hsv) {
	float* rgb = (float*)env->GetPrimitiveArrayCritical(obj_rgb, 0);
	float* hsv = (float*)env->GetPrimitiveArrayCritical(obj_hsv, 0);


//@line:12878

        ImGui::ColorConvertRGBtoHSV(rgb[0], rgb[1], rgb[2], hsv[0], hsv[1], hsv[2]);
    
	env->ReleasePrimitiveArrayCritical(obj_rgb, rgb, 0);
	env->ReleasePrimitiveArrayCritical(obj_hsv, hsv, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nColorConvertHSVtoRGB(JNIEnv* env, jclass clazz, jfloatArray obj_hsv, jfloatArray obj_rgb) {
	float* hsv = (float*)env->GetPrimitiveArrayCritical(obj_hsv, 0);
	float* rgb = (float*)env->GetPrimitiveArrayCritical(obj_rgb, 0);


//@line:12886

        ImGui::ColorConvertHSVtoRGB(hsv[0], hsv[1], hsv[2], rgb[0], rgb[1], rgb[2]);
    
	env->ReleasePrimitiveArrayCritical(obj_hsv, hsv, 0);
	env->ReleasePrimitiveArrayCritical(obj_rgb, rgb, 0);

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsKeyDown(JNIEnv* env, jclass clazz, jint key) {


//@line:12903

        return ImGui::IsKeyDown(static_cast<ImGuiKey>(key));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsKeyPressed__I(JNIEnv* env, jclass clazz, jint key) {


//@line:12921

        return ImGui::IsKeyPressed(static_cast<ImGuiKey>(key));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsKeyPressed__IZ(JNIEnv* env, jclass clazz, jint key, jboolean repeat) {


//@line:12925

        return ImGui::IsKeyPressed(static_cast<ImGuiKey>(key), repeat);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsKeyReleased(JNIEnv* env, jclass clazz, jint key) {


//@line:12936

        return ImGui::IsKeyReleased(static_cast<ImGuiKey>(key));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsKeyChordPressed(JNIEnv* env, jclass clazz, jint keyChord) {


//@line:12948

        return ImGui::IsKeyChordPressed(static_cast<ImGuiKeyChord>(keyChord));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nGetKeyPressedAmount(JNIEnv* env, jclass clazz, jint key, jfloat repeatDelay, jfloat rate) {


//@line:12960

        return ImGui::GetKeyPressedAmount(static_cast<ImGuiKey>(key), repeatDelay, rate);
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_nGetKeyName(JNIEnv* env, jclass clazz, jint key) {


//@line:12971

        return env->NewStringUTF(ImGui::GetKeyName(static_cast<ImGuiKey>(key)));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextFrameWantCaptureKeyboard(JNIEnv* env, jclass clazz, jboolean wantCaptureKeyboard) {


//@line:12984

        ImGui::SetNextFrameWantCaptureKeyboard(wantCaptureKeyboard);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nShortcut__I(JNIEnv* env, jclass clazz, jint keyChord) {


//@line:13012

        return ImGui::Shortcut(static_cast<ImGuiKeyChord>(keyChord));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nShortcut__II(JNIEnv* env, jclass clazz, jint keyChord, jint flags) {


//@line:13016

        return ImGui::Shortcut(static_cast<ImGuiKeyChord>(keyChord), flags);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextItemShortcut__I(JNIEnv* env, jclass clazz, jint keyChord) {


//@line:13028

        ImGui::SetNextItemShortcut(static_cast<ImGuiKeyChord>(keyChord));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextItemShortcut__II(JNIEnv* env, jclass clazz, jint keyChord, jint flags) {


//@line:13032

        ImGui::SetNextItemShortcut(static_cast<ImGuiKeyChord>(keyChord), flags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsMouseDown(JNIEnv* env, jclass clazz, jint button) {


//@line:13048

        return ImGui::IsMouseDown(button);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsMouseClicked__I(JNIEnv* env, jclass clazz, jint button) {


//@line:13066

        return ImGui::IsMouseClicked(button);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsMouseClicked__IZ(JNIEnv* env, jclass clazz, jint button, jboolean repeat) {


//@line:13070

        return ImGui::IsMouseClicked(button, repeat);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsMouseReleased(JNIEnv* env, jclass clazz, jint button) {


//@line:13081

        return ImGui::IsMouseReleased(button);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsMouseDoubleClicked(JNIEnv* env, jclass clazz, jint button) {


//@line:13092

        return ImGui::IsMouseDoubleClicked(button);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetMouseClickedCount(JNIEnv* env, jclass clazz, jint button) {


//@line:13103

        return ImGui::GetMouseClickedCount(button);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsMouseHoveringRect__FFFF(JNIEnv* env, jclass clazz, jfloat rMinX, jfloat rMinY, jfloat rMaxX, jfloat rMaxY) {

//@line:13135

        ImVec2 rMin = ImVec2(rMinX, rMinY);
        ImVec2 rMax = ImVec2(rMaxX, rMaxY);
        auto _result = ImGui::IsMouseHoveringRect(rMin, rMax);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsMouseHoveringRect__FFFFZ(JNIEnv* env, jclass clazz, jfloat rMinX, jfloat rMinY, jfloat rMaxX, jfloat rMaxY, jboolean clip) {

//@line:13142

        ImVec2 rMin = ImVec2(rMinX, rMinY);
        ImVec2 rMax = ImVec2(rMaxX, rMaxY);
        auto _result = ImGui::IsMouseHoveringRect(rMin, rMax, clip);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsMousePosValid__(JNIEnv* env, jclass clazz) {


//@line:13170

        return ImGui::IsMousePosValid();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsMousePosValid__FF(JNIEnv* env, jclass clazz, jfloat mousePosX, jfloat mousePosY) {

//@line:13174

        ImVec2 mousePos = ImVec2(mousePosX, mousePosY);
        auto _result = ImGui::IsMousePosValid(&mousePos);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsAnyMouseDown(JNIEnv* env, jclass clazz) {


//@line:13187

        return ImGui::IsAnyMouseDown();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetMousePos(JNIEnv* env, jclass clazz, jobject dst) {


//@line:13221

        Jni::ImVec2Cpy(env, ImGui::GetMousePos(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetMousePosX(JNIEnv* env, jclass clazz) {


//@line:13225

        return ImGui::GetMousePos().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetMousePosY(JNIEnv* env, jclass clazz) {


//@line:13229

        return ImGui::GetMousePos().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetMousePosOnOpeningCurrentPopup(JNIEnv* env, jclass clazz, jobject dst) {


//@line:13263

        Jni::ImVec2Cpy(env, ImGui::GetMousePosOnOpeningCurrentPopup(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetMousePosOnOpeningCurrentPopupX(JNIEnv* env, jclass clazz) {


//@line:13267

        return ImGui::GetMousePosOnOpeningCurrentPopup().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetMousePosOnOpeningCurrentPopupY(JNIEnv* env, jclass clazz) {


//@line:13271

        return ImGui::GetMousePosOnOpeningCurrentPopup().y;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsMouseDragging__I(JNIEnv* env, jclass clazz, jint button) {


//@line:13289

        return ImGui::IsMouseDragging(button);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nIsMouseDragging__IF(JNIEnv* env, jclass clazz, jint button, jfloat lockThreshold) {


//@line:13293

        return ImGui::IsMouseDragging(button, lockThreshold);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetMouseDragDelta__Limgui_ImVec2_2(JNIEnv* env, jclass clazz, jobject dst) {


//@line:13399

        Jni::ImVec2Cpy(env, ImGui::GetMouseDragDelta(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetMouseDragDeltaX__(JNIEnv* env, jclass clazz) {


//@line:13403

        return ImGui::GetMouseDragDelta().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetMouseDragDeltaY__(JNIEnv* env, jclass clazz) {


//@line:13407

        return ImGui::GetMouseDragDelta().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetMouseDragDelta__Limgui_ImVec2_2I(JNIEnv* env, jclass clazz, jobject dst, jint button) {


//@line:13411

        Jni::ImVec2Cpy(env, ImGui::GetMouseDragDelta(button), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetMouseDragDeltaX__I(JNIEnv* env, jclass clazz, jint button) {


//@line:13415

        return ImGui::GetMouseDragDelta(button).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetMouseDragDeltaY__I(JNIEnv* env, jclass clazz, jint button) {


//@line:13419

        return ImGui::GetMouseDragDelta(button).y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nGetMouseDragDelta__Limgui_ImVec2_2IF(JNIEnv* env, jclass clazz, jobject dst, jint button, jfloat lockThreshold) {


//@line:13423

        Jni::ImVec2Cpy(env, ImGui::GetMouseDragDelta(button, lockThreshold), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetMouseDragDeltaX__IF(JNIEnv* env, jclass clazz, jint button, jfloat lockThreshold) {


//@line:13427

        return ImGui::GetMouseDragDelta(button, lockThreshold).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_nGetMouseDragDeltaY__IF(JNIEnv* env, jclass clazz, jint button, jfloat lockThreshold) {


//@line:13431

        return ImGui::GetMouseDragDelta(button, lockThreshold).y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nResetMouseDragDelta__(JNIEnv* env, jclass clazz) {


//@line:13443

        ImGui::ResetMouseDragDelta();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nResetMouseDragDelta__I(JNIEnv* env, jclass clazz, jint button) {


//@line:13447

        ImGui::ResetMouseDragDelta(button);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nGetMouseCursor(JNIEnv* env, jclass clazz) {


//@line:13459

        return ImGui::GetMouseCursor();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetMouseCursor(JNIEnv* env, jclass clazz, jint type) {


//@line:13470

        ImGui::SetMouseCursor(type);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextFrameWantCaptureMouse(JNIEnv* env, jclass clazz, jboolean wantCaptureMouse) {


//@line:13483

        ImGui::SetNextFrameWantCaptureMouse(wantCaptureMouse);
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_nGetClipboardText(JNIEnv* env, jclass clazz) {


//@line:13494

        return env->NewStringUTF(ImGui::GetClipboardText());
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetClipboardText(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:13502

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImGui::SetClipboardText(text);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLoadIniSettingsFromDisk(JNIEnv* env, jclass clazz, jstring obj_iniFilename) {

//@line:13519

        auto iniFilename = obj_iniFilename == NULL ? NULL : (char*)env->GetStringUTFChars(obj_iniFilename, JNI_FALSE);
        ImGui::LoadIniSettingsFromDisk(iniFilename);
        if (iniFilename != NULL) env->ReleaseStringUTFChars(obj_iniFilename, iniFilename);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLoadIniSettingsFromMemory__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_iniData) {

//@line:13539

        auto iniData = obj_iniData == NULL ? NULL : (char*)env->GetStringUTFChars(obj_iniData, JNI_FALSE);
        ImGui::LoadIniSettingsFromMemory(iniData);
        if (iniData != NULL) env->ReleaseStringUTFChars(obj_iniData, iniData);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nLoadIniSettingsFromMemory__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_iniData, jint iniSize) {

//@line:13545

        auto iniData = obj_iniData == NULL ? NULL : (char*)env->GetStringUTFChars(obj_iniData, JNI_FALSE);
        ImGui::LoadIniSettingsFromMemory(iniData, iniSize);
        if (iniData != NULL) env->ReleaseStringUTFChars(obj_iniData, iniData);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSaveIniSettingsToDisk(JNIEnv* env, jclass clazz, jstring obj_iniFilename) {

//@line:13558

        auto iniFilename = obj_iniFilename == NULL ? NULL : (char*)env->GetStringUTFChars(obj_iniFilename, JNI_FALSE);
        ImGui::SaveIniSettingsToDisk(iniFilename);
        if (iniFilename != NULL) env->ReleaseStringUTFChars(obj_iniFilename, iniFilename);
    
}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_nSaveIniSettingsToMemory__(JNIEnv* env, jclass clazz) {


//@line:13580

        return env->NewStringUTF(ImGui::SaveIniSettingsToMemory());
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_nSaveIniSettingsToMemory__J(JNIEnv* env, jclass clazz, jlong outIniSize) {


//@line:13584

        return env->NewStringUTF(ImGui::SaveIniSettingsToMemory((size_t*)&outIniSize));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nDebugTextEncoding(JNIEnv* env, jclass clazz, jstring obj_text) {

//@line:13595

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImGui::DebugTextEncoding(text);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nDebugFlashStyleColor(JNIEnv* env, jclass clazz, jint idx) {


//@line:13605

        ImGui::DebugFlashStyleColor(static_cast<ImGuiCol>(idx));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nDebugStartItemPicker(JNIEnv* env, jclass clazz) {


//@line:13613

        ImGui::DebugStartItemPicker();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDebugCheckVersionAndDataLayout(JNIEnv* env, jclass clazz, jstring obj_versionStr, jint szIo, jint szStyle, jint szVec2, jint szVec4, jint szDrawVert, jint szDrawIdx) {

//@line:13621

        auto versionStr = obj_versionStr == NULL ? NULL : (char*)env->GetStringUTFChars(obj_versionStr, JNI_FALSE);
        auto _result = ImGui::DebugCheckVersionAndDataLayout(versionStr, szIo, szStyle, szVec2, szVec4, szDrawVert, szDrawIdx);
        if (versionStr != NULL) env->ReleaseStringUTFChars(obj_versionStr, versionStr);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetPlatformIO(JNIEnv* env, jclass clazz) {


//@line:13642

        return (uintptr_t)&ImGui::GetPlatformIO();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nUpdatePlatformWindows(JNIEnv* env, jclass clazz) {


//@line:13653

        ImGui::UpdatePlatformWindows();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nRenderPlatformWindowsDefault(JNIEnv* env, jclass clazz) {


//@line:13665

        ImGui::RenderPlatformWindowsDefault();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGui_nDestroyPlatformWindows(JNIEnv* env, jclass clazz) {


//@line:13678

        ImGui::DestroyPlatformWindows();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nFindViewportByID(JNIEnv* env, jclass clazz, jint imGuiID) {


//@line:13689

        return (uintptr_t)ImGui::FindViewportByID(imGuiID);
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nFindViewportByPlatformHandle(JNIEnv* env, jclass clazz, jlong platformHandle) {


//@line:13700

        return (uintptr_t)ImGui::FindViewportByPlatformHandle((void*)platformHandle);
    

}

