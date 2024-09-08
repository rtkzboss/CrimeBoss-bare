#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDScreen.h"
#include "IGS_MainHUDWidget.generated.h"

class AIGS_PlayerCharacter;
class UCanvasPanel;
class UIGS_HUDSubwidgetBase;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_MainHUDWidget : public UIGS_HUDScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCanvasPanel* MainCanvas;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UIGS_HUDSubwidgetBase*> WidgetInstances;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UIGS_HUDSubwidgetBase*> StealthWidgets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UIGS_HUDSubwidgetBase*> SpectatorWidgets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UIGS_HUDSubwidgetBase*> BattleWidgets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UIGS_HUDSubwidgetBase*> HordeModeWidgets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UIGS_HUDSubwidgetBase*> EndMissionWidgets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UIGS_HUDSubwidgetBase*> InAbilityWidgets;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TSet<UIGS_HUDSubwidgetBase*> AllWidgets;
    
    UIGS_MainHUDWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void UnbindPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopCustomTimer();
    
    UFUNCTION(BlueprintCallable)
    void ShowStealthWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowSpectatorWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowInAbilityWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowHordeModeWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowEndMissionWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowBattleWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTutorialHint(const int32 inHintEnumIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStrikesVisibility(bool InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCustomTimer(const float inTotalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeCustomTimer();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRelevancyFromAllWidgets();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PostHUDInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseCustomTimer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTutorialHint(const int32 inHintEnumIdx);
    
    UFUNCTION(BlueprintCallable)
    void HideInAbilityWidgets();
    
    UFUNCTION(BlueprintCallable)
    static FString GetVersionNumber();
    
    UFUNCTION(BlueprintCallable)
    static FString GetRevisionNumber();
    
    UFUNCTION(BlueprintCallable)
    void AddRelevancyToAllWidgets();
    
};

