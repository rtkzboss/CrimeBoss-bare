#include "IGS_SentryControllerBase.h"
#include "Perception/AIPerceptionComponent.h"
#include "IGS_BehaviorTreeGameComponent.h"
#include "IGS_BlackboardGameComponent.h"
#include "IGS_SentryAggroComponent.h"
#include "IGS_SentryMemoryComponent.h"
#include "IGS_SentryPerceptionComponent.h"

AIGS_SentryControllerBase::AIGS_SentryControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_SentryMemoryComponent>(TEXT("SentryMemory"));
    auto gen2 = CreateDefaultSubobject<UIGS_SentryAggroComponent>(TEXT("SentryAggro"));
    auto gen3 = CreateDefaultSubobject<UIGS_SentryPerceptionComponent>(TEXT("SentryPerception"));
    auto gen4 = CreateDefaultSubobject<UIGS_BlackboardGameComponent>(TEXT("BlackboardGameComponent"));
    auto gen5 = CreateDefaultSubobject<UIGS_BehaviorTreeGameComponent>(TEXT("BehaviorTreeGameComponent"));
    auto gen6 = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
    (*this).SquadID = 118999881;
    (*this).Memory = gen;
    (*this).Aggro = gen2;
    (*this).Perception = gen3;
    (*this).BlackboardGameComponent = gen4;
    (*this).BehaviorTreeGameComponent = gen5;
    (*this).PerceptionComponent = gen6;
}

