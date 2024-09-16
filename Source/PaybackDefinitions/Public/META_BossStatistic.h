#pragma once
#include "CoreMinimal.h"
#include "META_BossStatistic.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_BossStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GatheredBossPoints;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BossLevel;

    FMETA_BossStatistic();
};
