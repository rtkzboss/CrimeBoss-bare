#pragma once
#include "CoreMinimal.h"
#include "IGS_DualSenseVibrationMode.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_DualSenseVibrationMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Amplitude;
    
    FIGS_DualSenseVibrationMode();
};

