#include "IGS_IdlePoint.h"
#include "GameplayTagContainer.h"

AIGS_IdlePoint::AIGS_IdlePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MinTimeUntilBreaker = 1.500000000e+01f;
    (*this).MaxTimeUntilBreaker = 6.000000000e+01f;
    (*this).MinWaitTime = 6.000000000e+01f;
    (*this).MaxWaitTime = 1.200000000e+02f;
    FGameplayTag gen;
    auto gen2 = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen2->ContainerPtrToValuePtr<FName>(&gen, 0)) = TEXT("Anim.Patrol.IdleBreaker");
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AnimationsToPlayTag, 0)) = {MoveTemp(gen)};
    FGameplayTag gen4;
    (*gen2->ContainerPtrToValuePtr<FName>(&gen4, 0)) = TEXT("Anim.Patrol");
    FGameplayTag gen5;
    (*gen2->ContainerPtrToValuePtr<FName>(&gen5, 0)) = TEXT("Anim");
    auto gen6 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen6->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AnimationsToPlayTag, 0)) = {MoveTemp(gen4), MoveTemp(gen5)};
}

