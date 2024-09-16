#include "IGS_AIControllerBase.h"
#include "Perception/AIPerceptionComponent.h"
#include "IGS_AIDataComponent.h"
#include "IGS_AIGeneralReactionsManager.h"
#include "IGS_AIMemoryComponent.h"
#include "IGS_AIPerceptionHandlerComponent.h"
#include "IGS_InjuryComponentAI.h"
#include "IGS_ScriptableBehaviorComponent.h"

AIGS_AIControllerBase::AIGS_AIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_AIPerceptionHandlerComponent>(TEXT("AIPerceptionHandlerComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_AIMemoryComponent>(TEXT("AIMemoryComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_InjuryComponentAI>(TEXT("AIInjuryComponenet"));
    auto gen4 = CreateDefaultSubobject<UIGS_ScriptableBehaviorComponent>(TEXT("Scriptable Behavior"));
    auto gen5 = CreateDefaultSubobject<UIGS_AIDataComponent>(TEXT("AIDataComponent"));
    auto gen6 = CreateDefaultSubobject<UIGS_AIGeneralReactionsManager>(TEXT("AIReactionManagerComponent"));
    auto gen7 = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).PerceptionHandlerComponent = gen;
    (*this).MemoryComponent = gen2;
    (*this).InjuryComponent = gen3;
    (*this).ScriptableBehaviorComponent = gen4;
    (*this).AIDataComponent = gen5;
    (*this).GeneralReactionsManagerComponent = gen6;
    (*this).PerceptionComponent = gen7;
}

void AIGS_AIControllerBase::SetSOScope(uint8 scope) {
}

void AIGS_AIControllerBase::SetSOCommand(UIGS_AICommand* inAICommand) {
}

void AIGS_AIControllerBase::SetLookAtPoint(FIGS_InterestPointHolder inInterestPoint) const {
}

void AIGS_AIControllerBase::SetImportnatLocation(FVector Location, EIGS_ImportantLocationsPriorities prority) {
}

void AIGS_AIControllerBase::SetFacePoint(FIGS_InterestPointHolder inInterestPoint, bool inForcePoint) const {
}

void AIGS_AIControllerBase::SetAllInterestPoints(FIGS_InterestPointHolder inInterestPoint, bool inForceFacePoint) const {
}

void AIGS_AIControllerBase::SetAimAtPoint(FIGS_InterestPointHolder inInterestPoint) const {
}

void AIGS_AIControllerBase::SetAICommand(UIGS_AICommand* inAICommand) {
}

void AIGS_AIControllerBase::OnTeleported() {
}

bool AIGS_AIControllerBase::IsBusy() {
    return false;
}

uint8 AIGS_AIControllerBase::GetSOScope() {
    return 0;
}

UIGS_AICommand* AIGS_AIControllerBase::GetSOCommand() const {
    return nullptr;
}

FIGS_InterestPointHolder AIGS_AIControllerBase::GetLookAtPoint() const {
    return FIGS_InterestPointHolder{};
}

FVector AIGS_AIControllerBase::GetImportnatLocationForPrority(EIGS_ImportantLocationsPriorities InPriority) {
    return FVector{};
}

FVector AIGS_AIControllerBase::GetImportnatLocation() {
    return FVector{};
}

FIGS_InterestPointHolder AIGS_AIControllerBase::GetFacePoint() const {
    return FIGS_InterestPointHolder{};
}

FIGS_InterestPointHolder AIGS_AIControllerBase::GetAimAtPoint() const {
    return FIGS_InterestPointHolder{};
}

UIGS_AICommand* AIGS_AIControllerBase::GetAICommand() const {
    return nullptr;
}

void AIGS_AIControllerBase::ClearImportnatLocation(EIGS_ImportantLocationsPriorities prority) {
}

