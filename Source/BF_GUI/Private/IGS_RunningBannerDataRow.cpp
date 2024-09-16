#include "IGS_RunningBannerDataRow.h"
#include "Styling/SlateColor.h"

FIGS_RunningBannerDataRow::FIGS_RunningBannerDataRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Tag, 0)) = NAME_None;
    (*this).Separator = FText::GetEmpty();
    (*this).Headline = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).BadgeText = FText::GetEmpty();
    auto gen2 = TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor");
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).HeadlineColor, 0)).R = 1.000000000e+00f;
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).HeadlineColor, 0)).G = 0.000000000e+00f;
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).HeadlineColor, 0)).B = 1.000000000e+00f;
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).HeadlineColor, 0)).A = 1.000000000e+00f;
    auto gen3 = TBaseStructure<FSlateColor>::Get()->FindPropertyByName("ColorUseRule");
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ESlateColorStylingMode::Type>>(&(*this).HeadlineColor, 0)) = ESlateColorStylingMode::UseColor_Specified;
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeBackgroundColor, 0)).R = 1.000000000e+00f;
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeBackgroundColor, 0)).G = 0.000000000e+00f;
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeBackgroundColor, 0)).B = 1.000000000e+00f;
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeBackgroundColor, 0)).A = 1.000000000e+00f;
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ESlateColorStylingMode::Type>>(&(*this).BadgeBackgroundColor, 0)) = ESlateColorStylingMode::UseColor_Specified;
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeTextColor, 0)).R = 1.000000000e+00f;
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeTextColor, 0)).G = 0.000000000e+00f;
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeTextColor, 0)).B = 1.000000000e+00f;
    (*gen2->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeTextColor, 0)).A = 1.000000000e+00f;
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ESlateColorStylingMode::Type>>(&(*this).BadgeTextColor, 0)) = ESlateColorStylingMode::UseColor_Specified;
}
