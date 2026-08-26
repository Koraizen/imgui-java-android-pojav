#include <imgui_ImDrawList.h>

//@line:21

        #include "_common.h"
        #define THIS ((ImDrawList*)STRUCT_PTR)
     JNIEXPORT jint JNICALL Java_imgui_ImDrawList_nGetFlags(JNIEnv* env, jobject object) {


//@line:61

        return THIS->Flags;
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nSetFlags(JNIEnv* env, jobject object, jint value) {


//@line:65

        THIS->Flags = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImDrawList_nGetVtxCurrentIdx(JNIEnv* env, jobject object) {


//@line:78

        return THIS->_VtxCurrentIdx;
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPushClipRect__FFFF(JNIEnv* env, jobject object, jfloat clipRectMinX, jfloat clipRectMinY, jfloat clipRectMaxX, jfloat clipRectMaxY) {

//@line:118

        ImVec2 clipRectMin = ImVec2(clipRectMinX, clipRectMinY);
        ImVec2 clipRectMax = ImVec2(clipRectMaxX, clipRectMaxY);
        THIS->PushClipRect(clipRectMin, clipRectMax);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPushClipRect__FFFFZ(JNIEnv* env, jobject object, jfloat clipRectMinX, jfloat clipRectMinY, jfloat clipRectMaxX, jfloat clipRectMaxY, jboolean intersectWithCurrentClipRect) {

//@line:124

        ImVec2 clipRectMin = ImVec2(clipRectMinX, clipRectMinY);
        ImVec2 clipRectMax = ImVec2(clipRectMaxX, clipRectMaxY);
        THIS->PushClipRect(clipRectMin, clipRectMax, intersectWithCurrentClipRect);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPushClipRectFullScreen(JNIEnv* env, jobject object) {


//@line:134

        THIS->PushClipRectFullScreen();
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPopClipRect(JNIEnv* env, jobject object) {


//@line:142

        THIS->PopClipRect();
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPushTextureID(JNIEnv* env, jobject object, jlong textureId) {


//@line:150

        THIS->PushTextureID((ImTextureID)(uintptr_t)textureId);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPopTextureID(JNIEnv* env, jobject object) {


//@line:158

        THIS->PopTextureID();
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nGetClipRectMin(JNIEnv* env, jobject object, jobject dst) {


//@line:180

        Jni::ImVec2Cpy(env, THIS->GetClipRectMin(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImDrawList_nGetClipRectMinX(JNIEnv* env, jobject object) {


//@line:184

        return THIS->GetClipRectMin().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImDrawList_nGetClipRectMinY(JNIEnv* env, jobject object) {


//@line:188

        return THIS->GetClipRectMin().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nGetClipRectMax(JNIEnv* env, jobject object, jobject dst) {


//@line:210

        Jni::ImVec2Cpy(env, THIS->GetClipRectMax(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImDrawList_nGetClipRectMaxX(JNIEnv* env, jobject object) {


//@line:214

        return THIS->GetClipRectMax().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImDrawList_nGetClipRectMaxY(JNIEnv* env, jobject object) {


//@line:218

        return THIS->GetClipRectMax().y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddLine__FFFFI(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jint col) {

//@line:246

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        THIS->AddLine(p1, p2, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddLine__FFFFIF(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jint col, jfloat thickness) {

//@line:252

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        THIS->AddLine(p1, p2, col, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddRect__FFFFI(JNIEnv* env, jobject object, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jint col) {

//@line:306

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddRect(pMin, pMax, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddRect__FFFFIF(JNIEnv* env, jobject object, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jint col, jfloat rounding) {

//@line:312

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddRect(pMin, pMax, col, rounding);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddRect__FFFFIFI(JNIEnv* env, jobject object, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jint col, jfloat rounding, jint flags) {

//@line:318

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddRect(pMin, pMax, col, rounding, flags);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddRect__FFFFIFIF(JNIEnv* env, jobject object, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jint col, jfloat rounding, jint flags, jfloat thickness) {

//@line:324

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddRect(pMin, pMax, col, rounding, flags, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddRect__FFFFIIF(JNIEnv* env, jobject object, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jint col, jint flags, jfloat thickness) {

//@line:330

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddRect(pMin, pMax, col, 0.0f, flags, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddRect__FFFFIFF(JNIEnv* env, jobject object, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jint col, jfloat rounding, jfloat thickness) {

//@line:336

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddRect(pMin, pMax, col, rounding, 0, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddRectFilled__FFFFI(JNIEnv* env, jobject object, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jint col) {

//@line:374

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddRectFilled(pMin, pMax, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddRectFilled__FFFFIF(JNIEnv* env, jobject object, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jint col, jfloat rounding) {

//@line:380

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddRectFilled(pMin, pMax, col, rounding);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddRectFilled__FFFFIFI(JNIEnv* env, jobject object, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jint col, jfloat rounding, jint flags) {

//@line:386

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddRectFilled(pMin, pMax, col, rounding, flags);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddRectFilled__FFFFII(JNIEnv* env, jobject object, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jint col, jint flags) {

//@line:392

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddRectFilled(pMin, pMax, col, 0.0f, flags);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddRectFilledMultiColor(JNIEnv* env, jobject object, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jint colUprLeft, jint colUprRight, jint colBotRight, jint colBotLeft) {

//@line:406

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddRectFilledMultiColor(pMin, pMax, colUprLeft, colUprRight, colBotRight, colBotLeft);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddQuad__FFFFFFFFI(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y, jint col) {

//@line:428

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        THIS->AddQuad(p1, p2, p3, p4, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddQuad__FFFFFFFFIF(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y, jint col, jfloat thickness) {

//@line:436

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        THIS->AddQuad(p1, p2, p3, p4, col, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddQuadFilled(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y, jint col) {

//@line:452

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        THIS->AddQuadFilled(p1, p2, p3, p4, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddTriangle__FFFFFFI(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jint col) {

//@line:476

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        THIS->AddTriangle(p1, p2, p3, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddTriangle__FFFFFFIF(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jint col, jfloat thickness) {

//@line:483

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        THIS->AddTriangle(p1, p2, p3, col, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddTriangleFilled(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jint col) {

//@line:498

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        THIS->AddTriangleFilled(p1, p2, p3, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddCircle__FFFI(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jint col) {

//@line:537

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->AddCircle(center, radius, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddCircle__FFFII(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jint col, jint numSegments) {

//@line:542

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->AddCircle(center, radius, col, numSegments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddCircle__FFFIIF(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jint col, jint numSegments, jfloat thickness) {

//@line:547

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->AddCircle(center, radius, col, numSegments, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddCircle__FFFIF(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jint col, jfloat thickness) {

//@line:552

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->AddCircle(center, radius, col, 0, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddCircleFilled__FFFI(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jint col) {

//@line:573

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->AddCircleFilled(center, radius, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddCircleFilled__FFFII(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jint col, jint numSegments) {

//@line:578

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->AddCircleFilled(center, radius, col, numSegments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddNgon__FFFII(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jint col, jint num_segments) {

//@line:599

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->AddNgon(center, radius, col, num_segments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddNgon__FFFIIF(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jint col, jint num_segments, jfloat thickness) {

//@line:604

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->AddNgon(center, radius, col, num_segments, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddNgonFilled(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jint col, jint num_segments) {

//@line:617

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->AddNgonFilled(center, radius, col, num_segments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddEllipse__FFFFI(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radiusX, jfloat radiusY, jint col) {

//@line:654

        ImVec2 center = ImVec2(centerX, centerY);
        ImVec2 radius = ImVec2(radiusX, radiusY);
        THIS->AddEllipse(center, radius, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddEllipse__FFFFIF(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radiusX, jfloat radiusY, jint col, jfloat rot) {

//@line:660

        ImVec2 center = ImVec2(centerX, centerY);
        ImVec2 radius = ImVec2(radiusX, radiusY);
        THIS->AddEllipse(center, radius, col, rot);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddEllipse__FFFFIFF(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radiusX, jfloat radiusY, jint col, jfloat rot, jfloat numSegments) {

//@line:666

        ImVec2 center = ImVec2(centerX, centerY);
        ImVec2 radius = ImVec2(radiusX, radiusY);
        THIS->AddEllipse(center, radius, col, rot, numSegments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddEllipse__FFFFIFFF(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radiusX, jfloat radiusY, jint col, jfloat rot, jfloat numSegments, jfloat thickness) {

//@line:672

        ImVec2 center = ImVec2(centerX, centerY);
        ImVec2 radius = ImVec2(radiusX, radiusY);
        THIS->AddEllipse(center, radius, col, rot, numSegments, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddEllipseFilled__FFFFI(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radiusX, jfloat radiusY, jint col) {

//@line:702

        ImVec2 center = ImVec2(centerX, centerY);
        ImVec2 radius = ImVec2(radiusX, radiusY);
        THIS->AddEllipseFilled(center, radius, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddEllipseFilled__FFFFIF(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radiusX, jfloat radiusY, jint col, jfloat rot) {

//@line:708

        ImVec2 center = ImVec2(centerX, centerY);
        ImVec2 radius = ImVec2(radiusX, radiusY);
        THIS->AddEllipseFilled(center, radius, col, rot);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddEllipseFilled__FFFFIFF(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radiusX, jfloat radiusY, jint col, jfloat rot, jfloat numSegments) {

//@line:714

        ImVec2 center = ImVec2(centerX, centerY);
        ImVec2 radius = ImVec2(radiusX, radiusY);
        THIS->AddEllipseFilled(center, radius, col, rot, numSegments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddText__FFILjava_lang_String_2(JNIEnv* env, jobject object, jfloat posX, jfloat posY, jint col, jstring obj_textBegin) {

//@line:736

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        THIS->AddText(pos, col, textBegin);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddText__FFILjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jobject object, jfloat posX, jfloat posY, jint col, jstring obj_textBegin, jstring obj_textEnd) {

//@line:743

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        THIS->AddText(pos, col, textBegin, textEnd);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddText__JIFFILjava_lang_String_2(JNIEnv* env, jobject object, jlong font, jint fontSize, jfloat posX, jfloat posY, jint col, jstring obj_textBegin) {

//@line:808

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        THIS->AddText(reinterpret_cast<ImFont*>(font), fontSize, pos, col, textBegin);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddText__JIFFILjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jobject object, jlong font, jint fontSize, jfloat posX, jfloat posY, jint col, jstring obj_textBegin, jstring obj_textEnd) {

//@line:815

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        THIS->AddText(reinterpret_cast<ImFont*>(font), fontSize, pos, col, textBegin, textEnd);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddText__JIFFILjava_lang_String_2Ljava_lang_String_2F(JNIEnv* env, jobject object, jlong font, jint fontSize, jfloat posX, jfloat posY, jint col, jstring obj_textBegin, jstring obj_textEnd, jfloat wrapWidth) {

//@line:824

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        THIS->AddText(reinterpret_cast<ImFont*>(font), fontSize, pos, col, textBegin, textEnd, wrapWidth);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddText__JIFFILjava_lang_String_2Ljava_lang_String_2FFFFF(JNIEnv* env, jobject object, jlong font, jint fontSize, jfloat posX, jfloat posY, jint col, jstring obj_textBegin, jstring obj_textEnd, jfloat wrapWidth, jfloat cpuFineClipRectX, jfloat cpuFineClipRectY, jfloat cpuFineClipRectZ, jfloat cpuFineClipRectW) {

//@line:833

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 cpuFineClipRect = ImVec4(cpuFineClipRectX, cpuFineClipRectY, cpuFineClipRectZ, cpuFineClipRectW);
        THIS->AddText(reinterpret_cast<ImFont*>(font), fontSize, pos, col, textBegin, textEnd, wrapWidth, &cpuFineClipRect);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddText__JIFFILjava_lang_String_2FFFFF(JNIEnv* env, jobject object, jlong font, jint fontSize, jfloat posX, jfloat posY, jint col, jstring obj_textBegin, jfloat wrapWidth, jfloat cpuFineClipRectX, jfloat cpuFineClipRectY, jfloat cpuFineClipRectZ, jfloat cpuFineClipRectW) {

//@line:843

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 cpuFineClipRect = ImVec4(cpuFineClipRectX, cpuFineClipRectY, cpuFineClipRectZ, cpuFineClipRectW);
        THIS->AddText(reinterpret_cast<ImFont*>(font), fontSize, pos, col, textBegin, NULL, wrapWidth, &cpuFineClipRect);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddText__JIFFILjava_lang_String_2FFFF(JNIEnv* env, jobject object, jlong font, jint fontSize, jfloat posX, jfloat posY, jint col, jstring obj_textBegin, jfloat cpuFineClipRectX, jfloat cpuFineClipRectY, jfloat cpuFineClipRectZ, jfloat cpuFineClipRectW) {

//@line:851

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 cpuFineClipRect = ImVec4(cpuFineClipRectX, cpuFineClipRectY, cpuFineClipRectZ, cpuFineClipRectW);
        THIS->AddText(reinterpret_cast<ImFont*>(font), fontSize, pos, col, textBegin, NULL, 0.0f, &cpuFineClipRect);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddText__JIFFILjava_lang_String_2Ljava_lang_String_2FFFF(JNIEnv* env, jobject object, jlong font, jint fontSize, jfloat posX, jfloat posY, jint col, jstring obj_textBegin, jstring obj_textEnd, jfloat cpuFineClipRectX, jfloat cpuFineClipRectY, jfloat cpuFineClipRectZ, jfloat cpuFineClipRectW) {

//@line:859

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 cpuFineClipRect = ImVec4(cpuFineClipRectX, cpuFineClipRectY, cpuFineClipRectZ, cpuFineClipRectW);
        THIS->AddText(reinterpret_cast<ImFont*>(font), fontSize, pos, col, textBegin, textEnd, 0.0f, &cpuFineClipRect);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddBezierCubic__FFFFFFFFIF(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y, jint col, jfloat thickness) {

//@line:897

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        THIS->AddBezierCubic(p1, p2, p3, p4, col, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddBezierCubic__FFFFFFFFIFI(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y, jint col, jfloat thickness, jint numSegments) {

//@line:905

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        THIS->AddBezierCubic(p1, p2, p3, p4, col, thickness, numSegments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddBezierQuadratic__FFFFFFIF(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jint col, jfloat thickness) {

//@line:941

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        THIS->AddBezierQuadratic(p1, p2, p3, col, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddBezierQuadratic__FFFFFFIFI(JNIEnv* env, jobject object, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jint col, jfloat thickness, jint numSegments) {

//@line:948

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        THIS->AddBezierQuadratic(p1, p2, p3, col, thickness, numSegments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddPolyline(JNIEnv* env, jobject object, jobjectArray obj_points, jint numPoints, jint col, jint imDrawFlags, jfloat thickness) {

//@line:963

        int pointsLength = env->GetArrayLength(obj_points);
        ImVec2 points[pointsLength];
        for (int i = 0; i < pointsLength; i++) {
            jobject src = env->GetObjectArrayElement(obj_points, i);
            ImVec2 dst;
            Jni::ImVec2Cpy(env, src, &dst);
            points[i] = dst;
        };
        THIS->AddPolyline(points, numPoints, col, imDrawFlags, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddConvexPolyFilled(JNIEnv* env, jobject object, jobjectArray obj_points, jint numPoints, jint col) {

//@line:979

        int pointsLength = env->GetArrayLength(obj_points);
        ImVec2 points[pointsLength];
        for (int i = 0; i < pointsLength; i++) {
            jobject src = env->GetObjectArrayElement(obj_points, i);
            ImVec2 dst;
            Jni::ImVec2Cpy(env, src, &dst);
            points[i] = dst;
        };
        THIS->AddConvexPolyFilled(points, numPoints, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddConcavePolyFilled(JNIEnv* env, jobject object, jobjectArray obj_points, jint numPoints, jint col) {

//@line:995

        int pointsLength = env->GetArrayLength(obj_points);
        ImVec2 points[pointsLength];
        for (int i = 0; i < pointsLength; i++) {
            jobject src = env->GetObjectArrayElement(obj_points, i);
            ImVec2 dst;
            Jni::ImVec2Cpy(env, src, &dst);
            points[i] = dst;
        };
        THIS->AddConcavePolyFilled(points, numPoints, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImage__JFFFF(JNIEnv* env, jobject object, jlong textureID, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY) {

//@line:1044

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        THIS->AddImage((ImTextureID)(uintptr_t)textureID, pMin, pMax);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImage__JFFFFFF(JNIEnv* env, jobject object, jlong textureID, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jfloat uvMinX, jfloat uvMinY) {

//@line:1050

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        ImVec2 uvMin = ImVec2(uvMinX, uvMinY);
        THIS->AddImage((ImTextureID)(uintptr_t)textureID, pMin, pMax, uvMin);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImage__JFFFFFFFF(JNIEnv* env, jobject object, jlong textureID, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jfloat uvMinX, jfloat uvMinY, jfloat uvMaxX, jfloat uvMaxY) {

//@line:1057

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        ImVec2 uvMin = ImVec2(uvMinX, uvMinY);
        ImVec2 uvMax = ImVec2(uvMaxX, uvMaxY);
        THIS->AddImage((ImTextureID)(uintptr_t)textureID, pMin, pMax, uvMin, uvMax);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImage__JFFFFFFFFI(JNIEnv* env, jobject object, jlong textureID, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jfloat uvMinX, jfloat uvMinY, jfloat uvMaxX, jfloat uvMaxY, jint col) {

//@line:1065

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        ImVec2 uvMin = ImVec2(uvMinX, uvMinY);
        ImVec2 uvMax = ImVec2(uvMaxX, uvMaxY);
        THIS->AddImage((ImTextureID)(uintptr_t)textureID, pMin, pMax, uvMin, uvMax, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImageQuad__JFFFFFFFF(JNIEnv* env, jobject object, jlong textureID, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y) {

//@line:1121

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        THIS->AddImageQuad((ImTextureID)(uintptr_t)textureID, p1, p2, p3, p4);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImageQuad__JFFFFFFFFFF(JNIEnv* env, jobject object, jlong textureID, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y, jfloat uv1X, jfloat uv1Y) {

//@line:1129

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        THIS->AddImageQuad((ImTextureID)(uintptr_t)textureID, p1, p2, p3, p4, uv1);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImageQuad__JFFFFFFFFFFFF(JNIEnv* env, jobject object, jlong textureID, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y, jfloat uv1X, jfloat uv1Y, jfloat uv2X, jfloat uv2Y) {

//@line:1138

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec2 uv2 = ImVec2(uv2X, uv2Y);
        THIS->AddImageQuad((ImTextureID)(uintptr_t)textureID, p1, p2, p3, p4, uv1, uv2);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImageQuad__JFFFFFFFFFFFFFF(JNIEnv* env, jobject object, jlong textureID, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y, jfloat uv1X, jfloat uv1Y, jfloat uv2X, jfloat uv2Y, jfloat uv3X, jfloat uv3Y) {

//@line:1148

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec2 uv2 = ImVec2(uv2X, uv2Y);
        ImVec2 uv3 = ImVec2(uv3X, uv3Y);
        THIS->AddImageQuad((ImTextureID)(uintptr_t)textureID, p1, p2, p3, p4, uv1, uv2, uv3);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImageQuad__JFFFFFFFFFFFFFFFF(JNIEnv* env, jobject object, jlong textureID, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y, jfloat uv1X, jfloat uv1Y, jfloat uv2X, jfloat uv2Y, jfloat uv3X, jfloat uv3Y, jfloat uv4X, jfloat uv4Y) {

//@line:1159

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec2 uv2 = ImVec2(uv2X, uv2Y);
        ImVec2 uv3 = ImVec2(uv3X, uv3Y);
        ImVec2 uv4 = ImVec2(uv4X, uv4Y);
        THIS->AddImageQuad((ImTextureID)(uintptr_t)textureID, p1, p2, p3, p4, uv1, uv2, uv3, uv4);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImageQuad__JFFFFFFFFFFFFFFFFI(JNIEnv* env, jobject object, jlong textureID, jfloat p1X, jfloat p1Y, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y, jfloat uv1X, jfloat uv1Y, jfloat uv2X, jfloat uv2Y, jfloat uv3X, jfloat uv3Y, jfloat uv4X, jfloat uv4Y, jint col) {

//@line:1171

        ImVec2 p1 = ImVec2(p1X, p1Y);
        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec2 uv2 = ImVec2(uv2X, uv2Y);
        ImVec2 uv3 = ImVec2(uv3X, uv3Y);
        ImVec2 uv4 = ImVec2(uv4X, uv4Y);
        THIS->AddImageQuad((ImTextureID)(uintptr_t)textureID, p1, p2, p3, p4, uv1, uv2, uv3, uv4, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImageRounded__JFFFFFFFFIF(JNIEnv* env, jobject object, jlong textureID, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jfloat uvMinX, jfloat uvMinY, jfloat uvMaxX, jfloat uvMaxY, jint col, jfloat rounding) {

//@line:1199

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        ImVec2 uvMin = ImVec2(uvMinX, uvMinY);
        ImVec2 uvMax = ImVec2(uvMaxX, uvMaxY);
        THIS->AddImageRounded((ImTextureID)(uintptr_t)textureID, pMin, pMax, uvMin, uvMax, col, rounding);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nAddImageRounded__JFFFFFFFFIFI(JNIEnv* env, jobject object, jlong textureID, jfloat pMinX, jfloat pMinY, jfloat pMaxX, jfloat pMaxY, jfloat uvMinX, jfloat uvMinY, jfloat uvMaxX, jfloat uvMaxY, jint col, jfloat rounding, jint imDrawFlags) {

//@line:1207

        ImVec2 pMin = ImVec2(pMinX, pMinY);
        ImVec2 pMax = ImVec2(pMaxX, pMaxY);
        ImVec2 uvMin = ImVec2(uvMinX, uvMinY);
        ImVec2 uvMax = ImVec2(uvMaxX, uvMaxY);
        THIS->AddImageRounded((ImTextureID)(uintptr_t)textureID, pMin, pMax, uvMin, uvMax, col, rounding, imDrawFlags);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathClear(JNIEnv* env, jobject object) {


//@line:1223

        THIS->PathClear();
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathLineTo(JNIEnv* env, jobject object, jfloat posX, jfloat posY) {

//@line:1235

        ImVec2 pos = ImVec2(posX, posY);
        THIS->PathLineTo(pos);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathLineToMergeDuplicate(JNIEnv* env, jobject object, jfloat posX, jfloat posY) {

//@line:1248

        ImVec2 pos = ImVec2(posX, posY);
        THIS->PathLineToMergeDuplicate(pos);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathFillConvex(JNIEnv* env, jobject object, jint col) {


//@line:1260

        THIS->PathFillConvex(col);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathFillConcave(JNIEnv* env, jobject object, jint col) {


//@line:1268

        THIS->PathFillConcave(col);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathStroke__I(JNIEnv* env, jobject object, jint col) {


//@line:1288

        THIS->PathStroke(col);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathStroke__II(JNIEnv* env, jobject object, jint col, jint imDrawFlags) {


//@line:1292

        THIS->PathStroke(col, imDrawFlags);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathStroke__IIF(JNIEnv* env, jobject object, jint col, jint imDrawFlags, jfloat thickness) {


//@line:1296

        THIS->PathStroke(col, imDrawFlags, thickness);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathStroke__IF(JNIEnv* env, jobject object, jint col, jfloat thickness) {


//@line:1300

        THIS->PathStroke(col, 0, thickness);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathArcTo__FFFFF(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jfloat aMin, jfloat aMax) {

//@line:1320

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->PathArcTo(center, radius, aMin, aMax);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathArcTo__FFFFFI(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jfloat aMin, jfloat aMax, jint numSegments) {

//@line:1325

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->PathArcTo(center, radius, aMin, aMax, numSegments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathArcToFast(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radius, jint aMinOf12, jint aMaxOf12) {

//@line:1344

        ImVec2 center = ImVec2(centerX, centerY);
        THIS->PathArcToFast(center, radius, aMinOf12, aMaxOf12);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathEllipticalArcTo__FFFFFFF(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radiusX, jfloat radiusY, jfloat rot, jfloat aMin, jfloat aMax) {

//@line:1365

        ImVec2 center = ImVec2(centerX, centerY);
        ImVec2 radius = ImVec2(radiusX, radiusY);
        THIS->PathEllipticalArcTo(center, radius, rot, aMin, aMax);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathEllipticalArcTo__FFFFFFFI(JNIEnv* env, jobject object, jfloat centerX, jfloat centerY, jfloat radiusX, jfloat radiusY, jfloat rot, jfloat aMin, jfloat aMax, jint numSegments) {

//@line:1371

        ImVec2 center = ImVec2(centerX, centerY);
        ImVec2 radius = ImVec2(radiusX, radiusY);
        THIS->PathEllipticalArcTo(center, radius, rot, aMin, aMax, numSegments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathBezierCubicCurveTo__FFFFFF(JNIEnv* env, jobject object, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y) {

//@line:1405

        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        THIS->PathBezierCubicCurveTo(p2, p3, p4);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathBezierCubicCurveTo__FFFFFFI(JNIEnv* env, jobject object, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jfloat p4X, jfloat p4Y, jint numSegments) {

//@line:1412

        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        ImVec2 p4 = ImVec2(p4X, p4Y);
        THIS->PathBezierCubicCurveTo(p2, p3, p4, numSegments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathBezierQuadraticCurveTo__FFFF(JNIEnv* env, jobject object, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y) {

//@line:1447

        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        THIS->PathBezierQuadraticCurveTo(p2, p3);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathBezierQuadraticCurveTo__FFFFI(JNIEnv* env, jobject object, jfloat p2X, jfloat p2Y, jfloat p3X, jfloat p3Y, jint numSegments) {

//@line:1453

        ImVec2 p2 = ImVec2(p2X, p2Y);
        ImVec2 p3 = ImVec2(p3X, p3Y);
        THIS->PathBezierQuadraticCurveTo(p2, p3, numSegments);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathRect__FFFF(JNIEnv* env, jobject object, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY) {

//@line:1491

        ImVec2 rectMin = ImVec2(rectMinX, rectMinY);
        ImVec2 rectMax = ImVec2(rectMaxX, rectMaxY);
        THIS->PathRect(rectMin, rectMax);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathRect__FFFFF(JNIEnv* env, jobject object, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY, jfloat rounding) {

//@line:1497

        ImVec2 rectMin = ImVec2(rectMinX, rectMinY);
        ImVec2 rectMax = ImVec2(rectMaxX, rectMaxY);
        THIS->PathRect(rectMin, rectMax, rounding);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathRect__FFFFFI(JNIEnv* env, jobject object, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY, jfloat rounding, jint imDrawFlags) {

//@line:1503

        ImVec2 rectMin = ImVec2(rectMinX, rectMinY);
        ImVec2 rectMax = ImVec2(rectMaxX, rectMaxY);
        THIS->PathRect(rectMin, rectMax, rounding, imDrawFlags);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPathRect__FFFFI(JNIEnv* env, jobject object, jfloat rectMinX, jfloat rectMinY, jfloat rectMaxX, jfloat rectMaxY, jint imDrawFlags) {

//@line:1509

        ImVec2 rectMin = ImVec2(rectMinX, rectMinY);
        ImVec2 rectMax = ImVec2(rectMaxX, rectMaxY);
        THIS->PathRect(rectMin, rectMax, 0.0f, imDrawFlags);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nChannelsSplit(JNIEnv* env, jobject object, jint count) {


//@line:1525

        THIS->ChannelsSplit(count);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nChannelsMerge(JNIEnv* env, jobject object) {


//@line:1533

        THIS->ChannelsMerge();
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nChannelsSetCurrent(JNIEnv* env, jobject object, jint n) {


//@line:1541

        THIS->ChannelsSetCurrent(n);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPrimReserve(JNIEnv* env, jobject object, jint idxCount, jint vtxCount) {


//@line:1553

        THIS->PrimReserve(idxCount, vtxCount);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPrimUnreserve(JNIEnv* env, jobject object, jint idxCount, jint vtxCount) {


//@line:1561

        THIS->PrimUnreserve(idxCount, vtxCount);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPrimRect(JNIEnv* env, jobject object, jfloat aX, jfloat aY, jfloat bX, jfloat bY, jint col) {

//@line:1573

        ImVec2 a = ImVec2(aX, aY);
        ImVec2 b = ImVec2(bX, bY);
        THIS->PrimRect(a, b, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPrimRectUV(JNIEnv* env, jobject object, jfloat aX, jfloat aY, jfloat bX, jfloat bY, jfloat uvAX, jfloat uvAY, jfloat uvBX, jfloat uvBY, jint col) {

//@line:1587

        ImVec2 a = ImVec2(aX, aY);
        ImVec2 b = ImVec2(bX, bY);
        ImVec2 uvA = ImVec2(uvAX, uvAY);
        ImVec2 uvB = ImVec2(uvBX, uvBY);
        THIS->PrimRectUV(a, b, uvA, uvB, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPrimQuadUV(JNIEnv* env, jobject object, jfloat aX, jfloat aY, jfloat bX, jfloat bY, jfloat cX, jfloat cY, jfloat dX, jfloat dY, jfloat uvAX, jfloat uvAY, jfloat uvBX, jfloat uvBY, jfloat uvCX, jfloat uvCY, jfloat uvDX, jfloat uvDY, jint col) {

//@line:1603

        ImVec2 a = ImVec2(aX, aY);
        ImVec2 b = ImVec2(bX, bY);
        ImVec2 c = ImVec2(cX, cY);
        ImVec2 d = ImVec2(dX, dY);
        ImVec2 uvA = ImVec2(uvAX, uvAY);
        ImVec2 uvB = ImVec2(uvBX, uvBY);
        ImVec2 uvC = ImVec2(uvCX, uvCY);
        ImVec2 uvD = ImVec2(uvDX, uvDY);
        THIS->PrimQuadUV(a, b, c, d, uvA, uvB, uvC, uvD, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPrimWriteVtx(JNIEnv* env, jobject object, jfloat posX, jfloat posY, jfloat uvX, jfloat uvY, jint col) {

//@line:1623

        ImVec2 pos = ImVec2(posX, posY);
        ImVec2 uv = ImVec2(uvX, uvY);
        THIS->PrimWriteVtx(pos, uv, col);
    
}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPrimWriteIdx(JNIEnv* env, jobject object, jint idx) {


//@line:1633

        THIS->PrimWriteIdx((ImDrawIdx)idx);
    

}

JNIEXPORT void JNICALL Java_imgui_ImDrawList_nPrimVtx(JNIEnv* env, jobject object, jfloat posX, jfloat posY, jfloat uvX, jfloat uvY, jint col) {

//@line:1645

        ImVec2 pos = ImVec2(posX, posY);
        ImVec2 uv = ImVec2(uvX, uvY);
        THIS->PrimVtx(pos, uv, col);
    
}


//@line:1651

        #undef THIS
     