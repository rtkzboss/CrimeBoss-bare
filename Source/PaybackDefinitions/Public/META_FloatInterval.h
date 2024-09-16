#pragma once
#include "CoreMinimal.h"
#include "META_FloatInterval.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_FloatInterval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Min;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max;

    FMETA_FloatInterval();
};
