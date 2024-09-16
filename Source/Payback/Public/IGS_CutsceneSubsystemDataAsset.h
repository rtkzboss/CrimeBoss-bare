#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_CutsceneCharacterKey.h"
#include "IGS_CutsceneSubsystemDataAsset.generated.h"

class AIGS_CharacterPaperDoll;
class UAkAudioEvent;
class UAkStateValue;

UCLASS(BlueprintType)
class PAYBACK_API UIGS_CutsceneSubsystemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_CutsceneSubsystemDataAsset();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FIGS_CutsceneCharacterKey, TSoftClassPtr<AIGS_CharacterPaperDoll>> CharactersPaperdoll;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkStateValue* CutsceneAkState;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkStateValue* NoMusicAkState;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkStateValue* NoSoundAkState;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkStateValue* NoCutsceneAkState;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkStateValue* ResetEnvironmentAkState;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* CustomMusicStopAkEvent;

};
