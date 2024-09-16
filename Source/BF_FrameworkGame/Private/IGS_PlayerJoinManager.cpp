#include "IGS_PlayerJoinManager.h"
#include "Net/UnrealNetwork.h"

UIGS_PlayerJoinManager::UIGS_PlayerJoinManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
}

void UIGS_PlayerJoinManager::OnRep_JoinedPlayers() const {
}

void UIGS_PlayerJoinManager::OnRep_HasEveryoneLoadedLevel() {
}

FIGS_PlayerJoinInfo UIGS_PlayerJoinManager::GetSlotByHeisterNumberBP(int32 inHeisterNumber) {
    return FIGS_PlayerJoinInfo{};
}

UIGS_PlayerJoinManager* UIGS_PlayerJoinManager::GetPlayerJoinManager(UObject* inWCO) {
    return nullptr;
}

int32 UIGS_PlayerJoinManager::GetNumberOfFreeSlots() const {
    return 0;
}

int32 UIGS_PlayerJoinManager::GetJoinedHeistersCount() {
    return 0;
}


TArray<AIGS_GameCharacterFramework*> UIGS_PlayerJoinManager::GetCurrentPlayers() {
    return {};
}

void UIGS_PlayerJoinManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_PlayerJoinManager, R_JoinedPlayers);
    DOREPLIFETIME(UIGS_PlayerJoinManager, HasEveryoneLoadedLevel);
}

