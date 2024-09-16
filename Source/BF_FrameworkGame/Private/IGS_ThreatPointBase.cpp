#include "IGS_ThreatPointBase.h"
#include "Components/SceneComponent.h"
#include "IGS_ThreatPointComponent.h"

AIGS_ThreatPointBase::AIGS_ThreatPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_ThreatPointComponent>(TEXT("ThreatPointComponent"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).ThreatPointComponent = gen;
    (*this).RootComponent = gen2;
}

