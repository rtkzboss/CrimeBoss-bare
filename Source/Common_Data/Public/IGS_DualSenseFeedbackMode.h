#pragma once
#include "CoreMinimal.h"
#include "IGS_DualSenseFeedbackMode.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_DualSenseFeedbackMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideEnabled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Position;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Strength;

    FIGS_DualSenseFeedbackMode();
};
