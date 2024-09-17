#include "IGS_RideableVehicle_Base.h"
#include "AkComponent.h"
#include "IGS_ObjectStatus.h"
#include "IGS_InteractiveComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_RideableVehicle_Base::AIGS_RideableVehicle_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("Object Status"));
    auto gen2 = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("Interactive"));
    auto gen4 = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    auto gen5 = CreateDefaultSubobject<UBoxComponent>(TEXT("Entry Trigger"));
    auto gen6 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    (*this).MaxKilometersPerHour = 3.000000000e+01f;
    (*this).RotationNormalizationFactor = 1.225000000e+01f;
    (*this).CanInteract = true;
    (*this).LocationSyncLerpForce = 1.000000015e-01f;
    (*this).RotationSyncLerpForce = 1.000000015e-01f;
    (*this).ObjectStatus = gen;
    (*this).EngineOffOnHealthPercent = 3.000000119e-01f;
    (*this).AkComponent = gen2;
    (*this).InteractiveComponent = gen3;
    (*this).FirstPersonCameraComponent = gen4;
    (*this).EntryTrigger = gen5;
    (*this).BaseMass = 1.000000000e+03f;
    (*this).BagWeight = 5.000000000e+01f;
    (*this).BagInteractionDistance = 4.000000000e+02f;
    (*this).Mesh = gen6;
    (*this).bAlwaysRelevant = true;
    (*this).SetReplicatingMovement(false);
    (*this).RootComponent = gen6;
    if (gen2) gen2->SetupAttachment(gen6);
    if (gen3) gen3->SetupAttachment(gen6);
    if (gen4) gen4->SetupAttachment(gen6);
    if (gen5) gen5->SetupAttachment(gen6);
}

void AIGS_RideableVehicle_Base::VehicleDestroy(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}





void AIGS_RideableVehicle_Base::OnUpdateThrottleTiming() {
}

void AIGS_RideableVehicle_Base::OnStopUsing_SERVER_Implementation(int32 inSeatIndex) {
}

void AIGS_RideableVehicle_Base::OnStopUsing_MULTICAST_Implementation(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex) {
}

void AIGS_RideableVehicle_Base::OnStartUsing_SERVER_Implementation(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex) {
}

void AIGS_RideableVehicle_Base::OnStartUsing_MULTICAST_Implementation(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex) {
}

void AIGS_RideableVehicle_Base::OnRepRotation() {
}

void AIGS_RideableVehicle_Base::OnRepLocation() {
}

void AIGS_RideableVehicle_Base::OnRepLinearDrag() {
}

void AIGS_RideableVehicle_Base::OnRepAngularDrag() {
}

void AIGS_RideableVehicle_Base::OnRep_RuntimeBagInfo() {
}

void AIGS_RideableVehicle_Base::OnRep_PlayerSlots() {
}

void AIGS_RideableVehicle_Base::OnRep_EngineDestroed() {
}

void AIGS_RideableVehicle_Base::OnDetachBag_SERVER_Implementation(int32 inBagIndex) {
}

void AIGS_RideableVehicle_Base::OnDetachBag_MULTICAST_Implementation(AIGS_LootBagPickup* inBag, int32 inBagIndex) {
}

void AIGS_RideableVehicle_Base::OnAttachBag_SERVER_Implementation(AIGS_LootBagPickup* inBag, int32 inBagIndex) {
}

void AIGS_RideableVehicle_Base::OnAttachBag_MULTICAST_Implementation(AIGS_LootBagPickup* inBag, int32 inBagIndex) {
}

bool AIGS_RideableVehicle_Base::OfferPositionToDismount_Implementation(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex, FTransform& OutPosition) const {
    return false;
}

void AIGS_RideableVehicle_Base::LootBagDestroyed_SERVER_Implementation(int32 inIndex) {
}

void AIGS_RideableVehicle_Base::LootBagDestroyed_Implementation(AIGS_LootBagPickup* inBagPickup) {
}

void AIGS_RideableVehicle_Base::InteractClient(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_RideableVehicle_Base::Interact(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_RideableVehicle_Base::Horn_SERVER_Implementation(bool inStartPlaying) {
}

void AIGS_RideableVehicle_Base::Horn_MULTICAST_Implementation(bool inStartPlaying) {
}

float AIGS_RideableVehicle_Base::GetMaxVelocity() const {
    return 0.000000000e+00f;
}

float AIGS_RideableVehicle_Base::GetKmPerHAspect() {
    return 0.000000000e+00f;
}


void AIGS_RideableVehicle_Base::EngineDestroy_Implementation() {
}

bool AIGS_RideableVehicle_Base::CheckIsEngineOn() {
    return false;
}


bool AIGS_RideableVehicle_Base::CanPickBag_Implementation(AIGS_LootBagPickup* inBag, int32 inTargetSlot) {
    return false;
}

void AIGS_RideableVehicle_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_RideableVehicle_Base, PlayerSlots);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, RuntimeBagInfo);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, CanInteract);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, bIsEngineDestroyed);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, mR_location);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, mR_rotation);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, mR_linearDrag);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, mR_angularDrag);
}

