#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_Gang.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_RandEventReward.h"
#include "META_RandEventRewardRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_RandEventRewardRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RandEventReward RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CashValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag LootItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LootMonetaryValuer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Soldiers;
    
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
    int32 AmountOfTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AttitudeChangeForAmountOfLvls;
    
    FMETA_RandEventRewardRuntimeData();
};

