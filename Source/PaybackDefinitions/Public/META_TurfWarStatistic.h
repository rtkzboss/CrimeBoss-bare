#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "META_TurfWarStatistic.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_TurfWarStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> SuccessfulTurfWarAttacks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> FailedTurfWarAttacks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> SuccessfulTurfWarDefense;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> FailedTurfWarDefenses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> TurfsCaptured;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> TurfsAcquiredAsIsolated;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> TurfsLost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RecruitedTurfWarSoldiers;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LostTurfWarSoldiers;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DetectivesNeutralized;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EMETA_Gang> BossesEliminated;

    FMETA_TurfWarStatistic();
};
