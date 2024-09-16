#include "IGS_AIControllerScout_Base.h"
#include "IGS_AIScoutSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerScout_Base::AIGS_AIControllerScout_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_AIScoutSettingsComponent>(TEXT("SettingsComponent"));
    (*this).AggroHandlerComponent = gen;
    (*this).ThreatComponent = gen2;
    (*this).SettingsComponent = gen3;
}

