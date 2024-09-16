#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_RenderingDevSettings.generated.h"

class UIGS_GlobalPostProcessesDataAsset;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_RenderingSettings")
class BF_RENDERING_API UIGS_RenderingDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_RenderingDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_GlobalPostProcessesDataAsset> GlobalPostProcessesDataAsset;

};
