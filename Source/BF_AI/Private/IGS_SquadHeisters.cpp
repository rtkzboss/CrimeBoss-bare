#include "IGS_SquadHeisters.h"
#include "IGS_SquadHeistersEventWatchComponent.h"

AIGS_SquadHeisters::AIGS_SquadHeisters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_SquadHeistersEventWatchComponent>(TEXT("SquadHeistersEventWatchComponent"));
    (*this).SquadHeistersEventWatchComponent = gen;
    (*this).PrimaryActorTick.bCanEverTick = true;
}

