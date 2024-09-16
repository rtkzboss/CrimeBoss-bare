#include "IGS_BTTask_MoveToMelee.h"

UIGS_BTTask_MoveToMelee::UIGS_BTTask_MoveToMelee() {
    (*this).BattleTarget.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BattleTarget, 0)) = 255;
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move To Melee");
}

