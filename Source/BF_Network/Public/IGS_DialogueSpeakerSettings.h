#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_DialogueSpeakerSettings.generated.h"

class UAkSwitchValue;

USTRUCT()
struct FIGS_DialogueSpeakerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PlayVoiceDelay;

    UPROPERTY(EditAnywhere)
    float FinishVoiceExtraDelay;

    UPROPERTY(EditAnywhere)
    UAkSwitchValue* SpeakerAkSwitch;

    UPROPERTY(EditAnywhere)
    TMap<FIGS_DialogueGroupCharacterHolder, UAkSwitchValue*> SpeakerCharacterAkSwitchMap;

    BF_NETWORK_API FIGS_DialogueSpeakerSettings();
};
