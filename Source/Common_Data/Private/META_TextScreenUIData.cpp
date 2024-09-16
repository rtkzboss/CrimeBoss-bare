#include "META_TextScreenUIData.h"

FMETA_TextScreenUIData::FMETA_TextScreenUIData() {
    (*this).ScreenText = FText::GetEmpty();
    (*this).SecondaryText = FText::GetEmpty();
    (*this).Duration = 0.000000000e+00f;
    (*this).GraphRef = nullptr;
    (*this).OriginalID = 0;
    (*this).NextNodeID = 0;
}
