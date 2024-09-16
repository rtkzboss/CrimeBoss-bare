#include "BTTask_SetRoationFromDefendPoint.h"

UBTTask_SetRoationFromDefendPoint::UBTTask_SetRoationFromDefendPoint() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).LookPosKey, 0)) = 255;
    (*this).NodeName = TEXT("Set Roation From Defend Point");
}

