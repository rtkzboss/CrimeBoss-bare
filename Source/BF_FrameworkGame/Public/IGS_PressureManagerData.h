#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpawnIntensitySetup.h"
#include "IGS_PressureManagerData.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_PressureManagerData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsEnabledForHeist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExpectedIntensityPoliceBadgeDefault;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExpectedIntensityPoliceBadge1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExpectedIntensityPoliceBadge2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExpectedIntensityPoliceBadge3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExpectedIntensityPoliceBadge4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExpectedIntensityPoliceBadge5;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsEnabledForWarzone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExpectedIntensityWarzoneDefault;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExpectedIntensityWarzoneArmyStrengt1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExpectedIntensityWarzoneArmyStrengt2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExpectedIntensityWarzoneArmyStrengt3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RatioToIncreaseIntensityByTwo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RatioToIncreaseIntensityByOne;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RatioToDecreaseIntensityByOne;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RatioToDecreaseIntensityByTwo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageDealtToPlayerCoef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageDealtToBotCoef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BotDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnemyKilledByPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnemyKilledByBot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IntensityCheckIntervalStartDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IntensityCheckInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HistoryInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnIntensitySetup> SpawnIntensityPositive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnIntensitySetup> SpawnIntensityNegative;
    
    UIGS_PressureManagerData();

};

