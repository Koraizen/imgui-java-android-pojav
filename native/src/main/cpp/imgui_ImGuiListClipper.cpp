#include <imgui_ImGuiListClipper.h>

//@line:47

        #include "_common.h"
        #define THIS ((ImGuiListClipper*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_ImGuiListClipper_nCreate(JNIEnv* env, jobject object) {


//@line:52

        return (uintptr_t)(new ImGuiListClipper());
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImGuiListClipper_nGetCtx(JNIEnv* env, jobject object) {


//@line:73

        return (uintptr_t)THIS->Ctx;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiListClipper_nSetCtx(JNIEnv* env, jobject object, jlong value) {


//@line:77

        THIS->Ctx = reinterpret_cast<ImGuiContext*>(value);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiListClipper_nGetDisplayStart(JNIEnv* env, jobject object) {


//@line:89

        return THIS->DisplayStart;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiListClipper_nSetDisplayStart(JNIEnv* env, jobject object, jint value) {


//@line:93

        THIS->DisplayStart = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiListClipper_nGetDisplayEnd(JNIEnv* env, jobject object) {


//@line:105

        return THIS->DisplayEnd;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiListClipper_nSetDisplayEnd(JNIEnv* env, jobject object, jint value) {


//@line:109

        THIS->DisplayEnd = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiListClipper_nGetItemsCount(JNIEnv* env, jobject object) {


//@line:117

        return THIS->ItemsCount;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiListClipper_nGetItemsHeight(JNIEnv* env, jobject object) {


//@line:125

        return THIS->ItemsHeight;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiListClipper_nGetStartPosY(JNIEnv* env, jobject object) {


//@line:133

        return THIS->StartPosY;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiListClipper_nBegin__I(JNIEnv* env, jobject object, jint itemsCount) {


//@line:145

        THIS->Begin(itemsCount);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiListClipper_nBegin__IF(JNIEnv* env, jobject object, jint itemsCount, jfloat itemsHeight) {


//@line:149

        THIS->Begin(itemsCount, itemsHeight);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiListClipper_nEnd(JNIEnv* env, jobject object) {


//@line:160

        THIS->End();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiListClipper_nStep(JNIEnv* env, jobject object) {


//@line:171

        return THIS->Step();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiListClipper_nIncludeItemByIndex(JNIEnv* env, jobject object, jint itemIndex) {


//@line:183

        THIS->IncludeItemByIndex(itemIndex);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiListClipper_nIncludeItemsByIndex(JNIEnv* env, jobject object, jint itemBegin, jint itemEnd) {


//@line:198

        THIS->IncludeItemsByIndex(itemBegin, itemEnd);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiListClipper_nForEach(JNIEnv* env, jclass clazz, jint itemsCount, jint itemsHeight, jobject callback) {


//@line:233

        ImGuiListClipper clipper;
        clipper.Begin(itemsCount, itemsHeight);
        while (clipper.Step()) {
            for (int i = clipper.DisplayStart; i < clipper.DisplayEnd; i++) {
                Jni::CallImListClipperCallback(env, callback, i);
            }
        }
    

}


//@line:243

        #undef THIS
     