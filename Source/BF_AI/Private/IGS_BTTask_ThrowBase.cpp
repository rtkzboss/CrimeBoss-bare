#include "IGS_BTTask_ThrowBase.h"

UIGS_BTTask_ThrowBase::UIGS_BTTask_ThrowBase() {
    (*this).BeingShotInterrupts = true;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ThrowNotifyTag, 0)) = TEXT("Anim.Combat.Throw.Frag.Throw");
    FGameplayTag gen2;
    (*gen->ContainerPtrToValuePtr<FName>(&gen2, 0)) = TEXT("Anim.Combat.Throw.Frag");
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).EventFilter, 0)) = {MoveTemp(gen2)};
    FGameplayTag gen4;
    (*gen->ContainerPtrToValuePtr<FName>(&gen4, 0)) = TEXT("Anim.Combat.Throw");
    FGameplayTag gen5;
    (*gen->ContainerPtrToValuePtr<FName>(&gen5, 0)) = TEXT("Anim.Combat");
    FGameplayTag gen6;
    (*gen->ContainerPtrToValuePtr<FName>(&gen6, 0)) = TEXT("Anim");
    auto gen7 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen7->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).EventFilter, 0)) = {MoveTemp(gen4), MoveTemp(gen5), MoveTemp(gen6)};
    (*this).NodeName = TEXT("DON'T USE BASE!");
}

