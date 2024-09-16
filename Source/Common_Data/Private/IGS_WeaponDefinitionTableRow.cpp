#include "IGS_WeaponDefinitionTableRow.h"
#include "GameplayTagContainer.h"

FIGS_WeaponDefinitionTableRow::FIGS_WeaponDefinitionTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).ID = nullptr;
    (*this).FPSWeaponID = nullptr;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).SignatureCharacter = EIGS_CharacterID::Char_Unknown;
    (*this).WeaponMods = {};
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WeaponSkin, 0)) = NAME_None;
    (*this).WeaponSkinIconMap = {};
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).bAllowedForGeneration = false;
    (*this).UnlockProperties.IsUnlockable = false;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)) = {};
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).UnlockProperties.UnlockCoverImage = FSoftObjectPath();
}
