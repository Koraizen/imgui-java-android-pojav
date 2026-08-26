#include <imgui_ImFontConfig.h>

//@line:19

        #include "_common.h"
        #define THIS ((ImFontConfig*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_ImFontConfig_nCreate(JNIEnv* env, jobject object) {


//@line:24

        ImFontConfig* cfg = new ImFontConfig();
        cfg->FontDataOwnedByAtlas = false;
        return (uintptr_t)cfg;
    

}

JNIEXPORT jbyteArray JNICALL Java_imgui_ImFontConfig_getFontData(JNIEnv* env, jobject object) {


//@line:33

        int size = THIS->FontDataSize;
        jbyteArray jBuf = env->NewByteArray(size);
        env->SetByteArrayRegion(jBuf, 0, size, (jbyte*)THIS->FontData);
        return jBuf;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_setFontData(JNIEnv* env, jobject object, jbyteArray obj_fontData) {
	char* fontData = (char*)env->GetPrimitiveArrayCritical(obj_fontData, 0);


//@line:43

        THIS->FontData = &fontData[0];
    
	env->ReleasePrimitiveArrayCritical(obj_fontData, fontData, 0);

}

JNIEXPORT jint JNICALL Java_imgui_ImFontConfig_nGetFontDataSize(JNIEnv* env, jobject object) {


//@line:61

        return THIS->FontDataSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetFontDataSize(JNIEnv* env, jobject object, jint value) {


//@line:65

        THIS->FontDataSize = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImFontConfig_nGetFontDataOwnedByAtlas(JNIEnv* env, jobject object) {


//@line:83

        return THIS->FontDataOwnedByAtlas;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetFontDataOwnedByAtlas(JNIEnv* env, jobject object, jboolean value) {


//@line:87

        THIS->FontDataOwnedByAtlas = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontConfig_nGetFontNo(JNIEnv* env, jobject object) {


//@line:105

        return THIS->FontNo;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetFontNo(JNIEnv* env, jobject object, jint value) {


//@line:109

        THIS->FontNo = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontConfig_nGetSizePixels(JNIEnv* env, jobject object) {


//@line:127

        return THIS->SizePixels;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetSizePixels(JNIEnv* env, jobject object, jfloat value) {


//@line:131

        THIS->SizePixels = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontConfig_nGetOversampleH(JNIEnv* env, jobject object) {


//@line:153

        return THIS->OversampleH;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetOversampleH(JNIEnv* env, jobject object, jint value) {


//@line:157

        THIS->OversampleH = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontConfig_nGetOversampleV(JNIEnv* env, jobject object) {


//@line:177

        return THIS->OversampleV;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetOversampleV(JNIEnv* env, jobject object, jint value) {


//@line:181

        THIS->OversampleV = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImFontConfig_nGetPixelSnapH(JNIEnv* env, jobject object) {


//@line:201

        return THIS->PixelSnapH;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetPixelSnapH(JNIEnv* env, jobject object, jboolean value) {


//@line:205

        THIS->PixelSnapH = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nGetGlyphExtraSpacing(JNIEnv* env, jobject object, jobject dst) {


//@line:253

        Jni::ImVec2Cpy(env, THIS->GlyphExtraSpacing, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontConfig_nGetGlyphExtraSpacingX(JNIEnv* env, jobject object) {


//@line:257

        return THIS->GlyphExtraSpacing.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontConfig_nGetGlyphExtraSpacingY(JNIEnv* env, jobject object) {


//@line:261

        return THIS->GlyphExtraSpacing.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetGlyphExtraSpacing(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:265

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->GlyphExtraSpacing = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nGetGlyphOffset(JNIEnv* env, jobject object, jobject dst) {


//@line:314

        Jni::ImVec2Cpy(env, THIS->GlyphOffset, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontConfig_nGetGlyphOffsetX(JNIEnv* env, jobject object) {


//@line:318

        return THIS->GlyphOffset.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontConfig_nGetGlyphOffsetY(JNIEnv* env, jobject object) {


//@line:322

        return THIS->GlyphOffset.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetGlyphOffset(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:326

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->GlyphOffset = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetGlyphRanges(JNIEnv* env, jobject object, jshortArray obj_glyphRanges) {
	short* glyphRanges = (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, 0);


//@line:350

        THIS->GlyphRanges = glyphRanges != NULL ? (ImWchar*)&glyphRanges[0] : NULL;
    
	env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, 0);

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontConfig_nGetGlyphMinAdvanceX(JNIEnv* env, jobject object) {


//@line:368

        return THIS->GlyphMinAdvanceX;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetGlyphMinAdvanceX(JNIEnv* env, jobject object, jfloat value) {


//@line:372

        THIS->GlyphMinAdvanceX = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontConfig_nGetGlyphMaxAdvanceX(JNIEnv* env, jobject object) {


//@line:390

        return THIS->GlyphMaxAdvanceX;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetGlyphMaxAdvanceX(JNIEnv* env, jobject object, jfloat value) {


//@line:394

        THIS->GlyphMaxAdvanceX = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImFontConfig_nGetMergeMode(JNIEnv* env, jobject object) {


//@line:414

        return THIS->MergeMode;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetMergeMode(JNIEnv* env, jobject object, jboolean value) {


//@line:418

        THIS->MergeMode = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontConfig_nGetFontBuilderFlags(JNIEnv* env, jobject object) {


//@line:457

        return THIS->FontBuilderFlags;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetFontBuilderFlags(JNIEnv* env, jobject object, jint value) {


//@line:461

        THIS->FontBuilderFlags = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontConfig_nGetRasterizerMultiply(JNIEnv* env, jobject object) {


//@line:479

        return THIS->RasterizerMultiply;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetRasterizerMultiply(JNIEnv* env, jobject object, jfloat value) {


//@line:483

        THIS->RasterizerMultiply = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontConfig_nGetRasterizerDensity(JNIEnv* env, jobject object) {


//@line:501

        return THIS->RasterizerDensity;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetRasterizerDensity(JNIEnv* env, jobject object, jfloat value) {


//@line:505

        THIS->RasterizerDensity = value;
    

}

JNIEXPORT jshort JNICALL Java_imgui_ImFontConfig_nGetEllipsisChar(JNIEnv* env, jobject object) {


//@line:523

        return THIS->EllipsisChar;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetEllipsisChar(JNIEnv* env, jobject object, jshort value) {


//@line:527

        THIS->EllipsisChar = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_setName(JNIEnv* env, jobject object, jstring obj_name) {
	char* name = (char*)env->GetStringUTFChars(obj_name, 0);


//@line:536

        strcpy(THIS->Name, name);
    
	env->ReleaseStringUTFChars(obj_name, name);

}

JNIEXPORT jlong JNICALL Java_imgui_ImFontConfig_nGetDstFont(JNIEnv* env, jobject object) {


//@line:548

        return (uintptr_t)THIS->DstFont;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontConfig_nSetDstFont(JNIEnv* env, jobject object, jlong value) {


//@line:552

        THIS->DstFont = reinterpret_cast<ImFont*>(value);
    

}


//@line:556

        #undef THIS
     