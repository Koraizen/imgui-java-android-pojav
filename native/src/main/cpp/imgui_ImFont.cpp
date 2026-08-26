#include <imgui_ImFont.h>

//@line:23

        #include "_common.h"
        #define THIS ((ImFont*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_ImFont_nCreate(JNIEnv* env, jobject object) {


//@line:28

        return (uintptr_t)(new ImFont());
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nGetFallbackAdvanceX(JNIEnv* env, jobject object) {


//@line:48

        return THIS->FallbackAdvanceX;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetFallbackAdvanceX(JNIEnv* env, jobject object, jfloat value) {


//@line:52

        THIS->FallbackAdvanceX = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nGetFontSize(JNIEnv* env, jobject object) {


//@line:70

        return THIS->FontSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetFontSize(JNIEnv* env, jobject object, jfloat value) {


//@line:74

        THIS->FontSize = value;
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFont_nGetFallbackGlyph(JNIEnv* env, jobject object) {


//@line:97

        return (uintptr_t)THIS->FallbackGlyph;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetFallbackGlyph(JNIEnv* env, jobject object, jlong value) {


//@line:101

        THIS->FallbackGlyph = reinterpret_cast<ImFontGlyph*>(value);
    

}

JNIEXPORT jshort JNICALL Java_imgui_ImFont_nGetConfigDataCount(JNIEnv* env, jobject object) {


//@line:123

        return THIS->ConfigDataCount;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetConfigDataCount(JNIEnv* env, jobject object, jshort value) {


//@line:127

        THIS->ConfigDataCount = value;
    

}

JNIEXPORT jshort JNICALL Java_imgui_ImFont_nGetEllipsisChar(JNIEnv* env, jobject object) {


//@line:145

        return THIS->EllipsisChar;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetEllipsisChar(JNIEnv* env, jobject object, jshort value) {


//@line:149

        THIS->EllipsisChar = value;
    

}

JNIEXPORT jshort JNICALL Java_imgui_ImFont_nGetEllipsisCharCount(JNIEnv* env, jobject object) {


//@line:161

        return THIS->EllipsisCharCount;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetEllipsisCharCount(JNIEnv* env, jobject object, jshort value) {


//@line:165

        THIS->EllipsisCharCount = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nGetEllipsisWidth(JNIEnv* env, jobject object) {


//@line:177

        return THIS->EllipsisWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetEllipsisWidth(JNIEnv* env, jobject object, jfloat value) {


//@line:181

        THIS->EllipsisWidth = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nGetEllipsisCharStep(JNIEnv* env, jobject object) {


//@line:193

        return THIS->EllipsisCharStep;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetEllipsisCharStep(JNIEnv* env, jobject object, jfloat value) {


//@line:197

        THIS->EllipsisCharStep = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImFont_nGetDirtyLookupTables(JNIEnv* env, jobject object) {


//@line:209

        return THIS->DirtyLookupTables;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetDirtyLookupTables(JNIEnv* env, jobject object, jboolean value) {


//@line:213

        THIS->DirtyLookupTables = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nGetScale(JNIEnv* env, jobject object) {


//@line:231

        return THIS->Scale;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetScale(JNIEnv* env, jobject object, jfloat value) {


//@line:235

        THIS->Scale = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nGetAscent(JNIEnv* env, jobject object) {


//@line:253

        return THIS->Ascent;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetAscent(JNIEnv* env, jobject object, jfloat value) {


//@line:257

        THIS->Ascent = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nGetDescent(JNIEnv* env, jobject object) {


//@line:269

        return THIS->Descent;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetDescent(JNIEnv* env, jobject object, jfloat value) {


//@line:273

        THIS->Descent = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFont_nGetMetricsTotalSurface(JNIEnv* env, jobject object) {


//@line:291

        return THIS->MetricsTotalSurface;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetMetricsTotalSurface(JNIEnv* env, jobject object, jint value) {


//@line:295

        THIS->MetricsTotalSurface = value;
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFont_nFindGlyph(JNIEnv* env, jobject object, jint c) {


//@line:305

        return (uintptr_t)THIS->FindGlyph((ImWchar)c);
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFont_nFindGlyphNoFallback(JNIEnv* env, jobject object, jint c) {


//@line:313

        return (uintptr_t)THIS->FindGlyphNoFallback((ImWchar)c);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nGetCharAdvance(JNIEnv* env, jobject object, jint c) {


//@line:321

        return THIS->GetCharAdvance((ImWchar)c);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImFont_nIsLoaded(JNIEnv* env, jobject object) {


//@line:329

        return THIS->IsLoaded();
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImFont_nGetDebugName(JNIEnv* env, jobject object) {


//@line:337

        return env->NewStringUTF(THIS->GetDebugName());
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nCalcTextSizeA__Limgui_ImVec2_2FFFLjava_lang_String_2(JNIEnv* env, jobject object, jobject dst, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin) {

//@line:409

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        Jni::ImVec2Cpy(env, THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin), dst);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nCalcTextSizeAX__FFFLjava_lang_String_2(JNIEnv* env, jobject object, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin) {

//@line:415

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto _result = THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin).x;
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nCalcTextSizeAY__FFFLjava_lang_String_2(JNIEnv* env, jobject object, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin) {

//@line:422

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto _result = THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin).y;
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nCalcTextSizeA__Limgui_ImVec2_2FFFLjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jobject object, jobject dst, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin, jstring obj_textEnd) {

//@line:429

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        Jni::ImVec2Cpy(env, THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin, textEnd), dst);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nCalcTextSizeAX__FFFLjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jobject object, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin, jstring obj_textEnd) {

//@line:437

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        auto _result = THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin, textEnd).x;
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nCalcTextSizeAY__FFFLjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jobject object, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin, jstring obj_textEnd) {

//@line:446

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        auto _result = THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin, textEnd).y;
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
        return _result;
    
}

JNIEXPORT jstring JNICALL Java_imgui_ImFont_nCalcWordWrapPositionA(JNIEnv* env, jobject object, jfloat scale, jstring obj_text, jstring obj_textEnd, jfloat wrapWidth) {

//@line:459

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        auto _result = env->NewStringUTF(THIS->CalcWordWrapPositionA(scale, text, textEnd, wrapWidth));
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nRenderChar(JNIEnv* env, jobject object, jlong drawList, jfloat size, jfloat posX, jfloat posY, jint col, jint c) {

//@line:476

        ImVec2 pos = ImVec2(posX, posY);
        THIS->RenderChar(reinterpret_cast<ImDrawList*>(drawList), size, pos, col, (ImWchar)c);
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nRenderText__JFFFIFFFFLjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jobject object, jlong drawList, jfloat size, jfloat posX, jfloat posY, jint col, jfloat clipRectX, jfloat clipRectY, jfloat clipRectZ, jfloat clipRectW, jstring obj_textBegin, jstring obj_textEnd) {

//@line:513

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 clipRect = ImVec4(clipRectX, clipRectY, clipRectZ, clipRectW);
        THIS->RenderText(reinterpret_cast<ImDrawList*>(drawList), size, pos, col, clipRect, textBegin, textEnd);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nRenderText__JFFFIFFFFLjava_lang_String_2Ljava_lang_String_2F(JNIEnv* env, jobject object, jlong drawList, jfloat size, jfloat posX, jfloat posY, jint col, jfloat clipRectX, jfloat clipRectY, jfloat clipRectZ, jfloat clipRectW, jstring obj_textBegin, jstring obj_textEnd, jfloat wrapWidth) {

//@line:523

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 clipRect = ImVec4(clipRectX, clipRectY, clipRectZ, clipRectW);
        THIS->RenderText(reinterpret_cast<ImDrawList*>(drawList), size, pos, col, clipRect, textBegin, textEnd, wrapWidth);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nRenderText__JFFFIFFFFLjava_lang_String_2Ljava_lang_String_2FZ(JNIEnv* env, jobject object, jlong drawList, jfloat size, jfloat posX, jfloat posY, jint col, jfloat clipRectX, jfloat clipRectY, jfloat clipRectZ, jfloat clipRectW, jstring obj_textBegin, jstring obj_textEnd, jfloat wrapWidth, jboolean cpuFineClip) {

//@line:533

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 clipRect = ImVec4(clipRectX, clipRectY, clipRectZ, clipRectW);
        THIS->RenderText(reinterpret_cast<ImDrawList*>(drawList), size, pos, col, clipRect, textBegin, textEnd, wrapWidth, cpuFineClip);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nRenderText__JFFFIFFFFLjava_lang_String_2Ljava_lang_String_2Z(JNIEnv* env, jobject object, jlong drawList, jfloat size, jfloat posX, jfloat posY, jint col, jfloat clipRectX, jfloat clipRectY, jfloat clipRectZ, jfloat clipRectW, jstring obj_textBegin, jstring obj_textEnd, jboolean cpuFineClip) {

//@line:543

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 clipRect = ImVec4(clipRectX, clipRectY, clipRectZ, clipRectW);
        THIS->RenderText(reinterpret_cast<ImDrawList*>(drawList), size, pos, col, clipRect, textBegin, textEnd, 0.0f, cpuFineClip);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}


//@line:553

        #undef THIS
     