#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_ScenarioDifficulty.h"
#include "META_MissionID.h"
#include "META_ObjectiveRewardData.h"
#include "Templates/SubclassOf.h"
#include "IGS_QPLobbyMissionInfo.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_QPLobbyMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_MissionID> MissionID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ScenarioDifficulty Difficulty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ObjectiveMonetaryValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxMonetaryValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FirstStarReward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SecondStarReward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ThirdStarReward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MonetaryLootValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ObjectiveID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_ObjectiveRewardData ObjectiveReward;

    FIGS_QPLobbyMissionInfo();
};
