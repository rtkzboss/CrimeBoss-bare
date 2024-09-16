#include "IGS_BTTask_MoveToBase.h"

UIGS_BTTask_MoveToBase::UIGS_BTTask_MoveToBase() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).LookPosKey, 0)) = 255;
    auto gen2 = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("bNoneIsAllowedValue");
    CastField<FBoolProperty>(gen2)->SetPropertyValue(&(*gen2->ContainerPtrToValuePtr<uint8>(&(*this).LookPosKey, 0)), true);
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).AcceptableRadiusKey, 0)) = 255;
    CastField<FBoolProperty>(gen2)->SetPropertyValue(&(*gen2->ContainerPtrToValuePtr<uint8>(&(*this).AcceptableRadiusKey, 0)), true);
    (*this).m_MovingCharacterVsHeistersCollisionStatus = EIGS_CharacterVsHeistersCollisionStatus::CharacterIgnoringPlayers;
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
}

