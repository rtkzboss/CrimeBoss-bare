#include "IGS_LootpointBase.h"
#include "Components/SceneComponent.h"

AIGS_LootpointBase::AIGS_LootpointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).Root = gen;
    (*this).RootComponent = gen;
}

