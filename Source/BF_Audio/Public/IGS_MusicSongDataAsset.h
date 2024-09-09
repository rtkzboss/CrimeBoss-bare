#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_MusicSongDataAsset.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;

UCLASS(BlueprintType)
class BF_AUDIO_API UIGS_MusicSongDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_MusicSongDataAsset();

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAkSwitchValue> SongAkSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* SongAkEvent;
    
};

