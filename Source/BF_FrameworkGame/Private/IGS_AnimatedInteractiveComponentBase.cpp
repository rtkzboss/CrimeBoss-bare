#include "IGS_AnimatedInteractiveComponentBase.h"
#include "Net/UnrealNetwork.h"

UIGS_AnimatedInteractiveComponentBase::UIGS_AnimatedInteractiveComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bStartAnimationImmediately = true;
    (*this).bBlockInputUntilAbilityEnd = true;
    (*this).bMoveToExactPositionAndRotation = true;
    (*this).RotationInterpSpeed = 1.000000000e+01f;
    (*this).MoveInterpSpeed = 1.000000000e+02f;
    (*this).DistanceFromPoint = 1.500000000e+02f;
    (*this).TolerableThreshold = 1.000000000e+02f;
    (*this).FailsafeTime = 2.000000000e+00f;
    (*this).bSetFlyingWhenLerping = true;
    (*this).bRotatePitch = true;
    FGameplayTag gen;
    auto gen2 = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen2->ContainerPtrToValuePtr<FName>(&gen, 0)) = TEXT("Gameplay.Input.Block.Move");
    FGameplayTag gen3;
    (*gen2->ContainerPtrToValuePtr<FName>(&gen3, 0)) = TEXT("Gameplay.Input.Block.Look");
    FGameplayTag gen4;
    (*gen2->ContainerPtrToValuePtr<FName>(&gen4, 0)) = TEXT("Gameplay.Input.Block.BotSwitch");
    FGameplayTag gen5;
    (*gen2->ContainerPtrToValuePtr<FName>(&gen5, 0)) = TEXT("Gameplay.Input.Block.Interact");
    FGameplayTag gen6;
    (*gen2->ContainerPtrToValuePtr<FName>(&gen6, 0)) = TEXT("Gameplay.Input.Block.ChangeSlot");
    FGameplayTag gen7;
    (*gen2->ContainerPtrToValuePtr<FName>(&gen7, 0)) = TEXT("Gameplay.Input.Block.DropBag");
    auto gen8 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen8->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).InputTagsToApply, 0)) = {MoveTemp(gen), MoveTemp(gen3), MoveTemp(gen4), MoveTemp(gen5), MoveTemp(gen6), MoveTemp(gen7)};
    FGameplayTag gen9;
    (*gen2->ContainerPtrToValuePtr<FName>(&gen9, 0)) = TEXT("Gameplay.Input.Block");
    FGameplayTag gen10;
    (*gen2->ContainerPtrToValuePtr<FName>(&gen10, 0)) = TEXT("Gameplay.Input");
    FGameplayTag gen11;
    (*gen2->ContainerPtrToValuePtr<FName>(&gen11, 0)) = TEXT("Gameplay");
    auto gen12 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen12->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).InputTagsToApply, 0)) = {MoveTemp(gen9), MoveTemp(gen10), MoveTemp(gen11)};
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_AnimatedInteractiveComponentBase::StopAnimation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AnimatedInteractiveComponentBase::StartAnimation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AnimatedInteractiveComponentBase::Server_OnPreInteractionLerpFinished_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AnimatedInteractiveComponentBase::ReleaseInput(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AnimatedInteractiveComponentBase::OnRep_Progress(float inOldProgress) {
}



void UIGS_AnimatedInteractiveComponentBase::MovePlayerToPointInternal_Implementation() {
}

void UIGS_AnimatedInteractiveComponentBase::Client_OnPreInteractionLerpFinished_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AnimatedInteractiveComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_AnimatedInteractiveComponentBase, R_Progress);
}

