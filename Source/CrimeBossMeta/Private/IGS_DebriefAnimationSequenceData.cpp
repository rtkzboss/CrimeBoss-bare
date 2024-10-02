#include "IGS_DebriefAnimationSequenceData.h"

FIGS_DebriefAnimationSequenceData::FIGS_DebriefAnimationSequenceData() {
    (*this).ID = FGameplayTag();
    (*this).Value = 0;
    (*this).Duration = 1.000000000e+00f;
    (*this).BadgeText = FText::GetEmpty();
    (*this).BadgeTextColor = FSlateColor(FLinearColor(1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    (*this).BadgeColor = FLinearColor(0.000000000e+00f, 0.000000000e+00f, 0.000000000e+00f, 0.000000000e+00f);
}
