#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EEffectorSpaceEnum.h"
#include "PowerIKPoleVector.h"
#include "PowerIKSmoothing.h"
#include "PowerIKEffector.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKEffector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEffectorSpaceEnum> PositionSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEffectorSpaceEnum> RotationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PullWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NormalizePulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PositivePullFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NegativePullFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RotateBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RotateLimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DeltaSmoothSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularDeltaSmoothSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPowerIKSmoothing Smoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPowerIKPoleVector PoleVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AffectsCenterOfGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    FPowerIKEffector();
};

