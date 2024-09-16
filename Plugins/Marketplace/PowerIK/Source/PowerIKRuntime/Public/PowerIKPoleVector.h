#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPoleVectorModeEnum.h"
#include "PowerIKPoleVector.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKPoleVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EPoleVectorModeEnum> Mode;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector Position;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BoneName;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float AngleOffset;

    FPowerIKPoleVector();
};
