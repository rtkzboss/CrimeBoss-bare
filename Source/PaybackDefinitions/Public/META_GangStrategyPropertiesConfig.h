#pragma once
#include "CoreMinimal.h"
#include "META_GangStrategyPropertiesConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GangStrategyPropertiesConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfAttacks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinExtraNeutralTerritoryAttacks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DailyAttackLimitAgainstAnotherGang;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SelectClosestTurfs;

    FMETA_GangStrategyPropertiesConfig();
};
