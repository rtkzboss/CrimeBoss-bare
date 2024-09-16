#include "IGS_BossPointMovementManager.h"
#include "Components/SplineComponent.h"

AIGS_BossPointMovementManager::AIGS_BossPointMovementManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    (*this).SplineComponent = gen;
    (*this).PrimaryActorTick.bCanEverTick = true;
}

void AIGS_BossPointMovementManager::ResumeMoving() {
}

void AIGS_BossPointMovementManager::PauseMoving() {
}

void AIGS_BossPointMovementManager::InitializeWithPlayer(AIGS_PlayerCharacter* inPlayer) {
}

void AIGS_BossPointMovementManager::AbortMoving() {
}

