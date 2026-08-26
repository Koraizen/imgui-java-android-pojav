#include <imgui_ImGuiTextFilter.h>

//@line:26

        #include "_common.h"
        #define THIS ((ImGuiTextFilter*)STRUCT_PTR)
     static inline jlong wrapped_Java_imgui_ImGuiTextFilter_nCreate
(JNIEnv* env, jobject object, jstring obj_defaultFilter, char* defaultFilter) {

//@line:31

        return (uintptr_t)(new ImGuiTextFilter(defaultFilter));
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImGuiTextFilter_nCreate(JNIEnv* env, jobject object, jstring obj_defaultFilter) {
	char* defaultFilter = (char*)env->GetStringUTFChars(obj_defaultFilter, 0);

	jlong JNI_returnValue = wrapped_Java_imgui_ImGuiTextFilter_nCreate(env, object, obj_defaultFilter, defaultFilter);

	env->ReleaseStringUTFChars(obj_defaultFilter, defaultFilter);

	return JNI_returnValue;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiTextFilter_nDraw__(JNIEnv* env, jobject object) {


//@line:51

        return THIS->Draw();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiTextFilter_nDraw__Ljava_lang_String_2(JNIEnv* env, jobject object, jstring obj_label) {

//@line:55

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = THIS->Draw(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiTextFilter_nDraw__Ljava_lang_String_2F(JNIEnv* env, jobject object, jstring obj_label, jfloat width) {

//@line:62

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = THIS->Draw(label, width);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiTextFilter_nDraw__F(JNIEnv* env, jobject object, jfloat width) {


//@line:69

        return THIS->Draw("Filter (inc,-exc)", width);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiTextFilter_nPassFilter(JNIEnv* env, jobject object, jstring obj_text) {

//@line:77

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto _result = THIS->PassFilter(text, NULL);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiTextFilter_nBuild(JNIEnv* env, jobject object) {


//@line:88

        THIS->Build();
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiTextFilter_nClear(JNIEnv* env, jobject object) {


//@line:96

        THIS->Clear();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiTextFilter_nIsActive(JNIEnv* env, jobject object) {


//@line:104

        return THIS->IsActive();
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImGuiTextFilter_getInputBuffer(JNIEnv* env, jobject object) {


//@line:108

        return env->NewStringUTF(THIS->InputBuf);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiTextFilter_setInputBuffer(JNIEnv* env, jobject object, jstring obj_inputBuf) {
	char* inputBuf = (char*)env->GetStringUTFChars(obj_inputBuf, 0);


//@line:112

        strncpy(THIS->InputBuf, inputBuf, sizeof(THIS->InputBuf));
    
	env->ReleaseStringUTFChars(obj_inputBuf, inputBuf);

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiTextFilter_nGetCountGrep(JNIEnv* env, jobject object) {


//@line:124

        return THIS->CountGrep;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiTextFilter_nSetCountGrep(JNIEnv* env, jobject object, jint value) {


//@line:128

        THIS->CountGrep = value;
    

}


//@line:132

        #undef THIS
     