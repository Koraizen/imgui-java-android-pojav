#include <imgui_ImGuiTableColumnSortSpecs.h>

//@line:14

        #include "_common.h"
        #define THIS ((ImGuiTableColumnSortSpecs*)STRUCT_PTR)
     JNIEXPORT jint JNICALL Java_imgui_ImGuiTableColumnSortSpecs_nGetColumnUserID(JNIEnv* env, jobject object) {


//@line:26

        return THIS->ColumnUserID;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiTableColumnSortSpecs_nGetColumnIndex(JNIEnv* env, jobject object) {


//@line:37

        return THIS->ColumnIndex;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiTableColumnSortSpecs_nGetSortOrder(JNIEnv* env, jobject object) {


//@line:48

        return THIS->SortOrder;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiTableColumnSortSpecs_nGetSortDirection(JNIEnv* env, jobject object) {


//@line:59

        return THIS->SortDirection;
    

}


//@line:63

        #undef THIS
     