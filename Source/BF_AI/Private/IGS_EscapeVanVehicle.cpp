#include "IGS_EscapeVanVehicle.h"
#include "IGS_InteractiveComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_EscapeVanVehicle::AIGS_EscapeVanVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("MiddleRightDoorInteractive"));
    auto gen2 = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("RearRightDoorInteractive"));
    auto gen3 = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("RearLeftDoorInteractive"));
    (*this).MiddleRightDoorInteractive = gen;
    (*this).RearRightDoorInteractive = gen2;
    (*this).RearLeftDoorInteractive = gen3;
}

void AIGS_EscapeVanVehicle::OnRep_IsRearDoorsOpened() {
}

void AIGS_EscapeVanVehicle::OnRep_IsPassDoorOpened() {
}

void AIGS_EscapeVanVehicle::OnRep_IsMiddleDoorOpened() {
}

void AIGS_EscapeVanVehicle::OnRearDoorInteraction(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_EscapeVanVehicle::OnPassengerDoorInteraction(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_EscapeVanVehicle::OnMiddleDoorInteraction(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_EscapeVanVehicle::Multicast_OnRearDoorInteraction_Implementation(bool inIsOpened) {
}

void AIGS_EscapeVanVehicle::Multicast_OnPassengerDoorInteraction_Implementation(bool inIsOpened) {
}

void AIGS_EscapeVanVehicle::Multicast_OnMiddleDoorInteraction_Implementation(bool inIsOpened) {
}

void AIGS_EscapeVanVehicle::CloseDoors() {
}

void AIGS_EscapeVanVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_EscapeVanVehicle, mR_bIsRearDoorsOpened);
    DOREPLIFETIME(AIGS_EscapeVanVehicle, mR_bIsMiddleDoorOpened);
    DOREPLIFETIME(AIGS_EscapeVanVehicle, mR_bIsPassDoorOpened);
}

