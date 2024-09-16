#pragma once
#include "CoreMinimal.h"
#include "EIGS_MusicMissionSource.h"
#include "IGS_MusicMissionSettings.generated.h"

USTRUCT(BlueprintType)
struct FIGS_MusicMissionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MusicMissionSource MissionSource;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCutsceneNoMusic;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCutsceneNoSound;

    BF_AUDIO_API FIGS_MusicMissionSettings();
};
