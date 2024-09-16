#include "IGS_RotatingLaserTrap.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"

AIGS_RotatingLaserTrap::AIGS_RotatingLaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("ExtraRootObject"));
    auto gen2 = CreateDefaultSubobject<UArrowComponent>(TEXT("RotationStartPoint"));
    auto gen3 = CreateDefaultSubobject<UArrowComponent>(TEXT("RotationEndPoint"));
    (*this).ExtraRootObject = gen;
    (*this).RotationStartPoint = gen2;
    (*this).RotationEndPoint = gen3;
    (*this).Looping = true;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen);
}

void AIGS_RotatingLaserTrap::TickTimelineUpdate(float InValue) {
}

void AIGS_RotatingLaserTrap::TickTimelineFinished() {
}

