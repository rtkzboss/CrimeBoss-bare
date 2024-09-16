#pragma once
#include "CoreMinimal.h"
#include "IGS_VoiceMediaInfo.generated.h"

class UAkExternalMediaAsset;

USTRUCT(BlueprintType)
struct FIGS_VoiceMediaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkExternalMediaAsset* VoiceAkExternalMediaAsset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString VoiceMediaName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VoiceFilenameLength;

    BF_VOICEOVER_API FIGS_VoiceMediaInfo();
};
