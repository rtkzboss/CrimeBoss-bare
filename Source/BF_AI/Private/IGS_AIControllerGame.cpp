#include "IGS_AIControllerGame.h"
#include "IGS_AIInitialSpawnDataComponent.h"
#include "IGS_AreaOfOperationsComponent.h"
#include "IGS_BehaviorTreeGameComponent.h"
#include "IGS_BlackboardGameComponent.h"
#include "IGS_ComplexPathFollowingComponent.h"
#include "IGS_NavLinkHandlerComponent.h"

AIGS_AIControllerGame::AIGS_AIControllerGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_ComplexPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    auto gen = CreateDefaultSubobject<UIGS_BlackboardGameComponent>(TEXT("BlackboardGameComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_BehaviorTreeGameComponent>(TEXT("BehaviorTreeGameComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_AreaOfOperationsComponent>(TEXT("AreaOf Operations Component"));
    auto gen4 = CreateDefaultSubobject<UIGS_NavLinkHandlerComponent>(TEXT("NavLink Handler Component"));
    auto gen5 = CreateDefaultSubobject<UIGS_AIInitialSpawnDataComponent>(TEXT("Initial Spawn Data Component"));
    (*this).MaxCornerOffset = 6.000000000e+01f;
    (*this).BlackboardGameComponent = gen;
    (*this).BehaviorTreeGameComponent = gen2;
    (*this).AreaOfOperationsComponent = gen3;
    (*this).NavLinkHandlerComponent = gen4;
    (*this).InitialSpawnDataComponent = gen5;
}

void AIGS_AIControllerGame::SetScriptingPostponed(bool InValue) {
}

void AIGS_AIControllerGame::SetCornerOffset(float Value) {
}

void AIGS_AIControllerGame::ReportReload(bool inIsCombat, bool isEmptyMagazine) {
}

void AIGS_AIControllerGame::RandomizedReladAmmoUsed() {
}

void AIGS_AIControllerGame::OnStartedPlayingMatch() {
}

bool AIGS_AIControllerGame::IsSOScopeValid() {
    return false;
}

bool AIGS_AIControllerGame::IsScriptingPosponed() const {
    return false;
}

int32 AIGS_AIControllerGame::GetReloadRequireAmmoUsed() const {
    return 0;
}

UIGS_AISuspiciousnessComponentBase* AIGS_AIControllerGame::GetOptionalAISuspiciousnessComponent() const {
    return nullptr;
}

UIGS_AIDetectionComponent* AIGS_AIControllerGame::GetOptionalAIDetectionComponent() const {
    return nullptr;
}

UIGS_NavLinkHandlerComponent* AIGS_AIControllerGame::GetNavlinkHandlerComponent() const {
    return nullptr;
}

float AIGS_AIControllerGame::GetCornerOffsetMin() const {
    return 0.000000000e+00f;
}

float AIGS_AIControllerGame::GetCornerOffsetMax() const {
    return 0.000000000e+00f;
}

float AIGS_AIControllerGame::GetCombatRangePrefered() const {
    return 0.000000000e+00f;
}

int32 AIGS_AIControllerGame::GetAmmoUsedSinceLastReload() const {
    return 0;
}

void AIGS_AIControllerGame::ForceLeaveWaypoint() {
}

