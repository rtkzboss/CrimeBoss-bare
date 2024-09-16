#include "IGS_SearchPointBase.h"
#include "Components/SceneComponent.h"
#include "IGS_SearchPointComponent.h"

AIGS_SearchPointBase::AIGS_SearchPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_SearchPointComponent>(TEXT("SearchPointComponent"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).SearchPointComponent = gen;
    (*this).RootComponent = gen2;
}

