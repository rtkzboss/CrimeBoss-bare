#pragma once
#include "CoreMinimal.h"
#include "ISoundfieldFormat.h"
#include "AudioOut2SpatializationSettings.generated.h"

UCLASS(EditInlineNew)
class UAudioOut2SpatializationSettings : public USoundfieldEncodingSettingsBase {
    GENERATED_BODY()
public:
    UAudioOut2SpatializationSettings();

    UPROPERTY(EditAnywhere)
    float Spread;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool PassThrough;
    
};

