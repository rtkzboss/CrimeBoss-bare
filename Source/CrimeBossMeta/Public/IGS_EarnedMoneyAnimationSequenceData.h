#pragma once
#include "CoreMinimal.h"
#include "IGS_EarnedMoneyAnimationSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_EarnedMoneyAnimationSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;

    CRIMEBOSSMETA_API FIGS_EarnedMoneyAnimationSequenceData();
};
