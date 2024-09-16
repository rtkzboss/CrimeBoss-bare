#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_FrameworkBaseDevSettings.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;
class UGameplayEffect;
class UIGS_GASDefaultAttributesDataAsset;
class UIGS_ProgressionManagerData;
class UIGS_UnlockManagerData;
class UMaterialParameterCollection;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_FrameworkBaseSettings")
class BF_FRAMEWORKBASE_API UIGS_FrameworkBaseDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_FrameworkBaseDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> FootstepNoneAkSwitch;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> DeathAkEvent;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> StopInspectAkEvent;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialParameterCollection> WieldableMPCPath;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> MoveSpeedGameplayEffect;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_GASDefaultAttributesDataAsset> DefaultCharacterAttributes;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_GASDefaultAttributesDataAsset> DefaultGlobalAttributes;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_UnlockManagerData> UnlockManagerData;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_ProgressionManagerData> ProgressionManagerData;

};
