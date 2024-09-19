#include "IGS_PerkData.h"
#include "GameplayTagContainer.h"

FIGS_PerkData::FIGS_PerkData() {
    (*this).TagID = FGameplayTag();
    (*this).Name = FText::FromString(TEXT("None"));
    (*this).Description = FText::FromString(TEXT("None"));
    (*this).Image = FSoftObjectPath();
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).PerkType = EIGS_PerkType::PT_MetaPerk;
    (*this).PerkClass = EIGS_PerkClass::PC_Generic;
    (*this).PerkCategory = 0;
    (*this).PerkModeUsage = 0;
    (*this).AllowedHeistersOverride = TArray<EIGS_CharacterID>{};
    (*this).ForbiddenHeistersLevel = 0;
    (*this).MutuallyExclusiveTag = FGameplayTag();
    (*this).bAllowedForGeneration = false;
    (*this).SiblingID = nullptr;
    (*this).PerkLevel = 1;
    (*this).SwapPerkIDAfterPromotion = nullptr;
    (*this).SwapPerkTagAfterPromotion = FGameplayTag();
    (*this).UnlockProperties.IsUnlockable = false;
    (*this).UnlockProperties.RequiredTags = FGameplayTagContainer();
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).UnlockProperties.UnlockCoverImage = FSoftObjectPath();
}
