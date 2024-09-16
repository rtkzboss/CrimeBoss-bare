#include "IGS_SmartObjectSimpleBase.h"
#include "Components/SceneComponent.h"

AIGS_SmartObjectSimpleBase::AIGS_SmartObjectSimpleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).bShouldPlayAnimation = true;
    (*this).bCanPlayerBumpInto = true;
    (*this).RootComp = gen;
    (*this).RootComponent = gen;
}

