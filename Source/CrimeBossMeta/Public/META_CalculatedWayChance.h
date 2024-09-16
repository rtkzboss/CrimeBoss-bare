#pragma once
#include "CoreMinimal.h"
#include "META_CalculatedWayChance.generated.h"

USTRUCT()
struct FMETA_CalculatedWayChance {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NodeId;

    UPROPERTY()
    int32 LeftValue;

    UPROPERTY()
    int32 RightValue;

    CRIMEBOSSMETA_API FMETA_CalculatedWayChance();
};
