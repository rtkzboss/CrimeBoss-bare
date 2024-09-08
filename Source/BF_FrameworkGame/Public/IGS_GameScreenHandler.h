#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_ScreenHandler.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameScreenHandler.generated.h"

class UIGS_BaseMenuWidget;
class UIGS_GameUISettings;
class UIGS_Screen;
class UIGS_SystemMenuScreen;
class UObject;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_GameScreenHandler : public UIGS_ScreenHandler {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_GameScreenHandlerEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_GameScreenHandlerEvent OnSystemMenuOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_GameScreenHandlerEvent OnSystemMenuClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_GameScreenHandlerEvent OnDeinitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_GameScreenHandlerEvent OnScreensStackChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_GameScreenHandlerEvent OnMovieFinished;
    
    UPROPERTY(BlueprintReadOnly)
    bool GoDirectlyToMainMenu;
    
private:
    UPROPERTY(Instanced)
    UIGS_BaseMenuWidget* m_BaseScreen;
    
    UPROPERTY(Instanced)
    UIGS_SystemMenuScreen* m_SystemMenuScreen;
    
    UPROPERTY()
    UIGS_GameUISettings* m_Settings;
    
    UPROPERTY()
    FDateTime m_ScreenTime;
    
public:
    UIGS_GameScreenHandler();

    UFUNCTION(BlueprintCallable)
    void SwitchBackToMainScreen(bool directlyToMainMenu);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void RequestSwitchToScreen(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void RequestOpenScreenByTag(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void RequestOpenScreen(UObject* inWCO, UIGS_Screen* inScreen, bool AddToViewport);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void RequestCloseScreenByTag(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void RequestCloseScreen(UObject* inWCO, UIGS_Screen* inScreen, bool destroyAfterClose);
    
    UFUNCTION(BlueprintCallable)
    void RefreshFocus();
    
    UFUNCTION(BlueprintCallable)
    void OpenSystemMenuScreen();
    
private:
    UFUNCTION()
    void OnMovieFinished_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeMenuScreen(TSubclassOf<UIGS_SystemMenuScreen> inMenuScreenClass);
    
    UFUNCTION(BlueprintCallable)
    UIGS_BaseMenuWidget* InitializeBaseScreen(TSubclassOf<UIGS_BaseMenuWidget> inBaseScreenClass);
    
    UFUNCTION(BlueprintCallable)
    void GoBackOnTopScreen();
    
    UFUNCTION(BlueprintPure)
    int32 GetScreensStackCount() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_BaseMenuWidget* GetBaseScreen() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemMenuScreen();
    
};

