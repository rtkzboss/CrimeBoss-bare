#include "IGS_CharacterTraits.h"
#include "GameplayTagContainer.h"

FIGS_CharacterTraits::FIGS_CharacterTraits() {
    (*this).MaxHealth = 960;
    (*this).ReviveCount = 3;
    auto gen = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion");
    (*gen->ContainerPtrToValuePtr<int32>(&(*this).AllowedWieldables, 0)) = 0;
    auto gen2 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AllowedWieldables, 0)) = {FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable"))};
    auto gen3 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream");
    (*gen3->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).AllowedWieldables, 0)) = {0, 1, 2, 1, 0};
    auto gen4 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription");
    (*gen4->ContainerPtrToValuePtr<FString>(&(*this).AllowedWieldables, 0)) = TEXT("");
    auto gen5 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription");
    (*gen5->ContainerPtrToValuePtr<FString>(&(*this).AllowedWieldables, 0)) = TEXT("");
}
