#include "IGS_PerkData.h"
#include "GameplayTagContainer.h"

FIGS_PerkData::FIGS_PerkData() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).Name = FText::FromString(TEXT("None"));
    (*this).Description = FText::FromString(TEXT("None"));
    (*this).Image = FSoftObjectPath();
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).PerkType = EIGS_PerkType::PT_MetaPerk;
    (*this).PerkClass = EIGS_PerkClass::PC_Generic;
    (*this).PerkCategory = 0;
    (*this).PerkModeUsage = 0;
    (*this).AllowedHeistersOverride = {};
    (*this).ForbiddenHeistersLevel = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).MutuallyExclusiveTag, 0)) = NAME_None;
    (*this).bAllowedForGeneration = false;
    (*this).SiblingID = nullptr;
    (*this).PerkLevel = 1;
    (*this).SwapPerkIDAfterPromotion = nullptr;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).SwapPerkTagAfterPromotion, 0)) = NAME_None;
    (*this).UnlockProperties.IsUnlockable = false;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)) = {};
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).UnlockProperties.UnlockCoverImage = FSoftObjectPath();
}
