#include "IGS_UnlockItemInfo.h"

FIGS_UnlockItemInfo::FIGS_UnlockItemInfo() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).UnlockCategory = EIGS_UnlockCategory::UC_Unknown;
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).UnlockCoverImage = FSoftObjectPath();
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).RequiredEntitlementID, 0)) = NAME_None;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredTags, 0)) = {};
    (*this).RequiredValue = 0.000000000e+00f;
    (*this).ShowIfNotOwned = true;
}
