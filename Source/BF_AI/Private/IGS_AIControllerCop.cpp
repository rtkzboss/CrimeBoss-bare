#include "IGS_AIControllerCop.h"
#include "IGS_AICopSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerCop::AIGS_AIControllerCop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_AICopSettingsComponent>(TEXT("SettingsComponent"));
    (*this).AggroHandlerComponent = gen;
    (*this).ThreatComponent = gen2;
    (*this).SettingsComponent = gen3;
}

