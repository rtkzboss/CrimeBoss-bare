#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_Gang.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_RandEventReward.h"
#include "META_FloatInterval.h"
#include "META_Interval.h"
#include "META_IntervalWithChance.h"
#include "META_RandEventReward.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_RandEventReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RandEventReward RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_FloatInterval MissionRewardMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag LootItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_FloatInterval LootCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval Soldiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterID NewHeisterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality Quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeatChangeForAmountOfLvls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InvestigationProgressValueChangeForPercents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Gang TargetGang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_IntervalWithChance AmountOfTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AttitudeChangeForAmountOfLvls;
    
    FMETA_RandEventReward();
};

