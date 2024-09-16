#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_SubtitleType.h"
#include "IGS_SubtitleData.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_SubtitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText CharacterName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor CharacterNameColor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText SubtitleText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_SubtitleType SubtitleType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeisterNumber;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasMedia;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsTTS;

    FIGS_SubtitleData();
};
