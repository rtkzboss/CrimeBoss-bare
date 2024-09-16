#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputDevice.h"
#include "EIGS_InputThumbstickType.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "Input/Events.h"
#include "EScreenZOrder.h"
#include "IGS_Screen.h"
#include "Templates/SubclassOf.h"
#include "IGS_ScreenHandler.generated.h"

class AGameStateBase;
class UIGS_InputDeviceManager;

UCLASS(BlueprintType)
class IGS_UIFRAMEWORK_API UIGS_ScreenHandler : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_ScreenHandlerMulticastEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnScreenOpenWithTag, FGameplayTag, screenTag);

    UIGS_ScreenHandler();

    UFUNCTION(BlueprintCallable)
    void UnregisterScreen(const UIGS_Screen* inScreen);

    UFUNCTION(BlueprintCallable)
    void SetInputEnabled(bool Enabled);

    UFUNCTION(BlueprintCallable)
    void RegisterScreen(UIGS_Screen* inScreen);

    UFUNCTION(BlueprintCallable)
    UIGS_Screen* OpenScreenByClass(const TSubclassOf<UIGS_Screen> inClass, EScreenZOrder zOrderOverride);

protected:
    UFUNCTION()
    void OnWidgetInputReleased(EIGS_InputAction InAction);

    UFUNCTION()
    void OnWidgetInputPressed(EIGS_InputAction InAction);

    UFUNCTION()
    void OnInputDeviceChanged(EIGS_InputDevice newDevice);

    UFUNCTION()
    void OnGameStateSet(AGameStateBase* GameState);

    UFUNCTION()
    void OnAnalogInputRequested(EIGS_InputThumbstickType Type, FVector2D Value);

public:
    UFUNCTION(BlueprintPure)
    TArray<EIGS_InputAction> KeyEventToInputActions(const FKeyEvent& InKeyEvent) const;

    UFUNCTION(BlueprintPure)
    bool IsScreenWithTagOpen(FGameplayTag inTag, bool includeOverlay) const;

    UFUNCTION(BlueprintPure)
    bool IsScreenRegistered(FGameplayTag inGameplayTag) const;

    UFUNCTION(BlueprintPure)
    bool IsModalScreenOpen() const;

    UFUNCTION(BlueprintPure)
    bool IsAnyScreenOpen(bool includeOverlays) const;

protected:
    UFUNCTION()
    void InitializeDeviceManager();

    UFUNCTION(BlueprintCallable)
    bool HandleBack(UIGS_Screen* screen);

public:
    UFUNCTION(BlueprintPure)
    FGameplayTag GetTopScreenTag(bool includeOverlay) const;

    UFUNCTION(BlueprintPure)
    UIGS_Screen* GetTopScreen(bool includeOverlay) const;

    UFUNCTION(BlueprintPure)
    UIGS_Screen* GetOpenedScreenByTag(FGameplayTag inTag) const;

    UFUNCTION(BlueprintPure)
    bool AreOnlyOverlaysOpen() const;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnScreenOpenWithTag OnScreenOpenWithTag;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnScreenOpenWithTag OnScreenSwitched;

    UPROPERTY(BlueprintAssignable)
    FIGS_ScreenHandlerMulticastEvent OnViewportResized;

protected:
    UPROPERTY(Instanced)
    TMap<FGameplayTag, UIGS_Screen*> m_RegisteredScreens;

    UPROPERTY(Instanced)
    TArray<UIGS_Screen*> m_ScreensStack;

    UPROPERTY()
    UIGS_InputDeviceManager* m_InputDeviceManager;

};
