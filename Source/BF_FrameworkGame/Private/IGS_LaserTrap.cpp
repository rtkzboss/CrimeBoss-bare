#include "IGS_LaserTrap.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_LaserTrap::AIGS_LaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("BeamOrigin"));
    auto gen3 = CreateDefaultSubobject<UBoxComponent>(TEXT("BeamDetection"));
    auto gen4 = CreateDefaultSubobject<UArrowComponent>(TEXT("BeamDirection"));
    auto gen5 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BeamEmitter"));
    auto gen6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserMesh"));
    auto gen7 = CreateDefaultSubobject<UPointLightComponent>(TEXT("StatusLight"));
    auto gen8 = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    auto gen9 = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightTimeline"));
    (*this).RootObject = gen;
    (*this).BeamOrigin = gen2;
    (*this).BeamDetectionBox = gen3;
    (*this).BeamDirectionArrow = gen4;
    (*this).BeamEmitter = gen5;
    (*this).LaserMesh = gen6;
    (*this).StatusLight = gen7;
    (*this).AkAudioComponent = gen8;
    (*this).LightTimeline = gen9;
    (*this).StartTime = 2.000000030e-01f;
    (*this).ChargeTime = 3.000000119e-01f;
    (*this).EnableFromStart = true;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.TickInterval = 5.000000000e-01f;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen2);
    if (gen4) gen4->SetupAttachment(gen);
    if (gen5) gen5->SetupAttachment(gen);
    if (gen6) gen6->SetupAttachment(gen);
    if (gen7) gen7->SetupAttachment(gen);
    if (gen8) gen8->SetupAttachment(gen);
}

void AIGS_LaserTrap::SetEnabled(bool inState, bool inIgnoreChargeTime) {
}

void AIGS_LaserTrap::SetBeamEnabledDelayed(bool inState) {
}

void AIGS_LaserTrap::OnRep_RecalculateBeam() const {
}

void AIGS_LaserTrap::OnRep_OnSetEnabled() const {
}

void AIGS_LaserTrap::OnRep_OnSetBeamEnabled() {
}

void AIGS_LaserTrap::OnPlayerDetected_Implementation() {
}

void AIGS_LaserTrap::OnLightTimelineUpdate(float InValue) {
}

void AIGS_LaserTrap::OnBeamEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AIGS_LaserTrap::OnBeamBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AIGS_LaserTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_LaserTrap, mR_bIsEnabled);
    DOREPLIFETIME(AIGS_LaserTrap, mR_bIsBeamEnabled);
    DOREPLIFETIME(AIGS_LaserTrap, mR_EndBeamPoint);
}

