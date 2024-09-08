#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_AudioSubsystemDataAsset.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkStateValue;

UCLASS()
class UIGS_AudioSubsystemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* MuteSoundsAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* UnmuteSoundsAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkStateValue* StreamerModeOnAkState;
    
    UPROPERTY(EditAnywhere)
    UAkStateValue* StreamerModeOffAkState;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* DebugSoundsRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* MasterVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* SfxVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* DialogueVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* MusicVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* ControllerSpeakerVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* ControllerVibrationRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* PoliceRadioChatterVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* TinnitusVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* RadioDialogueOutputRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* VoiceChatVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* VoiceChatEnabledAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* VoiceChatDisabledAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkStateValue* AudioMixHeadphones;
    
    UPROPERTY(EditAnywhere)
    UAkStateValue* AudioMixSpeakers;
    
    UIGS_AudioSubsystemDataAsset();

};

