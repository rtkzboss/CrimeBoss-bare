#pragma once
#include "CoreMinimal.h"
#include "CarExitPointsPair.generated.h"

USTRUCT(BlueprintType)
struct FCarExitPointsPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Left;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Right;

    BF_RIDEABLEVEHICLES_API FCarExitPointsPair();
};
