#include "IGS_ConnectionPointBase.h"
#include "Components/SceneComponent.h"

AIGS_ConnectionPointBase::AIGS_ConnectionPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).Root = gen;
    (*this).RootComponent = gen;
}

