#include "IGS_RunningBannerDataRow.h"
#include "UObject/NoExportTypes.h"

FIGS_RunningBannerDataRow::FIGS_RunningBannerDataRow() {
    (*this).Tag = FGameplayTag();
    (*this).Separator = FText::GetEmpty();
    (*this).Headline = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).BadgeText = FText::GetEmpty();
    (*this).HeadlineColor = FSlateColor(FLinearColor(1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    (*this).BadgeBackgroundColor = FSlateColor(FLinearColor(1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    (*this).BadgeTextColor = FSlateColor(FLinearColor(1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
}
