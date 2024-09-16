#include "IGS_SafePointBase.h"
#include "Components/SceneComponent.h"
#include "IGS_SafePointComponent.h"

AIGS_SafePointBase::AIGS_SafePointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_SafePointComponent>(TEXT("SafePointComponent"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).SafePointComponent = gen;
    (*this).RootComponent = gen2;
}

