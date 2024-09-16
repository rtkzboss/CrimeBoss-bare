#include "IGS_SquadBase.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AIGS_SquadBase::AIGS_SquadBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
    auto gen2 = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
    (*this).BehaviorTreeComponent = gen;
    (*this).BlackboardComponent = gen2;
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
}

void AIGS_SquadBase::Notify(EIGS_AINotif Type, AIGS_GameCharacterFramework* caller, AIGS_GameCharacterFramework* Target, FVector Pos, FVector dir) const {
}

FVector AIGS_SquadBase::GetSquadMeanLocation() const {
    return FVector{};
}

AIGS_GameCharacterFramework* AIGS_SquadBase::GetRandomMember() const {
    return nullptr;
}

AIGS_GameCharacterFramework* AIGS_SquadBase::GetNearestMember(FVector Pos, TArray<AIGS_GameCharacterFramework*> excludeCharacters) const {
    return nullptr;
}

AIGS_GameCharacterFramework* AIGS_SquadBase::GetNearestAliveMember(FVector Pos, TArray<AIGS_GameCharacterFramework*> excludeCharacters) const {
    return nullptr;
}

AIGS_GameCharacterFramework* AIGS_SquadBase::GetCenterMember() const {
    return nullptr;
}

