#pragma once
#include "CoreMinimal.h"
#include "IGS_BotOrderAction.h"
#include "IGS_WidgetRadialSliceBase.h"
#include "IGS_WidgetBotRadialSlice.generated.h"

class AIGS_GameCharacterFramework;
class UTexture2D;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetBotRadialSlice : public UIGS_WidgetRadialSliceBase {
    GENERATED_BODY()
public:
    UIGS_WidgetBotRadialSlice();

    UFUNCTION(BlueprintImplementableEvent)
    void SetSwitchable_Internal(bool inSwitchable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerPicture(UTexture2D* inTexture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCharacterImage(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPossessPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDefendStateChanged(bool inDefend);
    
    UFUNCTION()
    void OnDefendChanged(bool inDefend);
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_GameCharacterFramework* BotPawn;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsDefending;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText BotName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SlotBind;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bSwitchable;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FIGS_BotOrderAction> MyBotOrderActions;
    
};

