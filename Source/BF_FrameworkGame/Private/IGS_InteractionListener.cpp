#include "IGS_InteractionListener.h"

UIGS_InteractionListener::UIGS_InteractionListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).SetIsReplicatedByDefault(true);
}

