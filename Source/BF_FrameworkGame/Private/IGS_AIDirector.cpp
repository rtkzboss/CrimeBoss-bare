#include "IGS_AIDirector.h"
#include "IGS_AIDifficultyManager.h"
#include "IGS_AIEventsDispatcher.h"
#include "IGS_AIPointManager.h"
#include "IGS_AISpawner.h"
#include "IGS_AmbientLifeManager.h"
#include "IGS_CombatSettingsManager.h"
#include "IGS_DefendManager.h"
#include "IGS_DetectionManager.h"
#include "IGS_MountedWeaponManager.h"
#include "IGS_PressureManager.h"
#include "IGS_TrafficManager.h"

UIGS_AIDirector::UIGS_AIDirector() {
    auto gen = CreateDefaultSubobject<UIGS_AISpawner>(TEXT("AI Spawner"));
    auto gen2 = CreateDefaultSubobject<UIGS_PressureManager>(TEXT("Pressure Manager"));
    auto gen3 = CreateDefaultSubobject<UIGS_AIEventsDispatcher>(TEXT("AI Event Dispatcher"));
    auto gen4 = CreateDefaultSubobject<UIGS_AmbientLifeManager>(TEXT("Ambient Life Manager"));
    auto gen5 = CreateDefaultSubobject<UIGS_DefendManager>(TEXT("Defend Manager"));
    auto gen6 = CreateDefaultSubobject<UIGS_DetectionManager>(TEXT("Detection Manager"));
    auto gen7 = CreateDefaultSubobject<UIGS_MountedWeaponManager>(TEXT("Mounted Weapon Manager"));
    auto gen8 = CreateDefaultSubobject<UIGS_AIPointManager>(TEXT("AIPoint Manager"));
    auto gen9 = CreateDefaultSubobject<UIGS_TrafficManager>(TEXT("Traffic Manager"));
    auto gen10 = CreateDefaultSubobject<UIGS_AIDifficultyManager>(TEXT("AI Difficulty Manager"));
    auto gen11 = CreateDefaultSubobject<UIGS_CombatSettingsManager>(TEXT("Combat Settings Manager"));
    (*this).m_AISpawner = gen;
    (*this).m_PressureManager = gen2;
    (*this).m_AIEventsDispatcher = gen3;
    (*this).m_AmbientLifeManager = gen4;
    (*this).m_DefendManager = gen5;
    (*this).m_DetectionManager = gen6;
    (*this).m_MountedWeaponManager = gen7;
    (*this).m_AIPointsManager = gen8;
    (*this).m_TrafficManager = gen9;
    (*this).m_AIDifficultyManager = gen10;
    (*this).m_CombatSettingsManager = gen11;
}

void UIGS_AIDirector::SetGlobalAggro(AActor* inActor, float InFloat, const AActor* inInstigator) {
}

void UIGS_AIDirector::RemoveGlobalAggroEntry(AActor* inActor) {
}

UIGS_WaveManager* UIGS_AIDirector::GetWaveManager() {
    return nullptr;
}

UIGS_TrafficManager* UIGS_AIDirector::GetTrafficManager() const {
    return nullptr;
}

UIGS_PressureManager* UIGS_AIDirector::GetPressureManager() const {
    return nullptr;
}

UIGS_MountedWeaponManager* UIGS_AIDirector::GetMountedWeaponManager() const {
    return nullptr;
}

float UIGS_AIDirector::GetGlobalAggro(const AActor* inActor, const AActor* inInstigator) const {
    return 0.000000000e+00f;
}

UIGS_DetectionManager* UIGS_AIDirector::GetDetectionManager() const {
    return nullptr;
}

UIGS_DefendManager* UIGS_AIDirector::GetDefendManager() const {
    return nullptr;
}

AIGS_ControlRoomBase* UIGS_AIDirector::GetControlRoomForSquad(int32 inSquadID) {
    return nullptr;
}

UIGS_GuardControlRoomComponentBase* UIGS_AIDirector::GetControlRoomComponentForSquad(int32 inSquadID) {
    return nullptr;
}

UIGS_CombatSettingsManager* UIGS_AIDirector::GetCombatSettingsManager() const {
    return nullptr;
}

UIGS_AmbientLifeManager* UIGS_AIDirector::GetAmbientLifeManager() const {
    return nullptr;
}

UIGS_AISpawner* UIGS_AIDirector::GetAISpawner() const {
    return nullptr;
}

UIGS_AIPointManager* UIGS_AIDirector::GetAIPointsManager() const {
    return nullptr;
}

UIGS_AIEventsDispatcher* UIGS_AIDirector::GetAIEventsDispatcher() const {
    return nullptr;
}

UIGS_AIDifficultyManager* UIGS_AIDirector::GetAIDifficultyManager() const {
    return nullptr;
}

