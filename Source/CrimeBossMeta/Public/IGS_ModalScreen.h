#pragma once
#include "CoreMinimal.h"
#include "IGS_Screen.h"
#include "IGS_ModalTableRow.h"
#include "IGS_ModalWindowResponseDelegate.h"
#include "IGS_ModalScreen.generated.h"

class UBinkMediaPlayer;

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_ModalScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UIGS_ModalScreen();

    UFUNCTION(BlueprintImplementableEvent)
    void SetModalTexts(const FText& InTitle, const FText& inDescription, const FText& inConfirmText, const FText& inCancelText, const FText& inExtraOptionText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetModalData(const FIGS_ModalTableRow& inData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayVideo(const UBinkMediaPlayer* inMedia, bool inSlowDown);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_ModalWindowResponse OnConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_ModalWindowResponse OnExtraOptionSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_ModalWindowResponse OnCancelled;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_ModalTableRow ModalData;
    
};

