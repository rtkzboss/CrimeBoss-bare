#pragma once
#include "CoreMinimal.h"
#include "IGS_EnemyTierPerRespect.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_EnemyTierPerRespect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Tier1;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Tier2;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Tier3;

    FIGS_EnemyTierPerRespect();
};
