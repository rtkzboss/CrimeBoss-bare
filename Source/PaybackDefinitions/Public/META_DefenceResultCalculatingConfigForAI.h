#pragma once
#include "CoreMinimal.h"
#include "EMETA_GangStrategy.h"
#include "META_DefenceResultCalculatingConfigForAI.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_DefenceResultCalculatingConfigForAI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BaseChance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DefenceChancePerMissingTurf;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChanceTweakingPerArmyTierDifference;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChanceTweakingIfItIsLastTileOfGang;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_GangStrategy, int32> InfluenceByDefenderCurrentStrategy;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_GangStrategy, int32> InfluenceByAttackerCurrentStrategy;

    FMETA_DefenceResultCalculatingConfigForAI();
};
