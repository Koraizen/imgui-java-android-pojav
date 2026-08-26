#include <imgui_ImGuiInputTextCallbackData.h>

//@line:22

        #include "_common.h"
        #define THIS ((ImGuiInputTextCallbackData*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_ImGuiInputTextCallbackData_nGetCtx(JNIEnv* env, jobject object) {


//@line:44

        return (uintptr_t)THIS->Ctx;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nSetCtx(JNIEnv* env, jobject object, jlong value) {


//@line:48

        THIS->Ctx = reinterpret_cast<ImGuiContext*>(value);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiInputTextCallbackData_nGetEventFlag(JNIEnv* env, jobject object) {


//@line:66

        return THIS->EventFlag;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiInputTextCallbackData_nGetFlags(JNIEnv* env, jobject object) {


//@line:84

        return THIS->Flags;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiInputTextCallbackData_nGetEventChar(JNIEnv* env, jobject object) {


//@line:104

        return THIS->EventChar;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nSetEventChar(JNIEnv* env, jobject object, jint value) {


//@line:108

        THIS->EventChar = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiInputTextCallbackData_nGetEventKey(JNIEnv* env, jobject object) {


//@line:119

        return THIS->EventKey;
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImGuiInputTextCallbackData_nGetBuf(JNIEnv* env, jobject object) {


//@line:139

        return env->NewStringUTF(THIS->Buf);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nSetBuf(JNIEnv* env, jobject object, jstring obj_value) {

//@line:143

        auto value = obj_value == NULL ? NULL : (char*)env->GetStringUTFChars(obj_value, JNI_FALSE);
        SET_STRING_FIELD(THIS->Buf, value);
        if (value != NULL) env->ReleaseStringUTFChars(obj_value, value);
    
}

JNIEXPORT jint JNICALL Java_imgui_ImGuiInputTextCallbackData_nGetBufTextLen(JNIEnv* env, jobject object) {


//@line:163

        return THIS->BufTextLen;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nSetBufTextLen(JNIEnv* env, jobject object, jint value) {


//@line:167

        THIS->BufTextLen = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiInputTextCallbackData_nGetBufDirty(JNIEnv* env, jobject object) {


//@line:185

        return THIS->BufDirty;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nSetBufDirty(JNIEnv* env, jobject object, jboolean value) {


//@line:189

        THIS->BufDirty = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiInputTextCallbackData_nGetCursorPos(JNIEnv* env, jobject object) {


//@line:207

        return THIS->CursorPos;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nSetCursorPos(JNIEnv* env, jobject object, jint value) {


//@line:211

        THIS->CursorPos = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiInputTextCallbackData_nGetSelectionStart(JNIEnv* env, jobject object) {


//@line:229

        return THIS->SelectionStart;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nSetSelectionStart(JNIEnv* env, jobject object, jint value) {


//@line:233

        THIS->SelectionStart = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiInputTextCallbackData_nGetSelectionEnd(JNIEnv* env, jobject object) {


//@line:251

        return THIS->SelectionEnd;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nSetSelectionEnd(JNIEnv* env, jobject object, jint value) {


//@line:255

        THIS->SelectionEnd = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nDeleteChars(JNIEnv* env, jobject object, jint pos, jint bytesCount) {


//@line:271

        THIS->DeleteChars(pos, bytesCount);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nInsertChars(JNIEnv* env, jobject object, jint pos, jstring obj_str) {

//@line:287

        auto str = obj_str == NULL ? NULL : (char*)env->GetStringUTFChars(obj_str, JNI_FALSE);
        THIS->InsertChars(pos, str);
        if (str != NULL) env->ReleaseStringUTFChars(obj_str, str);
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nSelectAll(JNIEnv* env, jobject object) {


//@line:297

        THIS->SelectAll();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiInputTextCallbackData_nClearSelection(JNIEnv* env, jobject object) {


//@line:305

        THIS->ClearSelection();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiInputTextCallbackData_nHasSelection(JNIEnv* env, jobject object) {


//@line:313

        return THIS->HasSelection();
    

}


//@line:317

        #undef THIS
     