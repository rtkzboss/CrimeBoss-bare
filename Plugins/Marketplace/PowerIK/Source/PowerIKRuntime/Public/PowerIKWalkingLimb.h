#pragma once
#include "CoreMinimal.h"
#include "PowerIKWalkingLimb.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKWalkingLimb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName StartBone;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName EndBone;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LimbMaxLengthMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StepLengthMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StepDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StepHeight;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<int32> RelatedLimbs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotateFootToGround;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float FootCollisionRadius;

    FPowerIKWalkingLimb();
};
