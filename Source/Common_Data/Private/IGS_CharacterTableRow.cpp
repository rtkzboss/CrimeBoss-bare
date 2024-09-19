#include "IGS_CharacterTableRow.h"
#include "GameplayTagContainer.h"
#include "EIGS_DialogueHeisterCharacter.h"
#include "IGS_EquipmentInventoryObject.h"
#include "IGS_GameplayEffect_PerkBase.h"
#include "META_PerkDataToFPS.h"
#include "Templates/SubclassOf.h"

FIGS_CharacterTableRow::FIGS_CharacterTableRow() {
    (*this).TagID = FGameplayTag();
    (*this).ID = EIGS_CharacterID::Char_Unknown;
    (*this).bIsGeneric = false;
    (*this).bUseInRandomPool = false;
    (*this).UniqueNormalClasses.bIsMale = true;
    (*this).UniqueNormalClasses.bIsMutable = false;
    (*this).UniqueNormalClasses.MutableProfile = FSoftObjectPath();
    (*this).UniqueNormalClasses.PlayerPawnClass = FSoftObjectPath();
    (*this).UniqueNormalClasses.BotPawnClass = FSoftObjectPath();
    (*this).UniqueNormalClasses.PaperDollClass = FSoftObjectPath();
    (*this).UniqueNormalClasses.FPVArmsClass = FSoftObjectPath();
    (*this).UniqueNormalClasses.CharacterIcon = FSoftObjectPath();
    (*this).UniqueNormalClasses.MetaCharacterIcon = FSoftObjectPath();
    (*this).UniqueNormalClasses.VariantName = FText::GetEmpty();
    (*this).UniqueNormalClasses.VariantDescription = FText::GetEmpty();
    (*this).UniqueNormalClasses.DialogueID = EIGS_DialogueHeisterCharacter::None;
    (*this).UniqueLeveledClasses.bIsMale = true;
    (*this).UniqueLeveledClasses.bIsMutable = false;
    (*this).UniqueLeveledClasses.MutableProfile = FSoftObjectPath();
    (*this).UniqueLeveledClasses.PlayerPawnClass = FSoftObjectPath();
    (*this).UniqueLeveledClasses.BotPawnClass = FSoftObjectPath();
    (*this).UniqueLeveledClasses.PaperDollClass = FSoftObjectPath();
    (*this).UniqueLeveledClasses.FPVArmsClass = FSoftObjectPath();
    (*this).UniqueLeveledClasses.CharacterIcon = FSoftObjectPath();
    (*this).UniqueLeveledClasses.MetaCharacterIcon = FSoftObjectPath();
    (*this).UniqueLeveledClasses.VariantName = FText::GetEmpty();
    (*this).UniqueLeveledClasses.VariantDescription = FText::GetEmpty();
    (*this).UniqueLeveledClasses.DialogueID = EIGS_DialogueHeisterCharacter::None;
    (*this).GenericVariants = TArray<FIGS_CharacterClasses>{};
    (*this).DefaultLoadout.PrimaryWeapon = nullptr;
    (*this).DefaultLoadout.PrimaryWeaponSkin = FGameplayTag();
    (*this).DefaultLoadout.SecondaryWeapon = nullptr;
    (*this).DefaultLoadout.SecondaryWeaponSkin = FGameplayTag();
    (*this).DefaultLoadout.Equipment = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).DefaultLoadout.Perks = TArray<FMETA_PerkDataToFPS>{};
    (*this).DefaultLoadout.Ability1ChargesLeft = -1;
    (*this).DefaultLoadout.CharacterSkinID = FGameplayTag();
    (*this).Traits.MaxHealth = 960;
    (*this).Traits.ReviveCount = 3;
    auto gen = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion");
    (*gen->ContainerPtrToValuePtr<int32>(&(*this).Traits.AllowedWieldables, 0)) = 0;
    auto gen2 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits.AllowedWieldables, 0)) = TArray<FGameplayTag>{FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable"))};
    auto gen3 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream");
    (*gen3->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).Traits.AllowedWieldables, 0)) = TArray<uint8>{0, 1, 2, 1, 0};
    auto gen4 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription");
    (*gen4->ContainerPtrToValuePtr<FString>(&(*this).Traits.AllowedWieldables, 0)) = TEXT("");
    auto gen5 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription");
    (*gen5->ContainerPtrToValuePtr<FString>(&(*this).Traits.AllowedWieldables, 0)) = TEXT("");
    (*this).CharacterName = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Class = nullptr;
    (*this).CharacterWieldable3PVModelScaleMultiplier = 1.000000000e+00f;
    (*this).CharacterWieldableFPVModelScaleMultiplier = 1.000000000e+00f;
    (*this).MetaData.CharacterQuality = EMETA_ItemQuality::MinGenerate;
    (*this).MetaData.PerkTags = TArray<FGameplayTag>{};
    (*this).MetaData.Perks = TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>{};
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).UnlockProperties.IsUnlockable = false;
    (*this).UnlockProperties.RequiredTags = FGameplayTagContainer();
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).UnlockProperties.UnlockCoverImage = FSoftObjectPath();
}
