#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_DialogueSpeakerKey.h"
#include "IGS_DialogueSpeakerSettings.h"
#include "IGS_ComponentDialogueDataAsset.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;

UCLASS()
class UIGS_ComponentDialogueDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_ComponentDialogueDataAsset();

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* PlayVoiceAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* FinishVoiceAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* PlayVoiceExtraAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* FinishVoiceExtraAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkSwitchValue* AkSwitchPriorityHigh;
    
    UPROPERTY(EditAnywhere)
    UAkSwitchValue* AkSwitchPriorityLow;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* Ak2DModeRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* AkRtpcVoSpatialization;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* DistanceRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* ObstructionRtpc;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* TransmissionLossRtpc;
    
    UPROPERTY(EditAnywhere)
    TMap<FIGS_DialogueSpeakerKey, FIGS_DialogueSpeakerSettings> SpeakerPlayVoiceDelayMap;
    
};

