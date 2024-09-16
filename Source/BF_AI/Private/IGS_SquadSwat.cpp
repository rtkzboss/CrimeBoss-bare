#include "IGS_SquadSwat.h"
#include "IGS_RoomPathfindingComponent.h"
#include "IGS_SquadAggroComponent.h"
#include "IGS_SquadSpeedSynchronizationComponent.h"

AIGS_SquadSwat::AIGS_SquadSwat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_RoomPathfindingComponent>(TEXT("RoomPathfindingComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_SquadSpeedSynchronizationComponent>(TEXT("SpeedSynchronizationComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_SquadAggroComponent>(TEXT("SquadAggroComponent"));
    (*this).RoomPathfindingComponent = gen;
    (*this).SpeedSynchronizationComponent = gen2;
    (*this).SquadAggroComponent = gen3;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    (*this).PrimaryActorTick.TickInterval = 2.000000030e-01f;
}

