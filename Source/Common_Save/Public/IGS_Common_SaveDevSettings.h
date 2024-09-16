#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_Common_SaveDevSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_CommonSaveSettings")
class COMMON_SAVE_API UIGS_Common_SaveDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_Common_SaveDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    int32 ShippingSaveFilesLimit;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    int32 DeveloperSaveFilesLimit;

};
