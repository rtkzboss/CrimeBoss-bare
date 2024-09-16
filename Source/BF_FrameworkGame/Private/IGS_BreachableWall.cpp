#include "IGS_BreachableWall.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"

AIGS_BreachableWall::AIGS_BreachableWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("WallRootComponent"));
    auto gen2 = CreateDefaultSubobject<UChildActorComponent>(TEXT("FrontBreachingPoints"));
    auto gen3 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BackBreachingPoints"));
    (*this).WallRootComponent = gen;
    (*this).FrontBreachingPoints = gen2;
    (*this).BackBreachingPoints = gen3;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen);
}

