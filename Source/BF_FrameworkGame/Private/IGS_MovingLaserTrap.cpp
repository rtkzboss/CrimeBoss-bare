#include "IGS_MovingLaserTrap.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"

AIGS_MovingLaserTrap::AIGS_MovingLaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("ExtraRootObject"));
    auto gen2 = CreateDefaultSubobject<UArrowComponent>(TEXT("TransitEndPosition"));
    (*this).ExtraRootObject = gen;
    (*this).RootObjectEnd = gen2;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
}

void AIGS_MovingLaserTrap::TickTimelineUpdate(float InValue) {
}

void AIGS_MovingLaserTrap::TickTimelineFinished() {
}

