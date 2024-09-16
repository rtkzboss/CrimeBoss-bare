#include "BTService_SwitchToMelee.h"

UBTService_SwitchToMelee::UBTService_SwitchToMelee() {
    (*this).UseMeleeKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).UseMeleeKey, 0)) = 255;
    (*this).ExtraDistanceFromRangeToStopMelee = 4.000000000e+02f;
    (*this).ExtraDistanceFromRangeToStopBash = 1.000000000e+02f;
    (*this).NodeName = TEXT("Switch To Melee");
}

