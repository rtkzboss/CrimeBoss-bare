#include "BTService_GR_TrackGrenade.h"

UBTService_GR_TrackGrenade::UBTService_GR_TrackGrenade() {
    (*this).GeneralReactionDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).GrenadeActorKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).GrenadeActorKey, 0)) = 255;
    (*this).SafePeriod = 1.000000000e+00f;
    (*this).NodeName = TEXT("GlobalReaction - Track Grenade");
}

