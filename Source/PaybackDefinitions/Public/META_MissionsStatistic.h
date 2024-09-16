#pragma once
#include "CoreMinimal.h"
#include "META_FinishedMissionInfo.h"
#include "META_MissionsStatistic.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_MissionsStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_FinishedMissionInfo> FinishedMissions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, int32> FinishedMissionsDependsFromStars;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_FinishedMissionInfo> LostMissions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_FinishedMissionInfo> FinishedBigHeists;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CountOftFinishedBigHeists;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CountOfLostBigHeists;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_FinishedMissionInfo> FinishedMissionWithoutKills;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionWithStels;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FinishedMissionWithStels;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayedAmbushes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SurvivedAmbushes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayedWarehouseSiege;

    FMETA_MissionsStatistic();
};
