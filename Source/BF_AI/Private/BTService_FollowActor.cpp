#include "BTService_FollowActor.h"

UBTService_FollowActor::UBTService_FollowActor() {
    (*this).OutFollowActorKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OutFollowActorKey, 0)) = 255;
    (*this).OutFollowDistanceKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OutFollowDistanceKey, 0)) = 255;
    (*this).NodeName = TEXT("Follow Actor");
}

