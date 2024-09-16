#pragma once
#include "CoreMinimal.h"
#include "AkGameplayTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EIGS_MusicMissionState.h"
#include "EIGS_MusicStoryMissionState.h"
#include "IGS_MusicLevelTransition.h"
#include "IGS_MusicPropertyChanged.h"
#include "IGS_MusicSubsystem.generated.h"

class UAkCallbackInfo;
class UAkStateValue;
class UIGS_MusicSongDataAsset;
class UIGS_MusicSubsystemDataAsset;
class UIGS_PersistentMusicAkComponent;
class UObject;

UCLASS(BlueprintType)
class BF_AUDIO_API UIGS_MusicSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_MusicSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetStoryMissionMusicState(EIGS_MusicStoryMissionState inState);

    UFUNCTION(BlueprintCallable)
    void SetScenicMusicPack(UAkStateValue* inMusicPack);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetPauseMusic(UObject* inWCO, bool inState);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetMusicSongPlaylist(UObject* inWCO, TArray<UIGS_MusicSongDataAsset*> inPlaylist);

    UFUNCTION(BlueprintCallable)
    void SetMusicScenicEnabled(bool inState);

    UFUNCTION(BlueprintCallable)
    void SetMusicScenicAutoEnableState(EIGS_MusicMissionState inState);

    UFUNCTION(BlueprintCallable)
    void SetMissionMusicState(EIGS_MusicMissionState inState);

    UFUNCTION(BlueprintCallable)
    void SetAutoSwitchingEnable(bool inState);

protected:
    UFUNCTION()
    void OnSongDuration(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);

public:
    UFUNCTION(BlueprintCallable)
    UIGS_PersistentMusicAkComponent* GetPersistentMusicAkComponent();

    UFUNCTION(BlueprintPure)
    FString GetCurrerntMusicPack() const;

    UFUNCTION(BlueprintCallable)
    void Debug_SetMusicPack(bool inPreviousPack);

    UPROPERTY(BlueprintAssignable)
    FIGS_MusicPropertyChanged OnMusicSystemInitialized;

    UPROPERTY(BlueprintAssignable)
    FIGS_MusicPropertyChanged OnMusicPropertyChanged;

    UPROPERTY(BlueprintAssignable)
    FIGS_MusicLevelTransition OnMusicGameStageChanged;

protected:
    UPROPERTY(Instanced)
    UIGS_PersistentMusicAkComponent* PersistentMusicAkComponent;

    UPROPERTY()
    UIGS_MusicSubsystemDataAsset* Data;

};
