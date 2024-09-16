#pragma once
#include "CoreMinimal.h"
#include "IGS_DsVibrationTrigger.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DsVibrationTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Position;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Frequency;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Amplitude;

    BF_INPUT_API FIGS_DsVibrationTrigger();
};
