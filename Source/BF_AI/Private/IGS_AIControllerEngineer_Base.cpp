#include "IGS_AIControllerEngineer_Base.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerEngineer_Base::AIGS_AIControllerEngineer_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    (*this).AggroHandlerComponent = gen;
    (*this).ThreatComponent = gen2;
}

