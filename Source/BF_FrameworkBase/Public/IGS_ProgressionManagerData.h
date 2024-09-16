#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_UserDifficulty.h"
#include "IGS_GameplayTimeReward.h"
#include "IGS_ScenarioRewardMultiplier.h"
#include "IGS_ProgressionManagerData.generated.h"

class UCurveTable;

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_ProgressionManagerData : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_ProgressionManagerData();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InitialLevel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseLevelCap;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LevelCap;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LevelUpCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UCurveTable> ProgressionCurveTable;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MissionNotSupportingStars;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, float> MissionRatingBonus;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_GameplayTimeReward GameplayTimeReward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WithHumanPlayers;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_ScenarioRewardMultiplier> HeistTypeRewardMultipliers;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EIGS_UserDifficulty, float> UserDifficultyMultiplier;

};
