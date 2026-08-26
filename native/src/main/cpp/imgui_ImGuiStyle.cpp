#include <imgui_ImGuiStyle.h>

//@line:24

        #include "_common.h"
        #define THIS ((ImGuiStyle*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_ImGuiStyle_nCreate(JNIEnv* env, jobject object) {


//@line:29

        return (uintptr_t)(new ImGuiStyle());
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetAlpha(JNIEnv* env, jobject object) {


//@line:47

        return THIS->Alpha;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetAlpha(JNIEnv* env, jobject object, jfloat value) {


//@line:51

        THIS->Alpha = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDisabledAlpha(JNIEnv* env, jobject object) {


//@line:69

        return THIS->DisabledAlpha;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetDisabledAlpha(JNIEnv* env, jobject object, jfloat value) {


//@line:73

        THIS->DisabledAlpha = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetWindowPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:121

        Jni::ImVec2Cpy(env, THIS->WindowPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowPaddingX(JNIEnv* env, jobject object) {


//@line:125

        return THIS->WindowPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowPaddingY(JNIEnv* env, jobject object) {


//@line:129

        return THIS->WindowPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:133

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->WindowPadding = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowRounding(JNIEnv* env, jobject object) {


//@line:154

        return THIS->WindowRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:158

        THIS->WindowRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowBorderSize(JNIEnv* env, jobject object) {


//@line:176

        return THIS->WindowBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:180

        THIS->WindowBorderSize = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetWindowMinSize(JNIEnv* env, jobject object, jobject dst) {


//@line:228

        Jni::ImVec2Cpy(env, THIS->WindowMinSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowMinSizeX(JNIEnv* env, jobject object) {


//@line:232

        return THIS->WindowMinSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowMinSizeY(JNIEnv* env, jobject object) {


//@line:236

        return THIS->WindowMinSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowMinSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:240

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->WindowMinSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetWindowTitleAlign(JNIEnv* env, jobject object, jobject dst) {


//@line:289

        Jni::ImVec2Cpy(env, THIS->WindowTitleAlign, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowTitleAlignX(JNIEnv* env, jobject object) {


//@line:293

        return THIS->WindowTitleAlign.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowTitleAlignY(JNIEnv* env, jobject object) {


//@line:297

        return THIS->WindowTitleAlign.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowTitleAlign(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:301

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->WindowTitleAlign = value;
    
}

JNIEXPORT jint JNICALL Java_imgui_ImGuiStyle_nGetWindowMenuButtonPosition(JNIEnv* env, jobject object) {


//@line:320

        return THIS->WindowMenuButtonPosition;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowMenuButtonPosition(JNIEnv* env, jobject object, jint value) {


//@line:324

        THIS->WindowMenuButtonPosition = static_cast<ImGuiDir>(value);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetChildRounding(JNIEnv* env, jobject object) {


//@line:342

        return THIS->ChildRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetChildRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:346

        THIS->ChildRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetChildBorderSize(JNIEnv* env, jobject object) {


//@line:364

        return THIS->ChildBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetChildBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:368

        THIS->ChildBorderSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetPopupRounding(JNIEnv* env, jobject object) {


//@line:386

        return THIS->PopupRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetPopupRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:390

        THIS->PopupRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetPopupBorderSize(JNIEnv* env, jobject object) {


//@line:408

        return THIS->PopupBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetPopupBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:412

        THIS->PopupBorderSize = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetFramePadding(JNIEnv* env, jobject object, jobject dst) {


//@line:460

        Jni::ImVec2Cpy(env, THIS->FramePadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetFramePaddingX(JNIEnv* env, jobject object) {


//@line:464

        return THIS->FramePadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetFramePaddingY(JNIEnv* env, jobject object) {


//@line:468

        return THIS->FramePadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetFramePadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:472

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->FramePadding = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetFrameRounding(JNIEnv* env, jobject object) {


//@line:491

        return THIS->FrameRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetFrameRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:495

        THIS->FrameRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetFrameBorderSize(JNIEnv* env, jobject object) {


//@line:513

        return THIS->FrameBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetFrameBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:517

        THIS->FrameBorderSize = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetItemSpacing(JNIEnv* env, jobject object, jobject dst) {


//@line:565

        Jni::ImVec2Cpy(env, THIS->ItemSpacing, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetItemSpacingX(JNIEnv* env, jobject object) {


//@line:569

        return THIS->ItemSpacing.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetItemSpacingY(JNIEnv* env, jobject object) {


//@line:573

        return THIS->ItemSpacing.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetItemSpacing(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:577

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->ItemSpacing = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetItemInnerSpacing(JNIEnv* env, jobject object, jobject dst) {


//@line:626

        Jni::ImVec2Cpy(env, THIS->ItemInnerSpacing, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetItemInnerSpacingX(JNIEnv* env, jobject object) {


//@line:630

        return THIS->ItemInnerSpacing.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetItemInnerSpacingY(JNIEnv* env, jobject object) {


//@line:634

        return THIS->ItemInnerSpacing.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetItemInnerSpacing(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:638

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->ItemInnerSpacing = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetCellPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:687

        Jni::ImVec2Cpy(env, THIS->CellPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetCellPaddingX(JNIEnv* env, jobject object) {


//@line:691

        return THIS->CellPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetCellPaddingY(JNIEnv* env, jobject object) {


//@line:695

        return THIS->CellPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetCellPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:699

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->CellPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetTouchExtraPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:754

        Jni::ImVec2Cpy(env, THIS->TouchExtraPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTouchExtraPaddingX(JNIEnv* env, jobject object) {


//@line:758

        return THIS->TouchExtraPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTouchExtraPaddingY(JNIEnv* env, jobject object) {


//@line:762

        return THIS->TouchExtraPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTouchExtraPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:766

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->TouchExtraPadding = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetIndentSpacing(JNIEnv* env, jobject object) {


//@line:785

        return THIS->IndentSpacing;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetIndentSpacing(JNIEnv* env, jobject object, jfloat value) {


//@line:789

        THIS->IndentSpacing = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetColumnsMinSpacing(JNIEnv* env, jobject object) {


//@line:807

        return THIS->ColumnsMinSpacing;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetColumnsMinSpacing(JNIEnv* env, jobject object, jfloat value) {


//@line:811

        THIS->ColumnsMinSpacing = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetScrollbarSize(JNIEnv* env, jobject object) {


//@line:829

        return THIS->ScrollbarSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetScrollbarSize(JNIEnv* env, jobject object, jfloat value) {


//@line:833

        THIS->ScrollbarSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetScrollbarRounding(JNIEnv* env, jobject object) {


//@line:851

        return THIS->ScrollbarRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetScrollbarRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:855

        THIS->ScrollbarRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetGrabMinSize(JNIEnv* env, jobject object) {


//@line:873

        return THIS->GrabMinSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetGrabMinSize(JNIEnv* env, jobject object, jfloat value) {


//@line:877

        THIS->GrabMinSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetGrabRounding(JNIEnv* env, jobject object) {


//@line:895

        return THIS->GrabRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetGrabRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:899

        THIS->GrabRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetLogSliderDeadzone(JNIEnv* env, jobject object) {


//@line:917

        return THIS->LogSliderDeadzone;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetLogSliderDeadzone(JNIEnv* env, jobject object, jfloat value) {


//@line:921

        THIS->LogSliderDeadzone = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTabRounding(JNIEnv* env, jobject object) {


//@line:939

        return THIS->TabRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTabRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:943

        THIS->TabRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTabBorderSize(JNIEnv* env, jobject object) {


//@line:961

        return THIS->TabBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTabBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:965

        THIS->TabBorderSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTabMinWidthForCloseButton(JNIEnv* env, jobject object) {


//@line:985

        return THIS->TabMinWidthForCloseButton;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTabMinWidthForCloseButton(JNIEnv* env, jobject object, jfloat value) {


//@line:989

        THIS->TabMinWidthForCloseButton = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiStyle_nGetColorButtonPosition(JNIEnv* env, jobject object) {


//@line:1007

        return THIS->ColorButtonPosition;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetColorButtonPosition(JNIEnv* env, jobject object, jint value) {


//@line:1011

        THIS->ColorButtonPosition = static_cast<ImGuiDir>(value);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetButtonTextAlign(JNIEnv* env, jobject object, jobject dst) {


//@line:1059

        Jni::ImVec2Cpy(env, THIS->ButtonTextAlign, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetButtonTextAlignX(JNIEnv* env, jobject object) {


//@line:1063

        return THIS->ButtonTextAlign.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetButtonTextAlignY(JNIEnv* env, jobject object) {


//@line:1067

        return THIS->ButtonTextAlign.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetButtonTextAlign(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1071

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->ButtonTextAlign = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetSelectableTextAlign(JNIEnv* env, jobject object, jobject dst) {


//@line:1126

        Jni::ImVec2Cpy(env, THIS->SelectableTextAlign, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSelectableTextAlignX(JNIEnv* env, jobject object) {


//@line:1130

        return THIS->SelectableTextAlign.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSelectableTextAlignY(JNIEnv* env, jobject object) {


//@line:1134

        return THIS->SelectableTextAlign.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetSelectableTextAlign(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1138

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->SelectableTextAlign = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextBorderSize(JNIEnv* env, jobject object) {


//@line:1157

        return THIS->SeparatorTextBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetSeparatorTextBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:1161

        THIS->SeparatorTextBorderSize = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextAlign(JNIEnv* env, jobject object, jobject dst) {


//@line:1209

        Jni::ImVec2Cpy(env, THIS->SeparatorTextAlign, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextAlignX(JNIEnv* env, jobject object) {


//@line:1213

        return THIS->SeparatorTextAlign.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextAlignY(JNIEnv* env, jobject object) {


//@line:1217

        return THIS->SeparatorTextAlign.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetSeparatorTextAlign(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1221

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->SeparatorTextAlign = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:1270

        Jni::ImVec2Cpy(env, THIS->SeparatorTextPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextPaddingX(JNIEnv* env, jobject object) {


//@line:1274

        return THIS->SeparatorTextPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextPaddingY(JNIEnv* env, jobject object) {


//@line:1278

        return THIS->SeparatorTextPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetSeparatorTextPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1282

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->SeparatorTextPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetDisplayWindowPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:1331

        Jni::ImVec2Cpy(env, THIS->DisplayWindowPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDisplayWindowPaddingX(JNIEnv* env, jobject object) {


//@line:1335

        return THIS->DisplayWindowPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDisplayWindowPaddingY(JNIEnv* env, jobject object) {


//@line:1339

        return THIS->DisplayWindowPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetDisplayWindowPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1343

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->DisplayWindowPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetDisplaySafeAreaPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:1398

        Jni::ImVec2Cpy(env, THIS->DisplaySafeAreaPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDisplaySafeAreaPaddingX(JNIEnv* env, jobject object) {


//@line:1402

        return THIS->DisplaySafeAreaPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDisplaySafeAreaPaddingY(JNIEnv* env, jobject object) {


//@line:1406

        return THIS->DisplaySafeAreaPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetDisplaySafeAreaPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1410

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->DisplaySafeAreaPadding = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDockingSeparatorSize(JNIEnv* env, jobject object) {


//@line:1429

        return THIS->DockingSeparatorSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetDockingSeparatorSize(JNIEnv* env, jobject object, jfloat value) {


//@line:1433

        THIS->DockingSeparatorSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetMouseCursorScale(JNIEnv* env, jobject object) {


//@line:1451

        return THIS->MouseCursorScale;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetMouseCursorScale(JNIEnv* env, jobject object, jfloat value) {


//@line:1455

        THIS->MouseCursorScale = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiStyle_nGetAntiAliasedLines(JNIEnv* env, jobject object) {


//@line:1473

        return THIS->AntiAliasedLines;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetAntiAliasedLines(JNIEnv* env, jobject object, jboolean value) {


//@line:1477

        THIS->AntiAliasedLines = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiStyle_nGetAntiAliasedLinesUseTex(JNIEnv* env, jobject object) {


//@line:1499

        return THIS->AntiAliasedLinesUseTex;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetAntiAliasedLinesUseTex(JNIEnv* env, jobject object, jboolean value) {


//@line:1503

        THIS->AntiAliasedLinesUseTex = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiStyle_nGetAntiAliasedFill(JNIEnv* env, jobject object) {


//@line:1523

        return THIS->AntiAliasedFill;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetAntiAliasedFill(JNIEnv* env, jobject object, jboolean value) {


//@line:1527

        THIS->AntiAliasedFill = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetCurveTessellationTol(JNIEnv* env, jobject object) {


//@line:1547

        return THIS->CurveTessellationTol;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetCurveTessellationTol(JNIEnv* env, jobject object, jfloat value) {


//@line:1551

        THIS->CurveTessellationTol = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetCircleTessellationMaxError(JNIEnv* env, jobject object) {


//@line:1571

        return THIS->CircleTessellationMaxError;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetCircleTessellationMaxError(JNIEnv* env, jobject object, jfloat value) {


//@line:1575

        THIS->CircleTessellationMaxError = value;
    

}

JNIEXPORT jobjectArray JNICALL Java_imgui_ImGuiStyle_nGetColors(JNIEnv* env, jobject object) {


//@line:1587

        return Jni::NewImVec4Array(env, THIS->Colors, ImGuiCol_COUNT);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetColors(JNIEnv* env, jobject object, jobjectArray value) {


//@line:1591

        Jni::ImVec4ArrayCpy(env, value, THIS->Colors, ImGuiCol_COUNT);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_getColor(JNIEnv* env, jobject object, jint col, jobject dst) {


//@line:1601

        Jni::ImVec4Cpy(env, THIS->Colors[col], dst);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_setColor__IFFFF(JNIEnv* env, jobject object, jint col, jfloat r, jfloat g, jfloat b, jfloat a) {


//@line:1605

        THIS->Colors[col] = ImColor((float)r, (float)g, (float)b, (float)a);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_setColor__IIIII(JNIEnv* env, jobject object, jint col, jint r, jint g, jint b, jint a) {


//@line:1609

        THIS->Colors[col] = ImColor((int)r, (int)g, (int)b, (int)a);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_setColor__II(JNIEnv* env, jobject object, jint col, jint value) {


//@line:1613

        THIS->Colors[col] = ImColor(value);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetHoverStationaryDelay(JNIEnv* env, jobject object) {


//@line:1634

        return THIS->HoverStationaryDelay;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetHoverStationaryDelay(JNIEnv* env, jobject object, jfloat value) {


//@line:1638

        THIS->HoverStationaryDelay = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetHoverDelayShort(JNIEnv* env, jobject object) {


//@line:1656

        return THIS->HoverDelayShort;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetHoverDelayShort(JNIEnv* env, jobject object, jfloat value) {


//@line:1660

        THIS->HoverDelayShort = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetHoverDelayNormal(JNIEnv* env, jobject object) {


//@line:1678

        return THIS->HoverDelayNormal;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetHoverDelayNormal(JNIEnv* env, jobject object, jfloat value) {


//@line:1682

        THIS->HoverDelayNormal = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiStyle_nGetHoverFlagsForTooltipMouse(JNIEnv* env, jobject object) {


//@line:1700

        return THIS->HoverFlagsForTooltipMouse;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetHoverFlagsForTooltipMouse(JNIEnv* env, jobject object, jint value) {


//@line:1704

        THIS->HoverFlagsForTooltipMouse = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiStyle_nGetHoverFlagsForTooltipNav(JNIEnv* env, jobject object) {


//@line:1722

        return THIS->HoverFlagsForTooltipNav;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetHoverFlagsForTooltipNav(JNIEnv* env, jobject object, jint value) {


//@line:1726

        THIS->HoverFlagsForTooltipNav = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nScaleAllSizes(JNIEnv* env, jobject object, jfloat scaleFactor) {


//@line:1734

        THIS->ScaleAllSizes(scaleFactor);
    

}


//@line:1738

        #undef THIS
     