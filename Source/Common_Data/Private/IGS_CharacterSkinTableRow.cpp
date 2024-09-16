#include "IGS_CharacterSkinTableRow.h"
#include "GameplayTagContainer.h"
#include "EIGS_DialogueHeisterCharacter.h"

FIGS_CharacterSkinTableRow::FIGS_CharacterSkinTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).CharacterClasses.bIsMale = true;
    (*this).CharacterClasses.bIsMutable = false;
    (*this).CharacterClasses.MutableProfile = FSoftObjectPath();
    (*this).CharacterClasses.PlayerPawnClass = FSoftObjectPath();
    (*this).CharacterClasses.BotPawnClass = FSoftObjectPath();
    (*this).CharacterClasses.PaperDollClass = FSoftObjectPath();
    (*this).CharacterClasses.FPVArmsClass = FSoftObjectPath();
    (*this).CharacterClasses.CharacterIcon = FSoftObjectPath();
    (*this).CharacterClasses.MetaCharacterIcon = FSoftObjectPath();
    (*this).CharacterClasses.VariantName = FText::GetEmpty();
    (*this).CharacterClasses.VariantDescription = FText::GetEmpty();
    (*this).CharacterClasses.DialogueID = EIGS_DialogueHeisterCharacter::None;
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).UnlockProperties.IsUnlockable = false;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)) = {};
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).UnlockProperties.UnlockCoverImage = FSoftObjectPath();
}
