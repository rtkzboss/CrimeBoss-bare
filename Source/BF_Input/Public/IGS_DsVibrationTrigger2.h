#pragma once
#include "CoreMinimal.h"
#include "IGS_DsVibrationTrigger2.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DsVibrationTrigger2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<uint8> Amplitudes;
    
    BF_INPUT_API FIGS_DsVibrationTrigger2();
};

