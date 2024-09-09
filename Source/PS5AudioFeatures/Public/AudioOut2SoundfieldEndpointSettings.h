#pragma once
#include "CoreMinimal.h"
#include "ISoundfieldEndpoint.h"
#include "AudioOut2SoundfieldEndpointSettings.generated.h"

UCLASS(EditInlineNew)
class UAudioOut2SoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase {
    GENERATED_BODY()
public:
    UAudioOut2SoundfieldEndpointSettings();

    UPROPERTY(EditAnywhere)
    int32 ControllerIndex;
    
};

