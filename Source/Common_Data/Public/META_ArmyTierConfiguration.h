#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_HireArmyEventConfig.h"
#include "META_ArmyTierConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_ArmyTierConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoldierCostMultiplierForAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoldierCostMultiplierForAttackNeutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoldierCostMultiplierForDefense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SoldierUpkeepCost;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SoldierHireCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoldierHireCostMultiplierInPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_HireArmyEventConfig HireArmyEventConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval HireEventDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HireEventDurationTime;
    
    FMETA_ArmyTierConfiguration();
};

