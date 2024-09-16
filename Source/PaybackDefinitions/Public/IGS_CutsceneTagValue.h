#pragma once
#include "CoreMinimal.h"
#include "IGS_CutsceneTagValue.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_CutsceneTagValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TextValue;

    FIGS_CutsceneTagValue();
};
