#include "IGS_SimpleActor.h"
#include "Components/SceneComponent.h"

AIGS_SimpleActor::AIGS_SimpleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).RootComponent = gen;
}

