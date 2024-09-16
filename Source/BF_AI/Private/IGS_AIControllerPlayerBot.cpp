#include "IGS_AIControllerPlayerBot.h"
#include "IGS_AIPlayerBotSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"
#include "IGS_PlayerBotControllerComponent.h"
#include "IGS_ScriptableBehaviorComponentBot.h"

AIGS_AIControllerPlayerBot::AIGS_AIControllerPlayerBot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_ScriptableBehaviorComponentBot>(TEXT("Scriptable Behavior"))) {
    auto gen = CreateDefaultSubobject<UIGS_PlayerBotControllerComponent>(TEXT("m_PlayerBotComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    auto gen4 = CreateDefaultSubobject<UIGS_AIPlayerBotSettingsComponent>(TEXT("SettingsComponent"));
    (*this).m_PlayerBotComponent = gen;
    (*this).AggroHandlerComponent = gen2;
    (*this).ThreatComponent = gen3;
    (*this).SettingsComponent = gen4;
    (*this).bWantsPlayerState = true;
}

