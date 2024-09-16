#pragma once
#include "CoreMinimal.h"
#include "AkAudioInputComponent.h"
#include "IGS_VoiceChatAudioInputComponent.generated.h"

class UIGS_LocalPlayerVoiceChat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AUDIO_API UIGS_VoiceChatAudioInputComponent : public UAkAudioInputComponent {
    GENERATED_BODY()
public:
    UIGS_VoiceChatAudioInputComponent(const FObjectInitializer& ObjectInitializer);

private:
    UPROPERTY()
    UIGS_LocalPlayerVoiceChat* m_LocalPlayerVoiceChat;

};
