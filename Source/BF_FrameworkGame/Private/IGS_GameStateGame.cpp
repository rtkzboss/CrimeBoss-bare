#include "IGS_GameStateGame.h"
#include "IGS_GlobalInventory.h"
#include "IGS_PlayerIntelManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_GameStateGame::AIGS_GameStateGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_GlobalInventory>(TEXT("GlobalInventory"));
    auto gen2 = CreateDefaultSubobject<UIGS_PlayerIntelManager>(TEXT("IntelManager"));
    (*this).DeathCamLastDeadTime = 5.000000000e+00f;
    (*this).FailsafeMissionEndTime = 1.000000000e+01f;
    (*this).GlobalInventory = gen;
    (*this).IntelManager = gen2;
    (*this).CopsArriveTimerEnd = -1.000000000e+00f;
}

void AIGS_GameStateGame::SwitchStartupSource(EIGS_MissionStartupSource& outBranches) {
}


void AIGS_GameStateGame::Server_RemoveLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateGame::Server_RemoveBonusLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateGame::Server_AddSecuredLootBag_Implementation() {
}

void AIGS_GameStateGame::Server_AddPocketLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateGame::Server_AddLootBag_Implementation() {
}

void AIGS_GameStateGame::Server_AddLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, AIGS_GameCharacterFramework* OwningPawn) {
}

void AIGS_GameStateGame::Server_AddCarryablePocketLoot_Implementation(TSubclassOf<UIGS_CarryableInventoryObject> inItemClass) {
}

void AIGS_GameStateGame::Server_AddCarryablePickedUpLoot_Implementation(TSubclassOf<UIGS_CarryableInventoryObject> inItemClass) {
}

void AIGS_GameStateGame::Server_AddBonusPocketLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateGame::Server_AddBonusLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, AIGS_GameCharacterFramework* OwningPawn) {
}


void AIGS_GameStateGame::OnRep_StartedPlayingMatch() {
}

void AIGS_GameStateGame::OnRep_HasEveryoneLoadedLevel() {
}

void AIGS_GameStateGame::OnRep_CopsArriveTimer() {
}



UIGS_PickupsManager* AIGS_GameStateGame::GetPickupsManager() const {
    return nullptr;
}


bool AIGS_GameStateGame::GetIsTurfWar() const {
    return false;
}

bool AIGS_GameStateGame::GetIsHordeMode() const {
    return false;
}

UIGS_HordeModeManager* AIGS_GameStateGame::GetHordeModeManager() const {
    return nullptr;
}

UIGS_GlobalInventory* AIGS_GameStateGame::GetGlobalInventory() const {
    return nullptr;
}



void AIGS_GameStateGame::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_GameStateGame, R_HasEveryoneLoadedLevel);
    DOREPLIFETIME(AIGS_GameStateGame, R_StartedPlayingMatch);
    DOREPLIFETIME(AIGS_GameStateGame, CopsArriveTimerEnd);
}

