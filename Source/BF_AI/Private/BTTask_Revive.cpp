#include "BTTask_Revive.h"

UBTTask_Revive::UBTTask_Revive() {
    (*this).CharToReviveKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CharToReviveKey, 0)) = 255;
    (*this).DistanceToMove = 1.500000000e+02f;
    (*this).DistanceToStop = 5.000000000e+01f;
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).bDontUsePathLengthLimiter = true;
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Revive");
}

