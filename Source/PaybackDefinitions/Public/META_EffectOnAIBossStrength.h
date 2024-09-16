#pragma once
#include "CoreMinimal.h"
#include "META_EffectOnAIBossStrength.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_EffectOnAIBossStrength {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChangedByValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RemainingDays;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RemainingAttacksOrDefences;

    FMETA_EffectOnAIBossStrength();
};
