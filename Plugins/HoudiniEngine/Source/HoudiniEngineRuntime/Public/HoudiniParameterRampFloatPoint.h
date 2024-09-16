#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHoudiniRampInterpolationType.h"
#include "HoudiniParameterRampFloatPoint.generated.h"

class UHoudiniParameterChoice;
class UHoudiniParameterFloat;

UCLASS(DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampFloatPoint : public UObject {
    GENERATED_BODY()
public:
    UHoudiniParameterRampFloatPoint();

    UPROPERTY()
    float Position;

    UPROPERTY()
    float Value;

    UPROPERTY()
    EHoudiniRampInterpolationType Interpolation;

    UPROPERTY()
    int32 InstanceIndex;

    UPROPERTY(Instanced)
    UHoudiniParameterFloat* PositionParentParm;

    UPROPERTY(Instanced)
    UHoudiniParameterFloat* ValueParentParm;

    UPROPERTY(Instanced)
    UHoudiniParameterChoice* InterpolationParentParm;

};
