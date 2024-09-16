#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_ObjectiveState.h"
#include "META_BaseGoal.h"
#include "META_ObjectiveRewardData.h"
#include "META_BaseMissionSave.h"
#include "META_IntelDataSave.h"
#include "Templates/SubclassOf.h"
#include "META_MoneyMakingMissionSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_MoneyMakingMissionSave : public FMETA_BaseMissionSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_GangsterVariationType PrimaryEnemyVariationOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_SWATVariationType PrimarySwatVariationOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AITiers GangsterTier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AITiers SWATTier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_IntelDataSave IntelData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> Parameters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_BaseGoal> OwnerGoal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionExpenses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeistersCut;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FencingExpenses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionOutcome;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BonusCash;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> BonusLoot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ObjectiveMonetaryValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxMonetaryValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MonetaryValueMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Reward1stStar;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Reward2ndStar;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Reward3rdStar;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LootMonetaryValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ObjectiveID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ObjectiveState ObjectiveState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_ObjectiveRewardData ObjectiveRewardData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ScenarioDifficulty Difficulty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_UserDifficulty UserDifficulty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag SelectedLoot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WantedStars;

    FMETA_MoneyMakingMissionSave();
};
