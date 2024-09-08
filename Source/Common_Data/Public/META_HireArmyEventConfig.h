#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_HireArmyEventConfig.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HireArmyEventConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval SoldierHireAmountPerHireEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldBeClampedByArmyCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ClampedMinimumArmy;
    
    FMETA_HireArmyEventConfig();
};

