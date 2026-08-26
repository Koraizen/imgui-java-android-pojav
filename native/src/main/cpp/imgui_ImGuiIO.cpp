#include <imgui_ImGuiIO.h>

//@line:17

        #include "_common.h"
        #define THIS ((ImGuiIO*)STRUCT_PTR)
     JNIEXPORT jint JNICALL Java_imgui_ImGuiIO_nGetConfigFlags(JNIEnv* env, jobject object) {


//@line:61

        return THIS->ConfigFlags;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigFlags(JNIEnv* env, jobject object, jint value) {


//@line:65

        THIS->ConfigFlags = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiIO_nGetBackendFlags(JNIEnv* env, jobject object) {


//@line:104

        return THIS->BackendFlags;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetBackendFlags(JNIEnv* env, jobject object, jint value) {


//@line:108

        THIS->BackendFlags = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nGetDisplaySize(JNIEnv* env, jobject object, jobject dst) {


//@line:156

        Jni::ImVec2Cpy(env, THIS->DisplaySize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetDisplaySizeX(JNIEnv* env, jobject object) {


//@line:160

        return THIS->DisplaySize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetDisplaySizeY(JNIEnv* env, jobject object) {


//@line:164

        return THIS->DisplaySize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetDisplaySize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:168

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->DisplaySize = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetDeltaTime(JNIEnv* env, jobject object) {


//@line:187

        return THIS->DeltaTime;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetDeltaTime(JNIEnv* env, jobject object, jfloat value) {


//@line:191

        THIS->DeltaTime = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetIniSavingRate(JNIEnv* env, jobject object) {


//@line:209

        return THIS->IniSavingRate;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetIniSavingRate(JNIEnv* env, jobject object, jfloat value) {


//@line:213

        THIS->IniSavingRate = value;
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImGuiIO_nGetIniFilename(JNIEnv* env, jobject object) {


//@line:231

        return env->NewStringUTF(THIS->IniFilename);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetIniFilename(JNIEnv* env, jobject object, jstring obj_value) {

//@line:235

        auto value = obj_value == NULL ? NULL : (char*)env->GetStringUTFChars(obj_value, JNI_FALSE);
        SET_STRING_FIELD(THIS->IniFilename, value);
        if (value != NULL) env->ReleaseStringUTFChars(obj_value, value);
    
}

JNIEXPORT jstring JNICALL Java_imgui_ImGuiIO_nGetLogFilename(JNIEnv* env, jobject object) {


//@line:255

        return env->NewStringUTF(THIS->LogFilename);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetLogFilename(JNIEnv* env, jobject object, jstring obj_value) {

//@line:259

        auto value = obj_value == NULL ? NULL : (char*)env->GetStringUTFChars(obj_value, JNI_FALSE);
        SET_STRING_FIELD(THIS->LogFilename, value);
        if (value != NULL) env->ReleaseStringUTFChars(obj_value, value);
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImGuiIO_nGetFonts(JNIEnv* env, jobject object) {


//@line:282

        return (uintptr_t)THIS->Fonts;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetFonts(JNIEnv* env, jobject object, jlong value) {


//@line:286

        THIS->Fonts = reinterpret_cast<ImFontAtlas*>(value);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetFontGlobalScale(JNIEnv* env, jobject object) {


//@line:304

        return THIS->FontGlobalScale;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetFontGlobalScale(JNIEnv* env, jobject object, jfloat value) {


//@line:308

        THIS->FontGlobalScale = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetFontAllowUserScaling(JNIEnv* env, jobject object) {


//@line:326

        return THIS->FontAllowUserScaling;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetFontAllowUserScaling(JNIEnv* env, jobject object, jboolean value) {


//@line:330

        THIS->FontAllowUserScaling = value;
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGuiIO_nGetFontDefault(JNIEnv* env, jobject object) {


//@line:348

        return (uintptr_t)THIS->FontDefault;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetFontDefault(JNIEnv* env, jobject object, jlong value) {


//@line:352

        THIS->FontDefault = reinterpret_cast<ImFont*>(value);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nGetDisplayFramebufferScale(JNIEnv* env, jobject object, jobject dst) {


//@line:400

        Jni::ImVec2Cpy(env, THIS->DisplayFramebufferScale, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetDisplayFramebufferScaleX(JNIEnv* env, jobject object) {


//@line:404

        return THIS->DisplayFramebufferScale.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetDisplayFramebufferScaleY(JNIEnv* env, jobject object) {


//@line:408

        return THIS->DisplayFramebufferScale.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetDisplayFramebufferScale(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:412

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->DisplayFramebufferScale = value;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigDockingNoSplit(JNIEnv* env, jobject object) {


//@line:433

        return THIS->ConfigDockingNoSplit;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigDockingNoSplit(JNIEnv* env, jobject object, jboolean value) {


//@line:437

        THIS->ConfigDockingNoSplit = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigDockingWithShift(JNIEnv* env, jobject object) {


//@line:455

        return THIS->ConfigDockingWithShift;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigDockingWithShift(JNIEnv* env, jobject object, jboolean value) {


//@line:459

        THIS->ConfigDockingWithShift = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigDockingAlwaysTabBar(JNIEnv* env, jobject object) {


//@line:471

        return THIS->ConfigDockingAlwaysTabBar;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigDockingAlwaysTabBar(JNIEnv* env, jobject object, jboolean value) {


//@line:475

        THIS->ConfigDockingAlwaysTabBar = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigDockingTransparentPayload(JNIEnv* env, jobject object) {


//@line:493

        return THIS->ConfigDockingTransparentPayload;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigDockingTransparentPayload(JNIEnv* env, jobject object, jboolean value) {


//@line:497

        THIS->ConfigDockingTransparentPayload = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigViewportsNoAutoMerge(JNIEnv* env, jobject object) {


//@line:517

        return THIS->ConfigViewportsNoAutoMerge;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigViewportsNoAutoMerge(JNIEnv* env, jobject object, jboolean value) {


//@line:521

        THIS->ConfigViewportsNoAutoMerge = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigViewportsNoTaskBarIcon(JNIEnv* env, jobject object) {


//@line:539

        return THIS->ConfigViewportsNoTaskBarIcon;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigViewportsNoTaskBarIcon(JNIEnv* env, jobject object, jboolean value) {


//@line:543

        THIS->ConfigViewportsNoTaskBarIcon = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigViewportsNoDecoration(JNIEnv* env, jobject object) {


//@line:561

        return THIS->ConfigViewportsNoDecoration;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigViewportsNoDecoration(JNIEnv* env, jobject object, jboolean value) {


//@line:565

        THIS->ConfigViewportsNoDecoration = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigViewportsNoDefaultParent(JNIEnv* env, jobject object) {


//@line:583

        return THIS->ConfigViewportsNoDefaultParent;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigViewportsNoDefaultParent(JNIEnv* env, jobject object, jboolean value) {


//@line:587

        THIS->ConfigViewportsNoDefaultParent = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetMouseDrawCursor(JNIEnv* env, jobject object) {


//@line:609

        return THIS->MouseDrawCursor;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDrawCursor(JNIEnv* env, jobject object, jboolean value) {


//@line:613

        THIS->MouseDrawCursor = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigMacOSXBehaviors(JNIEnv* env, jobject object) {


//@line:635

        return THIS->ConfigMacOSXBehaviors;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigMacOSXBehaviors(JNIEnv* env, jobject object, jboolean value) {


//@line:639

        THIS->ConfigMacOSXBehaviors = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigInputTrickleEventQueue(JNIEnv* env, jobject object) {


//@line:657

        return THIS->ConfigInputTrickleEventQueue;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigInputTrickleEventQueue(JNIEnv* env, jobject object, jboolean value) {


//@line:661

        THIS->ConfigInputTrickleEventQueue = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigInputTextCursorBlink(JNIEnv* env, jobject object) {


//@line:679

        return THIS->ConfigInputTextCursorBlink;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigInputTextCursorBlink(JNIEnv* env, jobject object, jboolean value) {


//@line:683

        THIS->ConfigInputTextCursorBlink = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigInputTextEnterKeepActive(JNIEnv* env, jobject object) {


//@line:701

        return THIS->ConfigInputTextEnterKeepActive;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigInputTextEnterKeepActive(JNIEnv* env, jobject object, jboolean value) {


//@line:705

        THIS->ConfigInputTextEnterKeepActive = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigDragClickToInputText(JNIEnv* env, jobject object) {


//@line:723

        return THIS->ConfigDragClickToInputText;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigDragClickToInputText(JNIEnv* env, jobject object, jboolean value) {


//@line:727

        THIS->ConfigDragClickToInputText = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigWindowsResizeFromEdges(JNIEnv* env, jobject object) {


//@line:749

        return THIS->ConfigWindowsResizeFromEdges;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigWindowsResizeFromEdges(JNIEnv* env, jobject object, jboolean value) {


//@line:753

        THIS->ConfigWindowsResizeFromEdges = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigWindowsMoveFromTitleBarOnly(JNIEnv* env, jobject object) {


//@line:771

        return THIS->ConfigWindowsMoveFromTitleBarOnly;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigWindowsMoveFromTitleBarOnly(JNIEnv* env, jobject object, jboolean value) {


//@line:775

        THIS->ConfigWindowsMoveFromTitleBarOnly = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigMemoryCompactTimer(JNIEnv* env, jobject object) {


//@line:793

        return THIS->ConfigMemoryCompactTimer;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigMemoryCompactTimer(JNIEnv* env, jobject object, jboolean value) {


//@line:797

        THIS->ConfigMemoryCompactTimer = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMouseDoubleClickTime(JNIEnv* env, jobject object) {


//@line:819

        return THIS->MouseDoubleClickTime;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDoubleClickTime(JNIEnv* env, jobject object, jfloat value) {


//@line:823

        THIS->MouseDoubleClickTime = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMouseDoubleClickMaxDist(JNIEnv* env, jobject object) {


//@line:841

        return THIS->MouseDoubleClickMaxDist;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDoubleClickMaxDist(JNIEnv* env, jobject object, jfloat value) {


//@line:845

        THIS->MouseDoubleClickMaxDist = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMouseDragThreshold(JNIEnv* env, jobject object) {


//@line:863

        return THIS->MouseDragThreshold;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDragThreshold(JNIEnv* env, jobject object, jfloat value) {


//@line:867

        THIS->MouseDragThreshold = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetKeyRepeatDelay(JNIEnv* env, jobject object) {


//@line:885

        return THIS->KeyRepeatDelay;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetKeyRepeatDelay(JNIEnv* env, jobject object, jfloat value) {


//@line:889

        THIS->KeyRepeatDelay = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetKeyRepeatRate(JNIEnv* env, jobject object) {


//@line:907

        return THIS->KeyRepeatRate;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetKeyRepeatRate(JNIEnv* env, jobject object, jfloat value) {


//@line:911

        THIS->KeyRepeatRate = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigDebugIsDebuggerPresent(JNIEnv* env, jobject object) {


//@line:939

        return THIS->ConfigDebugIsDebuggerPresent;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigDebugIsDebuggerPresent(JNIEnv* env, jobject object, jboolean value) {


//@line:943

        THIS->ConfigDebugIsDebuggerPresent = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigDebugBeginReturnValueOnce(JNIEnv* env, jobject object) {


//@line:969

        return THIS->ConfigDebugBeginReturnValueOnce;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigDebugBeginReturnValueOnce(JNIEnv* env, jobject object, jboolean value) {


//@line:973

        THIS->ConfigDebugBeginReturnValueOnce = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigDebugBeginReturnValueLoop(JNIEnv* env, jobject object) {


//@line:995

        return THIS->ConfigDebugBeginReturnValueLoop;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigDebugBeginReturnValueLoop(JNIEnv* env, jobject object, jboolean value) {


//@line:999

        THIS->ConfigDebugBeginReturnValueLoop = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigDebugIgnoreFocusLoss(JNIEnv* env, jobject object) {


//@line:1023

        return THIS->ConfigDebugIgnoreFocusLoss;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigDebugIgnoreFocusLoss(JNIEnv* env, jobject object, jboolean value) {


//@line:1027

        THIS->ConfigDebugIgnoreFocusLoss = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetConfigDebugIniSettings(JNIEnv* env, jobject object) {


//@line:1047

        return THIS->ConfigDebugIniSettings;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetConfigDebugIniSettings(JNIEnv* env, jobject object, jboolean value) {


//@line:1051

        THIS->ConfigDebugIniSettings = value;
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImGuiIO_nGetBackendPlatformName(JNIEnv* env, jobject object) {


//@line:1073

        return env->NewStringUTF(THIS->BackendPlatformName);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetBackendPlatformName(JNIEnv* env, jobject object, jstring obj_value) {

//@line:1077

        auto value = obj_value == NULL ? NULL : (char*)env->GetStringUTFChars(obj_value, JNI_FALSE);
        SET_STRING_FIELD(THIS->BackendPlatformName, value);
        if (value != NULL) env->ReleaseStringUTFChars(obj_value, value);
    
}

JNIEXPORT jstring JNICALL Java_imgui_ImGuiIO_nGetBackendRendererName(JNIEnv* env, jobject object) {


//@line:1091

        return env->NewStringUTF(THIS->BackendRendererName);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetBackendRendererName(JNIEnv* env, jobject object, jstring obj_value) {

//@line:1095

        auto value = obj_value == NULL ? NULL : (char*)env->GetStringUTFChars(obj_value, JNI_FALSE);
        SET_STRING_FIELD(THIS->BackendRendererName, value);
        if (value != NULL) env->ReleaseStringUTFChars(obj_value, value);
    
}


//@line:1104

        jobject _setClipboardTextCallback = NULL;
        jobject _getClipboardTextCallback = NULL;

        void setClipboardTextStub(void* userData, const char* text) {
            Jni::CallImStrConsumer(Jni::GetEnv(), _setClipboardTextCallback, text);
        }

        const char* getClipboardTextStub(void* user_data) {
            JNIEnv* env = Jni::GetEnv();
            jstring jstr = Jni::CallImStrSupplier(env, _getClipboardTextCallback);
            return env->GetStringUTFChars(jstr, 0);
        }
     JNIEXPORT void JNICALL Java_imgui_ImGuiIO_setSetClipboardTextFn(JNIEnv* env, jobject object, jobject setClipboardTextCallback) {


//@line:1119

        if (_setClipboardTextCallback != NULL) {
            env->DeleteGlobalRef(_setClipboardTextCallback);
        }
        _setClipboardTextCallback = env->NewGlobalRef(setClipboardTextCallback);
        THIS->SetClipboardTextFn = setClipboardTextStub;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_setGetClipboardTextFn(JNIEnv* env, jobject object, jobject getClipboardTextCallback) {


//@line:1127

        if (_getClipboardTextCallback != NULL) {
            env->DeleteGlobalRef(_getClipboardTextCallback);
        }
        _getClipboardTextCallback = env->NewGlobalRef(getClipboardTextCallback);
        THIS->GetClipboardTextFn = getClipboardTextStub;
    

}

JNIEXPORT jshort JNICALL Java_imgui_ImGuiIO_nGetPlatformLocaleDecimalPoint(JNIEnv* env, jobject object) {


//@line:1151

        return THIS->PlatformLocaleDecimalPoint;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetPlatformLocaleDecimalPoint(JNIEnv* env, jobject object, jshort value) {


//@line:1155

        THIS->PlatformLocaleDecimalPoint = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nAddKeyEvent(JNIEnv* env, jobject object, jint key, jboolean down) {


//@line:1172

        THIS->AddKeyEvent(static_cast<ImGuiKey>(key), down);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nAddKeyAnalogEvent(JNIEnv* env, jobject object, jint key, jboolean down, jfloat v) {


//@line:1183

        THIS->AddKeyAnalogEvent(static_cast<ImGuiKey>(key), down, v);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nAddMousePosEvent(JNIEnv* env, jobject object, jfloat x, jfloat y) {


//@line:1194

        THIS->AddMousePosEvent(x, y);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nAddMouseButtonEvent(JNIEnv* env, jobject object, jint button, jboolean down) {


//@line:1205

        THIS->AddMouseButtonEvent(button, down);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nAddMouseWheelEvent(JNIEnv* env, jobject object, jfloat whX, jfloat whY) {


//@line:1216

        THIS->AddMouseWheelEvent(whX, whY);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nAddMouseSourceEvent(JNIEnv* env, jobject object, jint source) {


//@line:1227

        THIS->AddMouseSourceEvent(static_cast<ImGuiMouseSource>(source));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nAddMouseViewportEvent(JNIEnv* env, jobject object, jint id) {


//@line:1238

        THIS->AddMouseViewportEvent(static_cast<ImGuiID>(id));
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nAddFocusEvent(JNIEnv* env, jobject object, jboolean focused) {


//@line:1249

        THIS->AddFocusEvent(focused);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nAddInputCharacter(JNIEnv* env, jobject object, jint c) {


//@line:1260

        THIS->AddInputCharacter((unsigned int)c);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nAddInputCharacterUTF16(JNIEnv* env, jobject object, jshort c) {


//@line:1271

        THIS->AddInputCharacterUTF16((ImWchar16)c);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nAddInputCharactersUTF8(JNIEnv* env, jobject object, jstring obj_str) {

//@line:1282

        auto str = obj_str == NULL ? NULL : (char*)env->GetStringUTFChars(obj_str, JNI_FALSE);
        THIS->AddInputCharactersUTF8(str);
        if (str != NULL) env->ReleaseStringUTFChars(obj_str, str);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetKeyEventNativeData__III(JNIEnv* env, jobject object, jint key, jint nativeKeycode, jint nativeScancode) {


//@line:1302

        THIS->SetKeyEventNativeData(static_cast<ImGuiKey>(key), nativeKeycode, nativeScancode);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetKeyEventNativeData__IIII(JNIEnv* env, jobject object, jint key, jint nativeKeycode, jint nativeScancode, jint nativeLegacyIndex) {


//@line:1306

        THIS->SetKeyEventNativeData(static_cast<ImGuiKey>(key), nativeKeycode, nativeScancode, nativeLegacyIndex);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetAppAcceptingEvents(JNIEnv* env, jobject object, jboolean acceptingEvents) {


//@line:1317

        THIS->SetAppAcceptingEvents(acceptingEvents);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nClearEventsQueue(JNIEnv* env, jobject object) {


//@line:1328

        THIS->ClearEventsQueue();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nClearInputKeys(JNIEnv* env, jobject object) {


//@line:1339

        THIS->ClearInputKeys();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nClearInputMouse(JNIEnv* env, jobject object) {


//@line:1350

        THIS->ClearInputMouse();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetWantCaptureMouse(JNIEnv* env, jobject object) {


//@line:1378

        return THIS->WantCaptureMouse;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetWantCaptureMouse(JNIEnv* env, jobject object, jboolean value) {


//@line:1382

        THIS->WantCaptureMouse = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetWantCaptureKeyboard(JNIEnv* env, jobject object) {


//@line:1402

        return THIS->WantCaptureKeyboard;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetWantCaptureKeyboard(JNIEnv* env, jobject object, jboolean value) {


//@line:1406

        THIS->WantCaptureKeyboard = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetWantTextInput(JNIEnv* env, jobject object) {


//@line:1426

        return THIS->WantTextInput;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetWantTextInput(JNIEnv* env, jobject object, jboolean value) {


//@line:1430

        THIS->WantTextInput = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetWantSetMousePos(JNIEnv* env, jobject object) {


//@line:1448

        return THIS->WantSetMousePos;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetWantSetMousePos(JNIEnv* env, jobject object, jboolean value) {


//@line:1452

        THIS->WantSetMousePos = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetWantSaveIniSettings(JNIEnv* env, jobject object) {


//@line:1474

        return THIS->WantSaveIniSettings;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetWantSaveIniSettings(JNIEnv* env, jobject object, jboolean value) {


//@line:1478

        THIS->WantSaveIniSettings = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetNavActive(JNIEnv* env, jobject object) {


//@line:1498

        return THIS->NavActive;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetNavActive(JNIEnv* env, jobject object, jboolean value) {


//@line:1502

        THIS->NavActive = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetNavVisible(JNIEnv* env, jobject object) {


//@line:1520

        return THIS->NavVisible;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetNavVisible(JNIEnv* env, jobject object, jboolean value) {


//@line:1524

        THIS->NavVisible = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetFramerate(JNIEnv* env, jobject object) {


//@line:1546

        return THIS->Framerate;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetFramerate(JNIEnv* env, jobject object, jfloat value) {


//@line:1550

        THIS->Framerate = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiIO_nGetMetricsRenderVertices(JNIEnv* env, jobject object) {


//@line:1568

        return THIS->MetricsRenderVertices;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMetricsRenderVertices(JNIEnv* env, jobject object, jint value) {


//@line:1572

        THIS->MetricsRenderVertices = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiIO_nGetMetricsRenderIndices(JNIEnv* env, jobject object) {


//@line:1590

        return THIS->MetricsRenderIndices;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMetricsRenderIndices(JNIEnv* env, jobject object, jint value) {


//@line:1594

        THIS->MetricsRenderIndices = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiIO_nGetMetricsRenderWindows(JNIEnv* env, jobject object) {


//@line:1612

        return THIS->MetricsRenderWindows;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMetricsRenderWindows(JNIEnv* env, jobject object, jint value) {


//@line:1616

        THIS->MetricsRenderWindows = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiIO_nGetMetricsActiveWindows(JNIEnv* env, jobject object) {


//@line:1634

        return THIS->MetricsActiveWindows;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMetricsActiveWindows(JNIEnv* env, jobject object, jint value) {


//@line:1638

        THIS->MetricsActiveWindows = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nGetMouseDelta(JNIEnv* env, jobject object, jobject dst) {


//@line:1686

        Jni::ImVec2Cpy(env, THIS->MouseDelta, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMouseDeltaX(JNIEnv* env, jobject object) {


//@line:1690

        return THIS->MouseDelta.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMouseDeltaY(JNIEnv* env, jobject object) {


//@line:1694

        return THIS->MouseDelta.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDelta(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1698

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MouseDelta = value;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImGuiIO_nGetCtx(JNIEnv* env, jobject object) {


//@line:1724

        return (uintptr_t)THIS->Ctx;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetCtx(JNIEnv* env, jobject object, jlong value) {


//@line:1728

        THIS->Ctx = reinterpret_cast<ImGuiContext*>(value);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nGetMousePos(JNIEnv* env, jobject object, jobject dst) {


//@line:1776

        Jni::ImVec2Cpy(env, THIS->MousePos, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMousePosX(JNIEnv* env, jobject object) {


//@line:1780

        return THIS->MousePos.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMousePosY(JNIEnv* env, jobject object) {


//@line:1784

        return THIS->MousePos.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMousePos(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1788

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MousePos = value;
    
}

JNIEXPORT jbooleanArray JNICALL Java_imgui_ImGuiIO_nGetMouseDown__(JNIEnv* env, jobject object) {


//@line:1825

        jboolean jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseDown[i];
        jbooleanArray result = env->NewBooleanArray(5);
        env->SetBooleanArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetMouseDown__I(JNIEnv* env, jobject object, jint idx) {


//@line:1834

        return THIS->MouseDown[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDown___3Z(JNIEnv* env, jobject object, jbooleanArray obj_value) {
	bool* value = (bool*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:1838

        for (int i = 0; i < 5; i++)
            THIS->MouseDown[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDown__IZ(JNIEnv* env, jobject object, jint idx, jboolean value) {


//@line:1843

        THIS->MouseDown[idx] = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMouseWheel(JNIEnv* env, jobject object) {


//@line:1861

        return THIS->MouseWheel;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseWheel(JNIEnv* env, jobject object, jfloat value) {


//@line:1865

        THIS->MouseWheel = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMouseWheelH(JNIEnv* env, jobject object) {


//@line:1883

        return THIS->MouseWheelH;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseWheelH(JNIEnv* env, jobject object, jfloat value) {


//@line:1887

        THIS->MouseWheelH = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiIO_nGetMouseHoveredViewport(JNIEnv* env, jobject object) {


//@line:1909

        return THIS->MouseHoveredViewport;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseHoveredViewport(JNIEnv* env, jobject object, jint value) {


//@line:1913

        THIS->MouseHoveredViewport = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetKeyCtrl(JNIEnv* env, jobject object) {


//@line:1931

        return THIS->KeyCtrl;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetKeyCtrl(JNIEnv* env, jobject object, jboolean value) {


//@line:1935

        THIS->KeyCtrl = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetKeyShift(JNIEnv* env, jobject object) {


//@line:1953

        return THIS->KeyShift;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetKeyShift(JNIEnv* env, jobject object, jboolean value) {


//@line:1957

        THIS->KeyShift = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetKeyAlt(JNIEnv* env, jobject object) {


//@line:1975

        return THIS->KeyAlt;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetKeyAlt(JNIEnv* env, jobject object, jboolean value) {


//@line:1979

        THIS->KeyAlt = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetKeySuper(JNIEnv* env, jobject object) {


//@line:1997

        return THIS->KeySuper;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetKeySuper(JNIEnv* env, jobject object, jboolean value) {


//@line:2001

        THIS->KeySuper = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiIO_nGetKeyMods(JNIEnv* env, jobject object) {


//@line:2021

        return THIS->KeyMods;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetKeyMods(JNIEnv* env, jobject object, jint value) {


//@line:2025

        THIS->KeyMods = value;
    

}

JNIEXPORT jobjectArray JNICALL Java_imgui_ImGuiIO_nGetKeysData(JNIEnv* env, jobject object) {


//@line:2043

        return Jni::NewImGuiKeyDataArray(env, THIS->KeysData, ImGuiKey_KeysData_SIZE);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetKeysData(JNIEnv* env, jobject object, jobjectArray value) {


//@line:2047

        Jni::ImGuiKeyDataArrayCpy(env, value, THIS->KeysData, ImGuiKey_KeysData_SIZE);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetWantCaptureMouseUnlessPopupClose(JNIEnv* env, jobject object) {


//@line:2065

        return THIS->WantCaptureMouseUnlessPopupClose;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetWantCaptureMouseUnlessPopupClose(JNIEnv* env, jobject object, jboolean value) {


//@line:2069

        THIS->WantCaptureMouseUnlessPopupClose = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nGetMousePosPrev(JNIEnv* env, jobject object, jobject dst) {


//@line:2117

        Jni::ImVec2Cpy(env, THIS->MousePosPrev, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMousePosPrevX(JNIEnv* env, jobject object) {


//@line:2121

        return THIS->MousePosPrev.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMousePosPrevY(JNIEnv* env, jobject object) {


//@line:2125

        return THIS->MousePosPrev.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMousePosPrev(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:2129

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MousePosPrev = value;
    
}

JNIEXPORT jobjectArray JNICALL Java_imgui_ImGuiIO_nGetMouseClickedPos(JNIEnv* env, jobject object) {


//@line:2148

        return Jni::NewImVec2Array(env, THIS->MouseClickedPos, 5);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseClickedPos(JNIEnv* env, jobject object, jobjectArray value) {


//@line:2152

        Jni::ImVec2ArrayCpy(env, value, THIS->MouseClickedPos, 5);
    

}

JNIEXPORT jdoubleArray JNICALL Java_imgui_ImGuiIO_nGetMouseClickedTime__(JNIEnv* env, jobject object) {


//@line:2184

        jdouble jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseClickedTime[i];
        jdoubleArray result = env->NewDoubleArray(5);
        env->SetDoubleArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jdouble JNICALL Java_imgui_ImGuiIO_nGetMouseClickedTime__I(JNIEnv* env, jobject object, jint idx) {


//@line:2193

        return THIS->MouseClickedTime[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseClickedTime___3D(JNIEnv* env, jobject object, jdoubleArray obj_value) {
	double* value = (double*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:2197

        for (int i = 0; i < 5; i++)
            THIS->MouseClickedTime[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseClickedTime__ID(JNIEnv* env, jobject object, jint idx, jdouble value) {


//@line:2202

        THIS->MouseClickedTime[idx] = value;
    

}

JNIEXPORT jbooleanArray JNICALL Java_imgui_ImGuiIO_nGetMouseClicked__(JNIEnv* env, jobject object) {


//@line:2234

        jboolean jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseClicked[i];
        jbooleanArray result = env->NewBooleanArray(5);
        env->SetBooleanArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetMouseClicked__I(JNIEnv* env, jobject object, jint idx) {


//@line:2243

        return THIS->MouseClicked[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseClicked___3Z(JNIEnv* env, jobject object, jbooleanArray obj_value) {
	bool* value = (bool*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:2247

        for (int i = 0; i < 5; i++)
            THIS->MouseClicked[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseClicked__IZ(JNIEnv* env, jobject object, jint idx, jboolean value) {


//@line:2252

        THIS->MouseClicked[idx] = value;
    

}

JNIEXPORT jbooleanArray JNICALL Java_imgui_ImGuiIO_nGetMouseDoubleClicked__(JNIEnv* env, jobject object) {


//@line:2284

        jboolean jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseDoubleClicked[i];
        jbooleanArray result = env->NewBooleanArray(5);
        env->SetBooleanArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetMouseDoubleClicked__I(JNIEnv* env, jobject object, jint idx) {


//@line:2293

        return THIS->MouseDoubleClicked[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDoubleClicked___3Z(JNIEnv* env, jobject object, jbooleanArray obj_value) {
	bool* value = (bool*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:2297

        for (int i = 0; i < 5; i++)
            THIS->MouseDoubleClicked[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDoubleClicked__IZ(JNIEnv* env, jobject object, jint idx, jboolean value) {


//@line:2302

        THIS->MouseDoubleClicked[idx] = value;
    

}

JNIEXPORT jintArray JNICALL Java_imgui_ImGuiIO_nGetMouseClickedCount__(JNIEnv* env, jobject object) {


//@line:2334

        jint jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseClickedCount[i];
        jintArray result = env->NewIntArray(5);
        env->SetIntArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiIO_nGetMouseClickedCount__I(JNIEnv* env, jobject object, jint idx) {


//@line:2343

        return THIS->MouseClickedCount[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseClickedCount___3I(JNIEnv* env, jobject object, jintArray obj_value) {
	int* value = (int*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:2347

        for (int i = 0; i < 5; i++)
            THIS->MouseClickedCount[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseClickedCount__II(JNIEnv* env, jobject object, jint idx, jint value) {


//@line:2352

        THIS->MouseClickedCount[idx] = value;
    

}

JNIEXPORT jintArray JNICALL Java_imgui_ImGuiIO_nGetMouseClickedLastCount__(JNIEnv* env, jobject object) {


//@line:2384

        jint jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseClickedLastCount[i];
        jintArray result = env->NewIntArray(5);
        env->SetIntArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiIO_nGetMouseClickedLastCount__I(JNIEnv* env, jobject object, jint idx) {


//@line:2393

        return THIS->MouseClickedLastCount[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseClickedLastCount___3I(JNIEnv* env, jobject object, jintArray obj_value) {
	int* value = (int*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:2397

        for (int i = 0; i < 5; i++)
            THIS->MouseClickedLastCount[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseClickedLastCount__II(JNIEnv* env, jobject object, jint idx, jint value) {


//@line:2402

        THIS->MouseClickedLastCount[idx] = value;
    

}

JNIEXPORT jbooleanArray JNICALL Java_imgui_ImGuiIO_nGetMouseReleased__(JNIEnv* env, jobject object) {


//@line:2434

        jboolean jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseReleased[i];
        jbooleanArray result = env->NewBooleanArray(5);
        env->SetBooleanArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetMouseReleased__I(JNIEnv* env, jobject object, jint idx) {


//@line:2443

        return THIS->MouseReleased[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseReleased___3Z(JNIEnv* env, jobject object, jbooleanArray obj_value) {
	bool* value = (bool*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:2447

        for (int i = 0; i < 5; i++)
            THIS->MouseReleased[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseReleased__IZ(JNIEnv* env, jobject object, jint idx, jboolean value) {


//@line:2452

        THIS->MouseReleased[idx] = value;
    

}

JNIEXPORT jbooleanArray JNICALL Java_imgui_ImGuiIO_nGetMouseDownOwned__(JNIEnv* env, jobject object) {


//@line:2484

        jboolean jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseDownOwned[i];
        jbooleanArray result = env->NewBooleanArray(5);
        env->SetBooleanArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetMouseDownOwned__I(JNIEnv* env, jobject object, jint idx) {


//@line:2493

        return THIS->MouseDownOwned[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDownOwned___3Z(JNIEnv* env, jobject object, jbooleanArray obj_value) {
	bool* value = (bool*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:2497

        for (int i = 0; i < 5; i++)
            THIS->MouseDownOwned[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDownOwned__IZ(JNIEnv* env, jobject object, jint idx, jboolean value) {


//@line:2502

        THIS->MouseDownOwned[idx] = value;
    

}

JNIEXPORT jbooleanArray JNICALL Java_imgui_ImGuiIO_nGetMouseDownOwnedUnlessPopupClose__(JNIEnv* env, jobject object) {


//@line:2534

        jboolean jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseDownOwnedUnlessPopupClose[i];
        jbooleanArray result = env->NewBooleanArray(5);
        env->SetBooleanArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetMouseDownOwnedUnlessPopupClose__I(JNIEnv* env, jobject object, jint idx) {


//@line:2543

        return THIS->MouseDownOwnedUnlessPopupClose[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDownOwnedUnlessPopupClose___3Z(JNIEnv* env, jobject object, jbooleanArray obj_value) {
	bool* value = (bool*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:2547

        for (int i = 0; i < 5; i++)
            THIS->MouseDownOwnedUnlessPopupClose[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDownOwnedUnlessPopupClose__IZ(JNIEnv* env, jobject object, jint idx, jboolean value) {


//@line:2552

        THIS->MouseDownOwnedUnlessPopupClose[idx] = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetMouseWheelRequestAxisSwap(JNIEnv* env, jobject object) {


//@line:2572

        return THIS->MouseWheelRequestAxisSwap;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseWheelRequestAxisSwap(JNIEnv* env, jobject object, jboolean value) {


//@line:2576

        THIS->MouseWheelRequestAxisSwap = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetMouseCtrlLeftAsRightClick(JNIEnv* env, jobject object) {


//@line:2594

        return THIS->MouseCtrlLeftAsRightClick;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseCtrlLeftAsRightClick(JNIEnv* env, jobject object, jboolean value) {


//@line:2598

        THIS->MouseCtrlLeftAsRightClick = value;
    

}

JNIEXPORT jfloatArray JNICALL Java_imgui_ImGuiIO_nGetMouseDownDuration__(JNIEnv* env, jobject object) {


//@line:2630

        jfloat jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseDownDuration[i];
        jfloatArray result = env->NewFloatArray(5);
        env->SetFloatArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMouseDownDuration__I(JNIEnv* env, jobject object, jint idx) {


//@line:2639

        return THIS->MouseDownDuration[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDownDuration___3F(JNIEnv* env, jobject object, jfloatArray obj_value) {
	float* value = (float*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:2643

        for (int i = 0; i < 5; i++)
            THIS->MouseDownDuration[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDownDuration__IF(JNIEnv* env, jobject object, jint idx, jfloat value) {


//@line:2648

        THIS->MouseDownDuration[idx] = value;
    

}

JNIEXPORT jfloatArray JNICALL Java_imgui_ImGuiIO_nGetMouseDownDurationPrev__(JNIEnv* env, jobject object) {


//@line:2680

        jfloat jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseDownDurationPrev[i];
        jfloatArray result = env->NewFloatArray(5);
        env->SetFloatArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMouseDownDurationPrev__I(JNIEnv* env, jobject object, jint idx) {


//@line:2689

        return THIS->MouseDownDurationPrev[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDownDurationPrev___3F(JNIEnv* env, jobject object, jfloatArray obj_value) {
	float* value = (float*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:2693

        for (int i = 0; i < 5; i++)
            THIS->MouseDownDurationPrev[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDownDurationPrev__IF(JNIEnv* env, jobject object, jint idx, jfloat value) {


//@line:2698

        THIS->MouseDownDurationPrev[idx] = value;
    

}

JNIEXPORT jobjectArray JNICALL Java_imgui_ImGuiIO_nGetMouseDragMaxDistanceAbs(JNIEnv* env, jobject object) {


//@line:2716

        return Jni::NewImVec2Array(env, THIS->MouseDragMaxDistanceAbs, 5);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDragMaxDistanceAbs(JNIEnv* env, jobject object, jobjectArray value) {


//@line:2720

        Jni::ImVec2ArrayCpy(env, value, THIS->MouseDragMaxDistanceAbs, 5);
    

}

JNIEXPORT jfloatArray JNICALL Java_imgui_ImGuiIO_nGetMouseDragMaxDistanceSqr__(JNIEnv* env, jobject object) {


//@line:2752

        jfloat jBuf[5];
        for (int i = 0; i < 5; i++)
            jBuf[i] = THIS->MouseDragMaxDistanceSqr[i];
        jfloatArray result = env->NewFloatArray(5);
        env->SetFloatArrayRegion(result, 0, 5, jBuf);
        return result;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetMouseDragMaxDistanceSqr__I(JNIEnv* env, jobject object, jint idx) {


//@line:2761

        return THIS->MouseDragMaxDistanceSqr[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDragMaxDistanceSqr___3F(JNIEnv* env, jobject object, jfloatArray obj_value) {
	float* value = (float*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:2765

        for (int i = 0; i < 5; i++)
            THIS->MouseDragMaxDistanceSqr[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetMouseDragMaxDistanceSqr__IF(JNIEnv* env, jobject object, jint idx, jfloat value) {


//@line:2770

        THIS->MouseDragMaxDistanceSqr[idx] = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiIO_nGetPenPressure(JNIEnv* env, jobject object) {


//@line:2788

        return THIS->PenPressure;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetPenPressure(JNIEnv* env, jobject object, jfloat value) {


//@line:2792

        THIS->PenPressure = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetAppFocusLost(JNIEnv* env, jobject object) {


//@line:2803

        return THIS->AppFocusLost;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetAppAcceptingEvents(JNIEnv* env, jobject object) {


//@line:2814

        return THIS->AppAcceptingEvents;
    

}

JNIEXPORT jshort JNICALL Java_imgui_ImGuiIO_nGetBackendUsingLegacyKeyArrays(JNIEnv* env, jobject object) {


//@line:2832

        return THIS->BackendUsingLegacyKeyArrays;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetBackendUsingLegacyKeyArrays(JNIEnv* env, jobject object, jshort value) {


//@line:2836

        THIS->BackendUsingLegacyKeyArrays = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiIO_nGetBackendUsingLegacyNavInputArray(JNIEnv* env, jobject object) {


//@line:2854

        return THIS->BackendUsingLegacyNavInputArray;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetBackendUsingLegacyNavInputArray(JNIEnv* env, jobject object, jboolean value) {


//@line:2858

        THIS->BackendUsingLegacyNavInputArray = value;
    

}

JNIEXPORT jshort JNICALL Java_imgui_ImGuiIO_nGetInputQueueSurrogate(JNIEnv* env, jobject object) {


//@line:2876

        return THIS->InputQueueSurrogate;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiIO_nSetInputQueueSurrogate(JNIEnv* env, jobject object, jshort value) {


//@line:2880

        THIS->InputQueueSurrogate = value;
    

}


//@line:2886

        #undef THIS
     