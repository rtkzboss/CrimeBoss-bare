#include "IGS_Vessel_Base.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "BuoyancyComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_Vessel_Base::AIGS_Vessel_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerBlockBoxComponent"));
    auto gen2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EngineParticleEffect"));
    auto gen3 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EngineParticleEffectSecond"));
    auto gen4 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftBoardParticleEffect"));
    auto gen5 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CenterBoardParticleEffect"));
    auto gen6 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightBoardParticleEffect"));
    auto gen7 = CreateDefaultSubobject<UBuoyancyComponent>(TEXT("Buoyancy"));
    (*this).PontoonRadius = 7.500000000e+01f;
    (*this).MirrorPontoons = true;
    (*this).MaxAcceleration = 6.000000000e+02f;
    (*this).SteerForce = 2.500000000e+02f;
    (*this).MovementForceMultiplierSimpleImpulse = 1.000000000e+00f;
    (*this).SwingSpeedMultiplierSimpleImpulse = 1.199999973e-01f;
    (*this).BankingForceMultiplierSimpleImpulse = 1.000000015e-01f;
    (*this).TiltBackForceMultiplierSimpleImpulse = 5.000000075e-02f;
    (*this).InJumpGravityMultiplierSimpleImpulse = 3.000000000e+00f;
    (*this).EngineBladesPontoonIndex = 1;
    (*this).PlayerBlockBoxComponent = gen;
    (*this).LeftEngineParticleEffect = gen2;
    (*this).RightEngineParticleEffect = gen3;
    (*this).LeftBoardParticleEffect = gen4;
    (*this).CenterBoardParticleEffect = gen5;
    (*this).RightBoardParticleEffect = gen6;
    (*this).Buoyancy = gen7;
    (*this).FPSCoeficient = 3.700000048e-02f;
    (*this).ParticleParamName = TEXT("Intensity");
    (*this).ParticleSpeedTrigger = 2.000000000e+02f;
    (*this).EngineInitialScale = 1.000000000e+00f;
    (*this).SideBoardInitialScale = 1.000000000e+00f;
    FIGS_VesselParticleData gen8;
    gen8.PontoonIndex = 1;
    (*this).PontoonWaterStatus = TArray<FIGS_VesselParticleData>{gen8, FIGS_VesselParticleData{}};
    auto gen9 = Cast<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("Mesh")));
    if (gen) gen->SetupAttachment(gen9);
    if (gen2) gen2->SetupAttachment(gen9);
    if (gen3) gen3->SetupAttachment(gen9);
    if (gen4) gen4->SetupAttachment(gen9);
    if (gen5) gen5->SetupAttachment(gen9);
    if (gen6) gen6->SetupAttachment(gen9);
}

void AIGS_Vessel_Base::SyncControls_SERVER_Implementation(float inSteering, float inThrottle) {
}

void AIGS_Vessel_Base::SyncControls() {
}

void AIGS_Vessel_Base::SetExitTransform(TArray<FTransform> inNewPositions) {
}

void AIGS_Vessel_Base::PreventFlipUp() const {
}

void AIGS_Vessel_Base::OnEntryTriggerBeginOverlap_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_Vessel_Base::MoveRight(float inAxis) {
}

void AIGS_Vessel_Base::MoveForward(float inAxis) {
}

void AIGS_Vessel_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_Vessel_Base, Steer);
    DOREPLIFETIME(AIGS_Vessel_Base, Throttle);
    DOREPLIFETIME(AIGS_Vessel_Base, CurrentForce);
    DOREPLIFETIME(AIGS_Vessel_Base, m_PlayerExitPositions);
}

