#include "IGS_PanicPointBase.h"
#include "Components/SceneComponent.h"
#include "IGS_PanicPointComponent.h"

AIGS_PanicPointBase::AIGS_PanicPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_PanicPointComponent>(TEXT("PanicPointComponent"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).PanicPointComponent = gen;
    (*this).RootComponent = gen2;
}

