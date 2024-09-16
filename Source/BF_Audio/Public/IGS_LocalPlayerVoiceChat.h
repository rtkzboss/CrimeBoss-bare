#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "IGS_LocalPlayerVoiceChat.generated.h"

class UIGS_VoiceChatAudioInputComponent;

UCLASS()
class BF_AUDIO_API UIGS_LocalPlayerVoiceChat : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UIGS_LocalPlayerVoiceChat();

protected:
    UPROPERTY(Instanced)
    UIGS_VoiceChatAudioInputComponent* m_WwiseInputComponent;

};
