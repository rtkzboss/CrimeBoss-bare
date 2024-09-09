#pragma once
#include "CoreMinimal.h"
#include "IGS_Screen.h"
#include "BinkWidgetEventDelegate.h"
#include "IGS_BinkMediaWidget.generated.h"

class UBinkMediaPlayer;
class UBinkMediaTexture;
class UIGS_PlayBinkMedia;

UCLASS(Abstract, EditInlineNew)
class PAYBACK_API UIGS_BinkMediaWidget : public UIGS_Screen {
    GENERATED_BODY()
public:
    UIGS_BinkMediaWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVideoEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsSkippable(bool inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsPlaceholder(bool inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBinkPlayMedia(UIGS_PlayBinkMedia* inPlayBinkMedia);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBinkPlayer(UBinkMediaPlayer* inBinkPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBinkMediaTexture(UBinkMediaTexture* inTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBinkMediaStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBinkMediaFinished();
    
    UPROPERTY(BlueprintCallable)
    FBinkWidgetEvent OnSkipButton;
    
};

