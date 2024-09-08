#pragma once
#include "CoreMinimal.h"
#include "IAudioEndpoint.h"
#include "AudioOut2ExternalEndpointSettings.generated.h"

UCLASS(EditInlineNew)
class UAudioOut2ExternalEndpointSettings : public UAudioEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ControllerIndex;
    
    UAudioOut2ExternalEndpointSettings();

};

