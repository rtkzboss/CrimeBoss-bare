#include "IGS_HeatMapBasePawnComponent.h"
#include "Engine/EngineBaseTypes.h"

UIGS_HeatMapBasePawnComponent::UIGS_HeatMapBasePawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.TickGroup = TG_PostUpdateWork;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.TickInterval = 2.000000030e-01f;
    (*this).bAutoActivate = true;
}

