#include "PaybackHeavyCharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_WeakSpotComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

APaybackHeavyCharacter::APaybackHeavyCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UCapsuleComponent>(TEXT("WeakSpot Capsule"));
    auto gen2 = CreateDefaultSubobject<UIGS_WeakSpotComponent>(TEXT("WeakSpot Component"));
    auto gen3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 1"));
    auto gen4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 2"));
    auto gen5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 3"));
    auto gen6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 4"));
    (*this).WeakSpotCapsule = gen;
    (*this).CompromisedDamageMultiplier.Value = 2.000000000e+00f;
    (*this).WeakSpotComponent = gen2;
    auto gen7 = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen7->ContainerPtrToValuePtr<FName>(&(*this).WeakSpotCompromisedAnimation, 0)) = TEXT("Anim.Combat.Heavy.HelmOff");
    (*this).PSTemplate = FSoftObjectPath();
    (*this).ParticleScale.X = 1.000000000e+00f;
    (*this).ParticleScale.Y = 1.000000000e+00f;
    (*this).ParticleScale.Z = 1.000000000e+00f;
    (*this).ParticleSocketName = TEXT("pelvis");
    (*this).ShockChargeMeshComponent1 = gen3;
    (*this).ShockChargeMeshComponent2 = gen4;
    (*this).ShockChargeMeshComponent3 = gen5;
    (*this).ShockChargeMeshComponent4 = gen6;
    (*this).ShockChargeMeshScale.X = 1.000000000e+00f;
    (*this).ShockChargeMeshScale.Y = 1.000000000e+00f;
    (*this).ShockChargeMeshScale.Z = 1.000000000e+00f;
    (*this).ShockChargeMeshComponentAttachBone = TEXT("neck_01");
    auto gen8 = Cast<USkeletalMeshComponentBudgeted>(GetDefaultSubobjectByName(TEXT("CharacterMesh0")));
    if (gen) gen->SetupAttachment(gen8);
    if (gen3) gen3->SetupAttachment(gen8);
    if (gen4) gen4->SetupAttachment(gen8);
    if (gen5) gen5->SetupAttachment(gen8);
    if (gen6) gen6->SetupAttachment(gen8);
}

void APaybackHeavyCharacter::OnWeakSpotCompromised(const UPrimitiveComponent* inWeakSpotComponent, const FIGS_HitInfo& inLastHitInfo) {
}

void APaybackHeavyCharacter::OnRep_RemainingMeshComps() {
}

void APaybackHeavyCharacter::OnInjuredEnd() {
}


void APaybackHeavyCharacter::Multicast_StartDoomTimer_Implementation(FVector inImpactPoint, FVector inRotVec) {
}

void APaybackHeavyCharacter::Multicast_OnShockChargeBegin_Implementation() {
}

void APaybackHeavyCharacter::Multicast_OnInjuredStart_Implementation() {
}

void APaybackHeavyCharacter::Multicast_OnInjuredEnd_Implementation() {
}

void APaybackHeavyCharacter::Multicast_OnDoomTimerEnd_Implementation() {
}

void APaybackHeavyCharacter::Multicast_EnableHeadWeakSpot_Implementation() {
}

void APaybackHeavyCharacter::HandleDeath(float inCurrentHealth, float inCurrentShield, float inHealthChanged, float inShieldChanged, const FIGS_HitInfo& inHitInfo) {
}

void APaybackHeavyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(APaybackHeavyCharacter, mR_ActiveMeshComps);
}

