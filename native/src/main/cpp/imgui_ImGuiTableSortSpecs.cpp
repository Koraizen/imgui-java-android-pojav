#include <imgui_ImGuiTableSortSpecs.h>

//@line:16

        #include "_common.h"
        #define THIS ((ImGuiTableSortSpecs*)STRUCT_PTR)
     JNIEXPORT jlongArray JNICALL Java_imgui_ImGuiTableSortSpecs_nGetSpecs(JNIEnv* env, jobject object) {


//@line:33

        const ImGuiTableColumnSortSpecs* specs = THIS->Specs;
        int specsCount = THIS->SpecsCount;
        jlong jBuf[specsCount];
        for (int i = 0; i < specsCount; i++) {
            jBuf[i] = (uintptr_t)specs;
            specs++;
        }
        jlongArray result = env->NewLongArray(specsCount);
        env->SetLongArrayRegion(result, 0, specsCount, jBuf);
        return result;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiTableSortSpecs_nGetSpecsCount(JNIEnv* env, jobject object) {


//@line:53

        return THIS->SpecsCount;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiTableSortSpecs_nGetSpecsDirty(JNIEnv* env, jobject object) {


//@line:71

        return THIS->SpecsDirty;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiTableSortSpecs_nSetSpecsDirty(JNIEnv* env, jobject object, jboolean value) {


//@line:75

        THIS->SpecsDirty = value;
    

}


//@line:79

        #undef THIS
     