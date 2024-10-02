#pragma once
#include "CoreMinimal.h"
#include "EMETA_Gang.h"
#include "META_RandEventGangCondition.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_RandEventGangCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutomaticGangSelection;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Gang TargetGang;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ConsideringTimeInDays;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OccupiedTerritoriesOfOtherGang;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OccupiedTerritoriesOfPlayer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LostOwnTerritoriesByOtherGang;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LostOwnTerritoriesByPlayer;

    FMETA_RandEventGangCondition();
};
