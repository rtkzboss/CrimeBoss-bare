#include "BinkSubtitleItem.h"

FBinkSubtitleItem::FBinkSubtitleItem() {
    (*this).Character = FText::GetEmpty();
    (*this).Text = FText::GetEmpty();
    (*this).Time = 0.000000000e+00f;
}
