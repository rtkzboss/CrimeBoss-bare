#include "BTService_GR_EvaluateBestPosForVehicleEvasion.h"
#include "IGS_GeneralReactionData_Base.h"

UBTService_GR_EvaluateBestPosForVehicleEvasion::UBTService_GR_EvaluateBestPosForVehicleEvasion() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("GeneralReactionDataKey_Object_2147482579"), UIGS_GeneralReactionData_Base::StaticClass());
    (*this).GeneralReactionDataKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("BestEvadePosKey"));
    (*this).BestEvadePosKey = gen2;
    (*this).EvadePulse = 3.500000000e+02f;
    (*this).MinEvadeDistance = 1.000000000e+02f;
    (*this).RayCastDegreesStep = 3.000000000e+01f;
    (*this).MaxRayCasts = 10;
    (*this).NodeName = TEXT("Best Evade Pos to BB for GR-Danger-Vehicle");
}

