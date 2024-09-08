#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "EMETA_TileWealth.h"
#include "META_BossEliminationRewardData.h"
#include "META_TileRewardData.h"
#include "META_TileSaveData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_TileSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Gang CurrentGang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Gang ConquestState;
    
    UPROPERTY()
    int32 MinAmountOfSoldiersForAttack;
    
    UPROPERTY()
    int32 MinAmountOfSoldiersForDefence;
    
    UPROPERTY()
    int32 CurrentStrength;
    
    UPROPERTY()
    bool WeaknessLowerTier;
    
    UPROPERTY()
    int32 CurrentWeakness;
    
    UPROPERTY()
    int32 WeaknessExpireDays;
    
    UPROPERTY()
    int32 CounterOfCapturesByPlayer;
    
    UPROPERTY()
    int32 CountdownForAttackAfterLost;
    
    UPROPERTY()
    EMETA_TileWealth Wealth;
    
    UPROPERTY()
    TArray<FMETA_TileRewardData> CaptureRewards;
    
    UPROPERTY()
    TArray<FMETA_BossEliminationRewardData> BossEliminationRewards;
    
    UPROPERTY()
    float IncomeMultiplier;
    
    UPROPERTY()
    FGameplayTag IncomeLootItem;
    
    FMETA_TileSaveData();
};

