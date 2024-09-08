#pragma once
#include "CoreMinimal.h"
#include "IKProperties.generated.h"

USTRUCT(BlueprintType)
struct FIKProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnableIK;
    
    UPROPERTY(EditAnywhere)
    FName FootSocketName;
    
    UPROPERTY(EditAnywhere)
    FName EffectorTarget;
    
    UPROPERTY(EditAnywhere)
    float DistanceSmoothness;
    
    UPROPERTY(EditAnywhere)
    bool bDoFootRotation;
    
    UPROPERTY(EditAnywhere)
    float StabilizeGroundNormal;
    
    UPROPERTY(EditAnywhere)
    float FootRotationSmoothness;
    
    UPROPERTY(EditAnywhere)
    FName StabilizationCurveName;
    
    UPROPERTY(EditAnywhere)
    FName AnkleOffsetCurveName;
    
    UPROPERTY(EditAnywhere)
    float StabilizationCurveTreshold;
    
    UPROPERTY(EditAnywhere)
    float StabilizationSmoothness;
    
    BF_ANIMATIONS_API FIKProperties();
};

