#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_ScreenWithSubscreens.h"
#include "IGS_BaseMenuWidget.generated.h"

class UIGS_GameScreenHandler;
class UIGS_Screen;

UCLASS(EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_BaseMenuWidget : public UIGS_ScreenWithSubscreens {
    GENERATED_BODY()
public:
    UIGS_BaseMenuWidget();

    UFUNCTION(BlueprintCallable)
    void SwitchToScreen(FGameplayTag inScreenTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTopContentVisibility(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetForceHidden(bool IsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBottomContentVisibility(bool inIsVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBaseScreenVisibility(bool IsVisible);
    
private:
    UFUNCTION()
    void OpenScreenOnInitialization();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDebugMenu();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnScreensInitialized(FGameplayTag inScreenTag);
    
    UFUNCTION()
    void OnScreenOpen_Internal(FGameplayTag inScreenTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnScreenOpen(FGameplayTag inScreenTag);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTopContentVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBottomContentVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBaseScreenVisible() const;
    
    UFUNCTION(BlueprintNativeEvent)
    UIGS_Screen* GetScreenToBeOpenOnInitialization();
    
    UPROPERTY(BlueprintReadOnly)
    bool IsForceHidden;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OpenScreenDelayAfterInitialization;
    
private:
    UPROPERTY()
    FGameplayTag m_ActiveScreenTag;
    
    UPROPERTY()
    UIGS_GameScreenHandler* m_GameScreenHandler;
    
};

