#include "IGS_CharacterTraits.h"
#include "GameplayTagContainer.h"

FIGS_CharacterTraits::FIGS_CharacterTraits() {
    (*this).MaxHealth = 960;
    (*this).ReviveCount = 3;
    auto gen = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion");
    (*gen->ContainerPtrToValuePtr<int32>(&(*this).AllowedWieldables, 0)) = 0;
    FGameplayTag gen2;
    auto gen3 = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen3->ContainerPtrToValuePtr<FName>(&gen2, 0)) = TEXT("Item.Wieldable");
    auto gen4 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary");
    (*gen4->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AllowedWieldables, 0)) = {MoveTemp(gen2)};
    auto gen5 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream");
    (*gen5->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).AllowedWieldables, 0)) = {0, 1, 2, 1, 0};
    auto gen6 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription");
    (*gen6->ContainerPtrToValuePtr<FString>(&(*this).AllowedWieldables, 0)) = TEXT("");
    auto gen7 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription");
    (*gen7->ContainerPtrToValuePtr<FString>(&(*this).AllowedWieldables, 0)) = TEXT("");
}
