#include "IGS_LevelSequenceActorBase.h"
#include "Net/UnrealNetwork.h"

AIGS_LevelSequenceActorBase::AIGS_LevelSequenceActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bAlwaysRelevant = true;
}

void AIGS_LevelSequenceActorBase::SetSequenceToLastFrame() {
}

void AIGS_LevelSequenceActorBase::PlaySequence() {
}

void AIGS_LevelSequenceActorBase::OnSequenceFinished() {
}

void AIGS_LevelSequenceActorBase::OnRep_SequenceStarted() {
}

void AIGS_LevelSequenceActorBase::OnRep_SequenceFinished() {
}

void AIGS_LevelSequenceActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_LevelSequenceActorBase, mbR_SequenceStarted);
    DOREPLIFETIME(AIGS_LevelSequenceActorBase, mbR_SequenceFinished);
}

