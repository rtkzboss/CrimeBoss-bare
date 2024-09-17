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
    (*this).InputTagsToApply = FGameplayTagContainer::CreateFromArray({FGameplayTag::RequestGameplayTag(TEXT("Gameplay.Input.Block.Move")), FGameplayTag::RequestGameplayTag(TEXT("Gameplay.Input.Block.Look")), FGameplayTag::RequestGameplayTag(TEXT("Gameplay.Input.Block.BotSwitch")), FGameplayTag::RequestGameplayTag(TEXT("Gameplay.Input.Block.Interact")), FGameplayTag::RequestGameplayTag(TEXT("Gameplay.Input.Block.ChangeSlot")), FGameplayTag::RequestGameplayTag(TEXT("Gameplay.Input.Block.DropBag"))});
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

