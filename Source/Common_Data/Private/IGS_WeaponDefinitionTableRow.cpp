#include "IGS_WeaponDefinitionTableRow.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"

FIGS_WeaponDefinitionTableRow::FIGS_WeaponDefinitionTableRow() {
    (*this).TagID = FGameplayTag();
    (*this).ID = nullptr;
    (*this).FPSWeaponID = nullptr;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).SignatureCharacter = EIGS_CharacterID::Char_Unknown;
    (*this).WeaponMods = TArray<TSubclassOf<UIGS_ModInventoryObject>>{};
    (*this).WeaponSkin = FGameplayTag();
    (*this).WeaponSkinIconMap = TMap<TSoftObjectPtr<UIGS_WeaponSkinData>, TSoftObjectPtr<UTexture2D>>{};
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).bAllowedForGeneration = false;
    (*this).UnlockProperties.IsUnlockable = false;
    (*this).UnlockProperties.RequiredTags = FGameplayTagContainer();
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).UnlockProperties.UnlockCoverImage = FSoftObjectPath();
}
