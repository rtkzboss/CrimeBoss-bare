#include "BTDecorator_MoveToCoverSequence.h"

UBTDecorator_MoveToCoverSequence::UBTDecorator_MoveToCoverSequence() {
    (*this).ReactToThreathKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)) = 255;
    auto gen2 = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("bNoneIsAllowedValue");
    CastField<FBoolProperty>(gen2)->SetPropertyValue(&(*gen2->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)), true);
    (*this).UpdateCoverKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).UpdateCoverKey, 0)) = 255;
    (*this).BestCoverKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    (*this).CoverKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CoverKey, 0)) = 255;
    (*this).MoveToPositionKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).MoveToPositionKey, 0)) = 255;
    (*this).IsDodgingKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).IsDodgingKey, 0)) = 255;
    (*this).m_RefreshTimeStartMin = 1.000000000e+00f;
    (*this).m_RefreshTimeStartMax = 1.500000000e+00f;
    (*this).m_RefreshTimeMin = 3.000000119e-01f;
    (*this).m_RefreshTimeMax = 5.000000000e-01f;
    (*this).m_CancelOnThreathReaction = true;
    (*this).m_ReactionDefaultTime = 5.000000000e-01f;
    (*this).NodeName = TEXT("Move To Cover Sequence");
}

