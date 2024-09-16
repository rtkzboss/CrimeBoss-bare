#include "IGS_GameCharacterBase.h"
#include "AkComponent.h"
#include "IGS_DynamicMaterialHandlerComponent.h"
#include "Components/CapsuleComponent.h"
#include "IGS_DangerAreaComponent.h"
#include "IGS_IdleAvoidanceComponent.h"
#include "IGS_ItemDropComponent.h"
#include "IGS_RollbackComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_GameCharacterBase::AIGS_GameCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_DynamicMaterialHandlerComponent>(TEXT("DynamicMaterialHandlerComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_RollbackComponent>(TEXT("RollbackComponent"));
    auto gen3 = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    auto gen4 = CreateDefaultSubobject<UIGS_DangerAreaComponent>(TEXT("DangerAreaComp"));
    auto gen5 = CreateDefaultSubobject<UIGS_ItemDropComponent>(TEXT("ItemDropComponent"));
    auto gen6 = CreateDefaultSubobject<UIGS_IdleAvoidanceComponent>(TEXT("IdleAvoidanceComponent"));
    (*this).DynamicMaterialHandlerComponent = gen;
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).CharacterWieldable3PVModelScaleMultiplier = 1.000000000e+00f;
    (*this).CharacterWieldableFPVModelScaleMultiplier = 1.000000000e+00f;
    static ConstructorHelpers::FClassFinder<UIGS_ImpactTypeObject> gen7(TEXT("/Game/00_Main/Core/Tables/Impacts/Shot/ID/BP_ImpactShot_KillConfirmed.BP_ImpactShot_KillConfirmed_C"));
    (*this).KillConfirmedParticleID = gen7.Class;
    (*this).RollbackComponent = gen2;
    (*this).AkAudioComponent = gen3;
    (*this).DangerAreaComponent = gen4;
    (*this).ItemDropComponent = gen5;
    (*this).IdleAvoidanceComponent = gen6;
    (*this).InjuryOffenceDuration = 3.000000000e+00f;
    (*this).bRegisterOnBeginPlay = true;
    auto gen8 = Cast<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CollisionCylinder")));
    if (gen3) gen3->SetupAttachment(gen8);
}

void AIGS_GameCharacterBase::RM_StopAnimation_Implementation(UAnimMontage* Montage) {
}

void AIGS_GameCharacterBase::RM_PlayAnimation_Implementation(UAnimMontage* Montage, FName SectionName, float PlayRate, float StartPosition) {
}

void AIGS_GameCharacterBase::ResetAICollisionSettings() {
}

void AIGS_GameCharacterBase::OnSpawnedByAI_Implementation(AIGS_AISpawnPoint* inSpawnPoint) {
}

void AIGS_GameCharacterBase::OnRep_IsInTransition() const {
}

void AIGS_GameCharacterBase::OnRep_DisabledPropCollision() {
}

void AIGS_GameCharacterBase::Multicast_IsInTransitionChanged_Implementation(bool inIsInTransition) {
}

AIGS_WaypointFramework* AIGS_GameCharacterBase::GetSpawnGoToWaypoint() const {
    return nullptr;
}

void AIGS_GameCharacterBase::DisableAIPropCollision() {
}

void AIGS_GameCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_GameCharacterBase, R_IsInTransition);
    DOREPLIFETIME(AIGS_GameCharacterBase, bHasDisabledPropCollision);
}

