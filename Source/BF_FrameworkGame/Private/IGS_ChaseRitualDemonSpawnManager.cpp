#include "IGS_ChaseRitualDemonSpawnManager.h"
#include "Components/BillboardComponent.h"

AIGS_ChaseRitualDemonSpawnManager::AIGS_ChaseRitualDemonSpawnManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    (*this).TriggerTolarance = 1.000000000e+00f;
    (*this).SpawnDemonInterval = 5.000000000e-01f;
    (*this).PlayerInputCheckInterval = 5.000000000e-01f;
    (*this).ChanceToSpawn = 1.000000000e+02f;
    (*this).SpawnDistance = 1.000000000e+03f;
    (*this).TimeToVanish = 1.500000000e+01f;
    (*this).MaxAllowedSpawnedDemons = 1;
    (*this).Billboard = gen;
    (*this).PrimaryActorTick.bCanEverTick = true;
}

void AIGS_ChaseRitualDemonSpawnManager::TryToSpawnDemon() {
}

void AIGS_ChaseRitualDemonSpawnManager::StartLogic() {
}

void AIGS_ChaseRitualDemonSpawnManager::ResetPlayerInputDetection() {
}

void AIGS_ChaseRitualDemonSpawnManager::OnSquadSpawnedEvent(TArray<AIGS_GameCharacterFramework*> inSquadMembers) {
}

void AIGS_ChaseRitualDemonSpawnManager::DemonVanished() {
}





void AIGS_ChaseRitualDemonSpawnManager::DemonDied() {
}

