#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaDialogueVariationData.generated.h"

class UAkExternalMediaAsset;
class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_MetaDialogueVariationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 VariantID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CharacterName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayMin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayMax;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SubtitleKey;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SubtitleKeyEng;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FacialAnimation;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkExternalMediaAsset* VoiceAkExternalMediaAsset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkExternalMediaAsset* CensoredVoiceAkExternalMediaAsset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString VoiceMediaName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VoiceFilenameLength;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsTTS;

    FIGS_MetaDialogueVariationData();
};
