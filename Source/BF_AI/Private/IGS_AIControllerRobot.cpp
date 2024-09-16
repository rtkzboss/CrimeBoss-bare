#include "IGS_AIControllerRobot.h"
#include "IGS_AIRobotSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerRobot::AIGS_AIControllerRobot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_AIRobotSettingsComponent>(TEXT("SettingsComponent"));
    (*this).AggroHandlerComponent = gen;
    (*this).ThreatComponent = gen2;
    (*this).SettingsComponent = gen3;
}

