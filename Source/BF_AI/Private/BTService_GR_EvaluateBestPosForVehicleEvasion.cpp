#include "BTService_GR_EvaluateBestPosForVehicleEvasion.h"

UBTService_GR_EvaluateBestPosForVehicleEvasion::UBTService_GR_EvaluateBestPosForVehicleEvasion() {
    (*this).GeneralReactionDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).BestEvadePosKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestEvadePosKey, 0)) = 255;
    (*this).EvadePulse = 3.500000000e+02f;
    (*this).MinEvadeDistance = 1.000000000e+02f;
    (*this).RayCastDegreesStep = 3.000000000e+01f;
    (*this).MaxRayCasts = 10;
    (*this).NodeName = TEXT("Best Evade Pos to BB for GR-Danger-Vehicle");
}

