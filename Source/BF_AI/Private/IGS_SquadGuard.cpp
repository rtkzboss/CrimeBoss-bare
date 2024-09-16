#include "IGS_SquadGuard.h"
#include "IGS_GuardControlRoomComponent.h"

AIGS_SquadGuard::AIGS_SquadGuard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_GuardControlRoomComponent>(TEXT("GuardControlRoomComponent"));
    (*this).GuardControlRoomComponent = gen;
}

UIGS_GuardControlRoomComponent* AIGS_SquadGuard::GetGuardControlRoomComponent() const {
    return nullptr;
}

