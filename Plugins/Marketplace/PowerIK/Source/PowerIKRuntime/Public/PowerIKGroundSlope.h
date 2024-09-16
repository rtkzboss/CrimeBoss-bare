#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PowerIKGroundSlope.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKGroundSlope {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector StrideDirection;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxGroundAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxNormalAngularSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OrientToGround;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OrientToPitch;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OrientToRoll;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ScaleStride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UphillStrideScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DownhillStrideScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SidehillStrideScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SidehillPushOuterFeet;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Lean;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UphillLean;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DownhillLean;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SidehillLean;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CounterLean;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName CounterLeanBoneName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UphillCounterLean;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DownhillCounterLean;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SidehillCounterLean;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MoveRoot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UphillVertOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UphillHorizOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DownhillVertOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DownhillHorizOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SidehillHorizOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SidehillVertOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RotateFootToGround;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchFootAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollFootAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootAngleDeltaSmoothSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OffsetFeetPositions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StaticFootOffset;

    FPowerIKGroundSlope();
};
