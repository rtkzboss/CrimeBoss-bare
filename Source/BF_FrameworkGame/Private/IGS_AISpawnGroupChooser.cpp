#include "IGS_AISpawnGroupChooser.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"

AIGS_AISpawnGroupChooser::AIGS_AISpawnGroupChooser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).AutomaticStart = true;
    (*this).EasyAmount = FInt32Range(FInt32RangeBound::Inclusive(0), FInt32RangeBound::Inclusive(0));
    (*this).MediumAmount = FInt32Range(FInt32RangeBound::Inclusive(0), FInt32RangeBound::Inclusive(0));
    (*this).HardAmount = FInt32Range(FInt32RangeBound::Inclusive(0), FInt32RangeBound::Inclusive(0));
    (*this).RootComponent = gen;
}

void AIGS_AISpawnGroupChooser::SpawnGroup() {
}

