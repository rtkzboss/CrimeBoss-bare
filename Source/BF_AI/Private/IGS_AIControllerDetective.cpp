#include "IGS_AIControllerDetective.h"
#include "IGS_AIDetectiveSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"
#include "Templates/SubclassOf.h"

AIGS_AIControllerDetective::AIGS_AIControllerDetective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_AIDetectiveSettingsComponent>(TEXT("SettingsComponent"));
    (*this).CurrentDownstateHealth = -1.000000000e+00f;
    (*this).CurrentRevivesLeft = -1;
    (*this).MaxDownstateHealth = -1.000000000e+00f;
    (*this).GetUpTime.Min = -1.000000000e+00f;
    (*this).GetUpTime.Max = -1.000000000e+00f;
    (*this).RevivesToRetreat = 3;
    (*this).AggroHandlerComponent = gen;
    (*this).ThreatComponent = gen2;
    (*this).SettingsComponent = gen3;
}

TSubclassOf<UMETA_DetectiveID> AIGS_AIControllerDetective::GetDetectiveID() const {
    return nullptr;
}

