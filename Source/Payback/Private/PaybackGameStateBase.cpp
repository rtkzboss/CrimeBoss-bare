#include "PaybackGameStateBase.h"
#include "IGS_AIGrenadeManager.h"
#include "IGS_DissolveManager.h"
#include "IGS_LootBagsManager.h"
#include "IGS_ObjectiveManager.h"
#include "IGS_PickupsManager.h"
#include "IGS_PlayerJoinManager.h"
#include "IGS_SuspicionManager.h"
#include "IGS_TextChatManager.h"
#include "IGS_WorldSpaceWidgetManager.h"
#include "IGS_NetworkComponentMusic.h"
#include "IGS_SubtitleManager.h"
#include "IGS_PropsManager.h"
#include "Net/UnrealNetwork.h"
#include "PaybackWaveManager.h"

APaybackGameStateBase::APaybackGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_SuspicionManager>(TEXT("Suspicion Manager"));
    auto gen2 = CreateDefaultSubobject<UIGS_DissolveManager>(TEXT("Dissolve Manager"));
    auto gen3 = CreateDefaultSubobject<UIGS_ObjectiveManager>(TEXT("Objective Manager"));
    auto gen4 = CreateDefaultSubobject<UIGS_TextChatManager>(TEXT("Text Chat Manager"));
    auto gen5 = CreateDefaultSubobject<UIGS_LootBagsManager>(TEXT("Loot Bags Manager"));
    auto gen6 = CreateDefaultSubobject<UIGS_WorldSpaceWidgetManager>(TEXT("World Space Widget Manager"));
    auto gen7 = CreateDefaultSubobject<UPaybackWaveManager>(TEXT("Wave Manager"));
    auto gen8 = CreateDefaultSubobject<UIGS_PlayerJoinManager>(TEXT("Join Manager"));
    auto gen9 = CreateDefaultSubobject<UIGS_SubtitleManager>(TEXT("Subtitle Manager 2"));
    auto gen10 = CreateDefaultSubobject<UIGS_AIGrenadeManager>(TEXT("AI Grenade Manager"));
    auto gen11 = CreateDefaultSubobject<UIGS_PropsManager>(TEXT("Props Manager"));
    auto gen12 = CreateDefaultSubobject<UIGS_NetworkComponentMusic>(TEXT("Music Component"));
    auto gen13 = CreateDefaultSubobject<UIGS_PickupsManager>(TEXT("Pickups Manager"));
    (*this).OnEndMissionCountdownPreCompleted = {};
    (*this).OnEndMissionCountdownCompleted = {};
    (*this).MoneyGoal = 1.000000000e+02f;
    (*this).MoneyGoalThresholdPercentage = 8.000000000e+01f;
    (*this).MatchState = TEXT("EnteringMap");
    (*this).PreviousMatchState = TEXT("EnteringMap");
    (*this).SuspicionManager = gen;
    (*this).DissolveManager = gen2;
    (*this).ObjectiveManager2 = gen3;
    (*this).TextChatManager = gen4;
    (*this).LootBagsManager = gen5;
    (*this).WorldSpaceWidgetManager = gen6;
    (*this).WaveManager = gen7;
    (*this).JoinManager = gen8;
    (*this).SubtitleManager = gen9;
    (*this).AIGrenadeManager = gen10;
    (*this).PropsManager = gen11;
    (*this).MusicComponent = gen12;
    (*this).PickupsManager = gen13;
    (*this).NetPriority = 5.000000000e+00f;
}


void APaybackGameStateBase::SetFinalDialogue(UObject* inWCO, const FText inID, AActor* inCharacter) {
}



void APaybackGameStateBase::OnRep_PlayersSpawned() {
}

void APaybackGameStateBase::OnRep_MatchState() {
}

void APaybackGameStateBase::OnRep_ElapsedTime() {
}




void APaybackGameStateBase::Multicast_PrepareRestart_Implementation() {
}

void APaybackGameStateBase::Multicast_OnServerTravel_Implementation() {
}



UIGS_TextChatManager* APaybackGameStateBase::GetTextChatManager() const {
    return nullptr;
}

UIGS_SuspicionManager* APaybackGameStateBase::GetSuspicionManager() const {
    return nullptr;
}

UIGS_SubtitleManager* APaybackGameStateBase::GetSubtitleManager() const {
    return nullptr;
}

UIGS_PropsManager* APaybackGameStateBase::GetPropsManager() const {
    return nullptr;
}

UIGS_ObjectiveManager* APaybackGameStateBase::GetObjectiveManager() const {
    return nullptr;
}

UIGS_LootBagsManager* APaybackGameStateBase::GetLootBagsManager() const {
    return nullptr;
}


void APaybackGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(APaybackGameStateBase, R_PlayersSpawned);
    DOREPLIFETIME(APaybackGameStateBase, MatchState);
    DOREPLIFETIME(APaybackGameStateBase, ElapsedTime);
}

