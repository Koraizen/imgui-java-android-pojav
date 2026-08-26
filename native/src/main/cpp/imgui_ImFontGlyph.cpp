#include <imgui_ImFontGlyph.h>

//@line:23

        #include "_common.h"
        #define THIS ((ImFontGlyph*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_ImFontGlyph_nCreate(JNIEnv* env, jobject object) {


//@line:28

        return (uintptr_t)(new ImFontGlyph());
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontGlyph_nGetColored(JNIEnv* env, jobject object) {


//@line:46

        return THIS->Colored;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetColored(JNIEnv* env, jobject object, jint value) {


//@line:50

        THIS->Colored = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontGlyph_nGetVisible(JNIEnv* env, jobject object) {


//@line:68

        return THIS->Visible;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetVisible(JNIEnv* env, jobject object, jint value) {


//@line:72

        THIS->Visible = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontGlyph_nGetCodepoint(JNIEnv* env, jobject object) {


//@line:90

        return THIS->Codepoint;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetCodepoint(JNIEnv* env, jobject object, jint value) {


//@line:94

        THIS->Codepoint = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontGlyph_nGetAdvanceX(JNIEnv* env, jobject object) {


//@line:112

        return THIS->AdvanceX;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetAdvanceX(JNIEnv* env, jobject object, jfloat value) {


//@line:116

        THIS->AdvanceX = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontGlyph_nGetX0(JNIEnv* env, jobject object) {


//@line:134

        return THIS->X0;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetX0(JNIEnv* env, jobject object, jfloat value) {


//@line:138

        THIS->X0 = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontGlyph_nGetY0(JNIEnv* env, jobject object) {


//@line:156

        return THIS->Y0;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetY0(JNIEnv* env, jobject object, jfloat value) {


//@line:160

        THIS->Y0 = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontGlyph_nGetX1(JNIEnv* env, jobject object) {


//@line:178

        return THIS->X1;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetX1(JNIEnv* env, jobject object, jfloat value) {


//@line:182

        THIS->X1 = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontGlyph_nGetY1(JNIEnv* env, jobject object) {


//@line:200

        return THIS->Y1;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetY1(JNIEnv* env, jobject object, jfloat value) {


//@line:204

        THIS->Y1 = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontGlyph_nGetU0(JNIEnv* env, jobject object) {


//@line:222

        return THIS->U0;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetU0(JNIEnv* env, jobject object, jfloat value) {


//@line:226

        THIS->U0 = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontGlyph_nGetV0(JNIEnv* env, jobject object) {


//@line:244

        return THIS->V0;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetV0(JNIEnv* env, jobject object, jfloat value) {


//@line:248

        THIS->V0 = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontGlyph_nGetU1(JNIEnv* env, jobject object) {


//@line:266

        return THIS->U1;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetU1(JNIEnv* env, jobject object, jfloat value) {


//@line:270

        THIS->U1 = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFontGlyph_nGetV1(JNIEnv* env, jobject object) {


//@line:288

        return THIS->V1;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontGlyph_nSetV1(JNIEnv* env, jobject object, jfloat value) {


//@line:292

        THIS->V1 = value;
    

}


//@line:296

        #undef THIS
     