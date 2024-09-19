#include "IGS_PerksTableRow.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_PerkClass.h"
#include "EIGS_PerkType.h"

FIGS_PerksTableRow::FIGS_PerksTableRow() {
    (*this).ID = nullptr;
    (*this).TagID = FGameplayTag();
    (*this).Data.TagID = FGameplayTag();
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.Description = FText::FromString(TEXT("None"));
    (*this).Data.Image = FSoftObjectPath();
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*this).Data.PerkType = EIGS_PerkType::PT_MetaPerk;
    (*this).Data.PerkClass = EIGS_PerkClass::PC_Generic;
    (*this).Data.PerkCategory = 0;
    (*this).Data.PerkModeUsage = 0;
    (*this).Data.AllowedHeistersOverride = TArray<EIGS_CharacterID>{};
    (*this).Data.ForbiddenHeistersLevel = 0;
    (*this).Data.MutuallyExclusiveTag = FGameplayTag();
    (*this).Data.bAllowedForGeneration = false;
    (*this).Data.SiblingID = nullptr;
    (*this).Data.PerkLevel = 1;
    (*this).Data.SwapPerkIDAfterPromotion = nullptr;
    (*this).Data.SwapPerkTagAfterPromotion = FGameplayTag();
    (*this).Data.UnlockProperties.IsUnlockable = false;
    (*this).Data.UnlockProperties.RequiredTags = FGameplayTagContainer();
    (*this).Data.UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).Data.UnlockProperties.ShowIfNotOwned = true;
    (*this).Data.UnlockProperties.UnlockCoverImage = FSoftObjectPath();
}
