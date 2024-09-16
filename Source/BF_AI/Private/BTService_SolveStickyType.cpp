#include "BTService_SolveStickyType.h"

UBTService_SolveStickyType::UBTService_SolveStickyType() {
    (*this).StickyTypeKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).StickyTypeKey, 0)) = 255;
    (*this).OutStickyCharacterKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OutStickyCharacterKey, 0)) = 255;
    (*this).AllowStickyMove = true;
    (*this).StickyMoveChance = 7.500000000e-01f;
    (*this).InvalidTimeCommon.Min = 1.000000000e+01f;
    (*this).InvalidTimeCommon.Max = 1.500000000e+01f;
    (*this).InvalidTimeOutside.Min = 5.000000000e+00f;
    (*this).InvalidTimeOutside.Max = 8.000000000e+00f;
    (*this).NodeName = TEXT("Solve Sticky Type");
}

