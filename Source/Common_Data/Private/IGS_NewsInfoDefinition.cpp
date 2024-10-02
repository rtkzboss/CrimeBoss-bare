#include "IGS_NewsInfoDefinition.h"

FIGS_NewsInfoDefinition::FIGS_NewsInfoDefinition() {
    (*this).itemTag = FGameplayTag();
    (*this).EntitlementTag = FGameplayTag();
    (*this).Title = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).BinkAlpha = nullptr;
    (*this).BinkRGB = nullptr;
    (*this).RGBVideo = FSoftObjectPath();
    (*this).VideoMask = FSoftObjectPath();
    (*this).ShowInMenu = false;
    (*this).ShowInMenuTag = FGameplayTag();
    (*this).ShowAlsoWhenEventIsActive = true;
    (*this).EventID = NAME_None;
}
