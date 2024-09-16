#include "IGS_PerksTableRow.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_PerkClass.h"
#include "EIGS_PerkType.h"

FIGS_PerksTableRow::FIGS_PerksTableRow() {
    (*this).ID = nullptr;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.TagID, 0)) = NAME_None;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.Description = FText::FromString(TEXT("None"));
    (*this).Data.Image = FSoftObjectPath();
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*this).Data.PerkType = EIGS_PerkType::PT_MetaPerk;
    (*this).Data.PerkClass = EIGS_PerkClass::PC_Generic;
    (*this).Data.PerkCategory = 0;
    (*this).Data.PerkModeUsage = 0;
    (*this).Data.AllowedHeistersOverride = {};
    (*this).Data.ForbiddenHeistersLevel = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.MutuallyExclusiveTag, 0)) = NAME_None;
    (*this).Data.bAllowedForGeneration = false;
    (*this).Data.SiblingID = nullptr;
    (*this).Data.PerkLevel = 1;
    (*this).Data.SwapPerkIDAfterPromotion = nullptr;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.SwapPerkTagAfterPromotion, 0)) = NAME_None;
    (*this).Data.UnlockProperties.IsUnlockable = false;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.UnlockProperties.RequiredTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.UnlockProperties.RequiredTags, 0)) = {};
    (*this).Data.UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).Data.UnlockProperties.ShowIfNotOwned = true;
    (*this).Data.UnlockProperties.UnlockCoverImage = FSoftObjectPath();
}
