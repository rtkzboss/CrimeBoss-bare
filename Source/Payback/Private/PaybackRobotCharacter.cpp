#include "PaybackRobotCharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_WeakSpotComponent.h"
#include "Components/BoxComponent.h"

APaybackRobotCharacter::APaybackRobotCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UBoxComponent>(TEXT("WeakSpotCollisionComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_WeakSpotComponent>(TEXT("WeakSpot Component"));
    (*this).WeakSpotCollision = gen;
    (*this).WeakSpotHealth = 5.000000000e+01f;
    (*this).WeakSpotAIDamageMultiplier = 2.000000030e-01f;
    (*this).MaxHealthPercentageTaken = 5.000000000e-01f;
    (*this).OverloadOuterDamageRadius = 6.000000000e+02f;
    (*this).OverloadInnerDamageRadius = 2.000000000e+02f;
    (*this).OverloadEffectRadius = 1.500000000e+03f;
    (*this).OverloadBaseDamage = 5.000000000e+02f;
    auto gen3 = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen3->ContainerPtrToValuePtr<FName>(&(*this).OverloadAnimationTag, 0)) = TEXT("Anim.Combat.Robot.Overload");
    (*this).m_WeakSpotComponent = gen2;
    auto gen4 = Cast<USkeletalMeshComponentBudgeted>(GetDefaultSubobjectByName(TEXT("CharacterMesh0")));
    if (gen) gen->SetupAttachment(gen4);
}

void APaybackRobotCharacter::StartOverloadSequenceDelayed(AController* inInstigator, const float inDelay) {
}

void APaybackRobotCharacter::StartOverloadSequence(AController* inInstigator) {
}




void APaybackRobotCharacter::OnOverloadForcedTimeEnd(AController* inInstigator) {
}


void APaybackRobotCharacter::OnOverloadAnimationEvent(EIGS_AnimationEventType inEventType, AController* inInstigator) {
}

void APaybackRobotCharacter::OnOverloadAnimationEnd(EIGS_AnimationTaskFinishedReason inReason, AController* inInstigator) {
}

void APaybackRobotCharacter::OnHealthChangedWithCompromisedWeakSpot(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}



void APaybackRobotCharacter::OnEnableVfx_Implementation(const bool inEnable) {
}

void APaybackRobotCharacter::OnEffectApplied(const FGameplayTag inGameplayTag, int32 inCount) {
}

void APaybackRobotCharacter::OnAnyWeakSpotCompromisedEvent(const UPrimitiveComponent* inWeakSpotReference, const FIGS_HitInfo& inLastHitInfo) {
}

void APaybackRobotCharacter::OnAnyShootablePartShotOff(const UActorComponent* InComponent, float inDamageAmount, const FIGS_HitInfo& inHit) {
}

void APaybackRobotCharacter::Multicast_Overload_Implementation(AController* inInstigator) {
}

void APaybackRobotCharacter::EnableVfx(const bool inEnable) {
}

