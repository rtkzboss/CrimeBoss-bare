#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ConditionOperator.h"
#include "EMETA_ObjectiveRevivesCalculation.h"
#include "EMETA_ObjectiveType.h"
#include "META_ObjectiveConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ObjectiveConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ShorDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ObjectiveType ObjectiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RevivesAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ObjectiveRevivesCalculation RevivesCalculation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RetrieveLootInPercents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaximumAmountOfStrikes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ZiptieXCivilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DontReachXPoliceStars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxAmountOfUsedHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HeistersShouldSurvive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterID UniqueHeisterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UniqueHeisterShouldSurvive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnemiesAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GangstersAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PoliceKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SWATKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GeneralAmountOfKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ConditionOperator KillsAmountOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag OutputParamTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OutputParamValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ConditionOperator OutputParamOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysToComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowInFPS;
    
    FMETA_ObjectiveConfig();
};

