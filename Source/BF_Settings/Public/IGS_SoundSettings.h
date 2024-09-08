#pragma once
#include "CoreMinimal.h"
#include "IGS_SettingsBase.h"
#include "IGS_SoundSettings.generated.h"

class UIGS_SoundSettings;

UCLASS(BlueprintType, DefaultConfig, Config=Inherit)
class BF_SETTINGS_API UIGS_SoundSettings : public UIGS_SettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float MasterVolumeValue;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float SFXVolumeValue;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float MusicVolumeValue;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float DialogueVolumeValue;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float ControllerSpeakerVolumeValue;
    
    UPROPERTY(Config)
    FString LastInputDevice;
    
    UPROPERTY(Config)
    FString LastOutputDevice;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bAudioMixSpeakers;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bSoundEnabledValue;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bSoundInBackgroundEnabledValue;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bStreamerModeValue;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 RadioDialogueOutputValue;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float VoiceChatVolumeValue;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bVoiceChatEnabledValue;
    
    UIGS_SoundSettings();

    UFUNCTION(BlueprintPure)
    static UIGS_SoundSettings* Instance();
    
};

