#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaDialogueSpeakerVoiceLengthData.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_MetaDialogueSpeakerVoiceLengthData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VoiceLength;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LinesCount;

    FIGS_MetaDialogueSpeakerVoiceLengthData();
};
