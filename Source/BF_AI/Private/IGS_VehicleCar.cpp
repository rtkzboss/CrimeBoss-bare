#include "IGS_VehicleCar.h"
#include "IGS_ObjectStatus.h"
#include "IGS_AICarSpawnComponent.h"
#include "IGS_NavModifierComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "SimpleWheeledVehicleMovementComponent.h"
#include "IGS_DestructableVehicleComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_VehicleCar::AIGS_VehicleCar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("ObjectStatus"));
    auto gen2 = CreateDefaultSubobject<UIGS_DestructableVehicleComponent>(TEXT("DestructableVehicleComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_AICarSpawnComponent>(TEXT("AICarSpawnComponent"));
    auto gen4 = CreateDefaultSubobject<USimpleWheeledVehicleMovementComponent>(TEXT("WheeledVehicleComponent"));
    auto gen5 = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerPushAwayTrigger"));
    auto gen6 = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerPushAwayBlockingCollider"));
    auto gen7 = CreateDefaultSubobject<UBoxComponent>(TEXT("TopTrigger"));
    auto gen8 = CreateDefaultSubobject<USceneComponent>(TEXT("DistanceSensorLocation"));
    auto gen9 = CreateDefaultSubobject<UIGS_NavModifierComponent>(TEXT("NavModifierComponent"));
    (*this).ObjectStatus = gen;
    (*this).DestructableVehicleComponent = gen2;
    (*this).AICarSpawner = gen3;
    (*this).WheeledVehicleComponent = gen4;
    (*this).PlayerPushAwayTrigger = gen5;
    (*this).PlayerPushAwayBlockingCollider = gen6;
    (*this).TopTrigger = gen7;
    (*this).DistanceSensorLocation = gen8;
    (*this).NavModifier = gen9;
    (*this).NeedsPassengers = true;
    (*this).bUseGravity = true;
    (*this).GravityDefault = 5.000000000e+02f;
    (*this).MaxFollowSpeed = 1.500000000e+03f;
    (*this).AccelerateSpeed = 6.000000000e+02f;
    (*this).StartParkingDistance = 3.000000000e+02f;
    (*this).ParkingSpeed = 6.000000000e+02f;
    (*this).ParkingSlowdownTime = 1.500000000e+01f;
    (*this).RotationSpeed = 8.000000000e+00f;
    (*this).WheelRotationSpeed = 1.000000000e+01f;
    (*this).DriftDistance = 5.000000000e+02f;
    (*this).DiftAngle = 1.300000000e+01f;
    (*this).DiftSpeedDecrease = 4.000000000e+02f;
    (*this).MaxLeashDistance = 3.000000000e+02f;
    (*this).WheelSize = 5.000000000e+01f;
    (*this).FrontStopTriggerOffset = -1.000000000e+01f;
    (*this).bReplicates = true;
    auto gen10 = AActor::StaticClass()->FindPropertyByName("RemoteRole");
    (*gen10->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    auto gen11 = Cast<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("VehicleSkeletalMesh")));
    if (gen2) gen2->SetupAttachment(gen11);
    if (gen5) gen5->SetupAttachment(gen11);
    if (gen6) gen6->SetupAttachment(gen11);
    if (gen7) gen7->SetupAttachment(gen11);
}

void AIGS_VehicleCar::SpawnPassengers() {
}

void AIGS_VehicleCar::SetupWheels(TArray<UIGS_DrivableTireComponent*> inAllWheels) {
}

void AIGS_VehicleCar::SetupAsStaticVehicle() {
}

void AIGS_VehicleCar::SetSocketMesh(UStaticMeshComponent* InMesh, FName inSocket) const {
}

void AIGS_VehicleCar::PushPlayersOfVehicle() {
}

void AIGS_VehicleCar::PushPlayerAway(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_VehicleCar::PlayDoorAnimation(int32 inPassengerID) {
}

void AIGS_VehicleCar::OnRep_OpenedDoors(TArray<int32> inPreviousOpenedDoors) {
}

void AIGS_VehicleCar::OnRep_DisableCar(bool bPreviousDisable) {
}

void AIGS_VehicleCar::OnPassengerGettingOut(int32 inPassengerID) {
}

void AIGS_VehicleCar::Multi_EndDrive_Implementation() {
}

void AIGS_VehicleCar::EnableMeshTick() const {
}

void AIGS_VehicleCar::DelayDisableCar() {
}

void AIGS_VehicleCar::CheckParkingLocation() {
}

void AIGS_VehicleCar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_VehicleCar, mR_OpenedDoors);
    DOREPLIFETIME(AIGS_VehicleCar, bUseGravity);
    DOREPLIFETIME(AIGS_VehicleCar, bDisableCar);
    DOREPLIFETIME(AIGS_VehicleCar, mR_NewVelocity);
    DOREPLIFETIME(AIGS_VehicleCar, mR_GravityForce);
    DOREPLIFETIME(AIGS_VehicleCar, mR_FinalRotation);
    DOREPLIFETIME(AIGS_VehicleCar, mR_FinalWheelRotation);
}

