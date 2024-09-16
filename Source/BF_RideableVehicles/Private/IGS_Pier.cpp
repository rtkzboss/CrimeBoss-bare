#include "IGS_Pier.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_Pier::AIGS_Pier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    auto gen2 = CreateDefaultSubobject<UBoxComponent>(TEXT("Safe Area"));
    auto gen3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bridge"));
    auto gen4 = CreateDefaultSubobject<UBoxComponent>(TEXT("Dock Zone"));
    auto gen5 = CreateDefaultSubobject<UArrowComponent>(TEXT("First Player Position"));
    auto gen6 = CreateDefaultSubobject<UArrowComponent>(TEXT("Second Player Position"));
    auto gen7 = CreateDefaultSubobject<UArrowComponent>(TEXT("Third Player Position"));
    auto gen8 = CreateDefaultSubobject<UArrowComponent>(TEXT("Fourth Player Position"));
    auto gen9 = CreateDefaultSubobject<UArrowComponent>(TEXT("Right Dock Arrow"));
    auto gen10 = CreateDefaultSubobject<UArrowComponent>(TEXT("Left Dock Arrow"));
    (*this).Root = gen;
    (*this).SafeArea = gen2;
    (*this).Bridge = gen3;
    (*this).DockZone = gen4;
    (*this).FirstPlayerPosition = gen5;
    (*this).SecondPlayerPosition = gen6;
    (*this).ThirdPlayerPosition = gen7;
    (*this).FourthPlayerPosition = gen8;
    (*this).RightDockArrow = gen9;
    (*this).LeftDockArrow = gen10;
    (*this).bReplicates = true;
    auto gen11 = AActor::StaticClass()->FindPropertyByName("RemoteRole");
    (*gen11->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen);
    if (gen4) gen4->SetupAttachment(gen);
    if (gen5) gen5->SetupAttachment(gen);
    if (gen6) gen6->SetupAttachment(gen);
    if (gen7) gen7->SetupAttachment(gen);
    if (gen8) gen8->SetupAttachment(gen);
    if (gen9) gen9->SetupAttachment(gen);
    if (gen10) gen10->SetupAttachment(gen);
}

void AIGS_Pier::VesselExited_Implementation(AIGS_Vessel_Base* inVessel) {
}

void AIGS_Pier::VesselEntered_Implementation(AIGS_Vessel_Base* inVessel) {
}

void AIGS_Pier::StartDocking_Implementation(const FTransform& inTargetTransform, const FTransform& inFromTransform, AIGS_Vessel_Base* inVessel) {
}

void AIGS_Pier::OnExitedVehicle_Implementation(APawn* inVessel, int32 inSeatIndex) {
}

void AIGS_Pier::OnEnteredVehicle_Implementation(APawn* inVessel, int32 inSeatIndex) {
}

FTransform AIGS_Pier::FindBestTransformToDock(AActor* inActor) const {
    return FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
}

void AIGS_Pier::DockZoneEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_Pier::DockZoneBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_Pier::DockVessel_MULTICAST_Implementation(const FTransform& inTargetTransform, const FTransform& inFromTransform, AIGS_Vessel_Base* inVessel) {
}

FVector AIGS_Pier::ClosestSafePointTo(const FVector& inTarget) {
    return FVector{};
}

void AIGS_Pier::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_Pier, IsDocking);
    DOREPLIFETIME(AIGS_Pier, CurrentVessel);
}

