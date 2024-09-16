#include "IGS_VehicleLooper.h"
#include "Components/SceneComponent.h"

AIGS_VehicleLooper::AIGS_VehicleLooper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).MaxLoopLenght = 1.000000000e+06f;
    (*this).PrefferedLoopLenght = 2.000000000e+03f;
    (*this).RootComponent = gen;
}

void AIGS_VehicleLooper::StartLooping(AIGS_VehicleBase* Vehicle) {
}

