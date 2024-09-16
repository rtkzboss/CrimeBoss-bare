#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BinkSubtitleItem.h"
#include "IGS_BinkMediaEvent.h"
#include "IGS_PlayBinkMedia.generated.h"

class UBinkMediaPlayer;
class UBinkMediaTexture;
class UIGS_BinkMediaWidget;
class UIGS_ScreenHandler;
class UObject;

UCLASS()
class PAYBACK_API UIGS_PlayBinkMedia : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_PlayBinkMedia();

    UFUNCTION(BlueprintCallable)
    void StopMovie();

    UFUNCTION(BlueprintCallable)
    void SkipMovie();

    UFUNCTION(BlueprintCallable)
    void SetVolume(float InValue);

    UFUNCTION(BlueprintCallable)
    void PlayMedia();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PlayBinkMedia* PlayBinkMedia(UObject* inWCO, UBinkMediaPlayer* inBinkMediaPlayer, bool inAutoStart, bool inAddToScreenHandler);

protected:
    UFUNCTION()
    void OnWidgetSkipTriggered();

    UFUNCTION()
    void OnMediaReachedEnd();

    UFUNCTION()
    void OnLevelLoadStarted(FName inLevelName, bool inIsServerTravel);

public:
    UFUNCTION(BlueprintCallable)
    UBinkMediaTexture* GetMediaTexture();

    UFUNCTION(BlueprintCallable)
    FTimespan GetElapsedTime();

    UFUNCTION(BlueprintCallable)
    FTimespan GetDuration();

    UFUNCTION(BlueprintCallable)
    FBinkSubtitleItem GetCurrentSubtitleItem();

    UPROPERTY(BlueprintAssignable)
    FIGS_BinkMediaEvent Finished;

    UPROPERTY(BlueprintAssignable)
    FIGS_BinkMediaEvent Started;

    UPROPERTY(BlueprintAssignable)
    FIGS_BinkMediaEvent Stopped;

    UPROPERTY(BlueprintAssignable)
    FIGS_BinkMediaEvent Failed;

    UPROPERTY(BlueprintAssignable)
    FIGS_BinkMediaEvent Prepared;

    UPROPERTY(BlueprintAssignable)
    FIGS_BinkMediaEvent SubtitleEvent;

protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_BinkMediaWidget* BinkMediaWidget;

private:
    UPROPERTY()
    UIGS_ScreenHandler* m_ScreenHandler;

};
