#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "META_BaseMissionSave.h"
#include "META_TurfWarMissionSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_TurfWarMissionSave : public FMETA_BaseMissionSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag WarTile;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Gang EnemyGang;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayersSoldiersAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefenceLostPenaltyMultiplier;

    FMETA_TurfWarMissionSave();
};
