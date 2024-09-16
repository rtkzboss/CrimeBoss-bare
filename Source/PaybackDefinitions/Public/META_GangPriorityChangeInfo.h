#pragma once
#include "CoreMinimal.h"
#include "META_GangPriorityChangeInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GangPriorityChangeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChangeWhenTileLost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChangeWhenTileDefended;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChangeWhenPlayerLosesTile;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChangeWhenPlayerDefendsTile;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChangeWhenNewDay;

    FMETA_GangPriorityChangeInfo();
};
