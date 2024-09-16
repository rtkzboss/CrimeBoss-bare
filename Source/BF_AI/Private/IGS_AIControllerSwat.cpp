#include "IGS_AIControllerSwat.h"
#include "IGS_AISwatSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerSwat::AIGS_AIControllerSwat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_AISwatSettingsComponent>(TEXT("SettingsComponent"));
    (*this).AggroHandlerComponent = gen;
    (*this).ThreatComponent = gen2;
    (*this).SettingsComponent = gen3;
}

