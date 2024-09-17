#include "IGS_LockComponent.h"

UIGS_LockComponent::UIGS_LockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).KeyRoomType = EIGS_RoomType::Street;
    (*this).UniqueKeyID = -1;
    (*this).SetIsReplicated(true);
}

void UIGS_LockComponent::SetLockState(bool inLocked) {
}

bool UIGS_LockComponent::GetLockState() const {
    return false;
}

void UIGS_LockComponent::GetLockedStateForPlayer(AIGS_GameCharacterFramework* inInstigator, EIGS_PlayerLockState& outBranches) {
}

