#include "IGS_NewsInfoDefinition.h"

FIGS_NewsInfoDefinition::FIGS_NewsInfoDefinition() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).itemTag, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*this).Title = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).BinkAlpha = nullptr;
    (*this).BinkRGB = nullptr;
    (*this).RGBVideo = FSoftObjectPath();
    (*this).VideoMask = FSoftObjectPath();
    (*this).ShowInMenu = false;
}
