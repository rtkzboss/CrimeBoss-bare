#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_Gang.h"
#include "EMETA_GangStrategy.h"
#include "META_Interval.h"
#include "META_GangInitialConfiguration.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GangInitialConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval InitialTerritoryAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTagContainer> TileGroups;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> TopEnemies;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> Friends;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GangStrategy Strategy;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ArmyTier ArmyTier;

    FMETA_GangInitialConfiguration();
};
