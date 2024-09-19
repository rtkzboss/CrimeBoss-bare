#include "IGS_InteractionTileBase.h"

UIGS_InteractionTileBase::UIGS_InteractionTileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SetIsReplicatedByDefault(true);
}

