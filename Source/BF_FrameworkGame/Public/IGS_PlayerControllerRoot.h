#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "IGS_PlayerControllerFramework.h"
#include "EIGS_InputDevice.h"
#include "GameplayTagContainer.h"
#include "EIGS_BotCommandDefinition.h"
#include "EIGS_MenuInputState.h"
#include "IGS_GiveUpEvent.h"
#include "IGS_OnCinematicModeChanged.h"
#include "IGS_OnStartHeistHoldChanged.h"
#include "IGS_PawnChangedEventSignature.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerControllerRoot.generated.h"

class AHUD;
class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class UActiveSubControllerHandler;
class UIGS_AimAssistComponent;
class UIGS_InputDeviceDetectorComponent;
class UIGS_PlayerBotOrderComponent;
class UIGS_PlayerDataComponent;
class UIGS_SubControllerCommon;
class UIGS_SubControllerHuman;
class UIGS_SubControllerMountable;
class UIGS_SubControllerVehicle;
class USphereComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_PlayerControllerRoot : public AIGS_PlayerControllerFramework {
    GENERATED_BODY()
public:
    AIGS_PlayerControllerRoot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryPossessSpectatedBot();

    UFUNCTION(BlueprintImplementableEvent)
    void ToggleBotSwitchMenu();

    UFUNCTION(BlueprintPure)
    void ShowErrorMessage(const FText& inMessageText) const;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetShowMainCanvas(bool inShowMainCanvas) const;

    UFUNCTION(BlueprintCallable)
    void SetIgnoreRadialMenuInput(bool bNewMenuInput);

    UFUNCTION(BlueprintCallable)
    void SetIgnorePingInput(bool bIgnore);

    UFUNCTION(BlueprintCallable)
    void SetIgnoreMenuInput(bool bNewMenuInput);

    UFUNCTION(BlueprintCallable)
    void SetIgnoreInteractionInput(bool bNewInteractionInput);

    UFUNCTION(BlueprintCallable)
    void SetIgnoreBotSwapInput(bool bNewBotSwapInput);

    UFUNCTION(BlueprintCallable)
    void SetIgnoreAllInput(bool bNewAllInput);

    UFUNCTION(Reliable, Server)
    void Server_UnlockMethodChosen(const FGameplayTag inMethod);

    UFUNCTION(Reliable, Server)
    void Server_PossessSpectatedBot(AIGS_PlayerCharacter* inPlayerToSpectate);

protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_GiveUpInPinnedDownState() const;

public:
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreRadialMenuInput();

    UFUNCTION(BlueprintCallable)
    void ResetIgnoreMenuInput();

    UFUNCTION(BlueprintCallable)
    void ResetIgnoreInteractionInput();

    UFUNCTION(BlueprintCallable)
    void ResetIgnoreBotSwapInput();

    UFUNCTION(BlueprintCallable)
    void ReleaseHeldKeys();

    UFUNCTION(BlueprintCallable)
    bool OpenUnlockMethodMenu(FGameplayTagContainer inMethods);

protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnWheelMenu(bool inIsHoldingButton);

private:
    UFUNCTION()
    void OnTryToReconstructHUD();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnSystemMenuInput(bool inIsHoldingButton, EIGS_MenuInputState inInputState);

    UFUNCTION(BlueprintNativeEvent)
    void OnRadialMenuAnalogY(float inAxis);

    UFUNCTION(BlueprintNativeEvent)
    void OnRadialMenuAnalogX(float inAxis);

    UFUNCTION(BlueprintNativeEvent)
    bool OnOpenUnlockMenu(FGameplayTagContainer inMethods);

    UFUNCTION(BlueprintNativeEvent)
    void OnOpenTextChatMenu(bool inIsHoldingButton, EIGS_MenuInputState inInputState);

    UFUNCTION(BlueprintNativeEvent)
    void OnOpenNotepadMenu(bool inIsHoldingButton, EIGS_MenuInputState inInputState);

public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpenMenuWheel();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnOpenInventoryMenu(bool inIsHoldingButton, EIGS_MenuInputState inInputState);

    UFUNCTION(BlueprintNativeEvent)
    void OnOpenBotSwitch(bool inIsHoldingButton, EIGS_MenuInputState inInputState);

    UFUNCTION(BlueprintNativeEvent)
    void OnInputDeviceChanged(EIGS_InputDevice inNewInputDevice);

    UFUNCTION(BlueprintNativeEvent)
    void OnGameMenuInput(bool inIsHoldingButton, EIGS_MenuInputState inInputState);

    UFUNCTION(BlueprintNativeEvent)
    void OnDropWieldable(bool inIsHoldingButton);

    UFUNCTION(BlueprintNativeEvent)
    void OnCloseUnlockMenu();

public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCloseMenuWheel();

    UFUNCTION(BlueprintImplementableEvent)
    void OnClientFadeScreen(bool inIsFadeOut, float inFadeDuration);

protected:
    UFUNCTION(BlueprintNativeEvent)
    float OnAddYawInput(float inYaw);

    UFUNCTION(BlueprintNativeEvent)
    float OnAddPitchInput(float InPitch);

public:
    UFUNCTION(BlueprintPure)
    bool IsUsingKeyboardAndMouse() const;

    UFUNCTION(BlueprintPure)
    bool IsUsingGamepad() const;

    UFUNCTION(BlueprintPure)
    bool IsSpectatingBot() const;

    UFUNCTION(BlueprintPure)
    bool IsSpectating() const;

    UFUNCTION(BlueprintPure)
    bool IsRadialMenuInputIgnored() const;

    UFUNCTION(BlueprintPure)
    bool IsPingInputIgnored() const;

    UFUNCTION(BlueprintPure)
    bool IsMenuInputIgnored() const;

    UFUNCTION(BlueprintPure)
    bool IsInteractionInputIgnored() const;

    UFUNCTION(BlueprintPure)
    bool IsBotSwapInputIgnored() const;

    UFUNCTION(BlueprintImplementableEvent)
    void HandleSkipInternal();

    UFUNCTION(BlueprintPure)
    float GetStartHeistHoldTimeInSeconds() const;

    UFUNCTION(BlueprintPure)
    float GetPingCooldownInSeconds() const;

    UFUNCTION(BlueprintPure)
    float GetHoldTimeInSeconds() const;

    UFUNCTION(BlueprintPure)
    float GetDoublePingThresholdInSeconds() const;

    UFUNCTION(BlueprintPure)
    EIGS_InputDevice GetCurrentInputDeviceType() const;

    UFUNCTION(BlueprintCallable)
    float GetContextualDoublePingThresholdInSeconds();

    UFUNCTION(BlueprintPure)
    UIGS_AimAssistComponent* GetAimAssistComponent() const;

    UFUNCTION(BlueprintImplementableEvent)
    void ForceFadeInView(bool bInvert);

    UFUNCTION(BlueprintImplementableEvent)
    void FadeInGameView(bool bInvert);

    UFUNCTION(BlueprintImplementableEvent)
    void FadeInFadeOut(float inFadeDuration, float inBlackDuration);

    UFUNCTION(BlueprintCallable)
    void CloseUnlockMethodMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void ClientWasKickedEvent(const FText& KickReason);

    UFUNCTION(Client, Reliable)
    void ClientSwitchToSpectator3PVCamera(AIGS_GameCharacterFramework* inSpectatorCharacter);

    UFUNCTION(Client, Reliable)
    void ClientIgnoreSuspiciousInput(bool bIgnore);

    UFUNCTION(Client, Reliable)
    void ClientIgnoreRealMoveInput(bool bIgnore);

    UFUNCTION(Client, Reliable)
    void ClientIgnoreAllInput(bool bIgnore);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFadeScreen(bool inIsFadeOut, float inFadeDuration);

    UFUNCTION(Client, Reliable)
    void Client_UnlockMethodChosen(const FGameplayTag inMethod);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ChooseBotQuickly();

public:
    UFUNCTION(BlueprintCallable)
    void CallBotCommand(EIGS_BotCommandDefinition inCommand);

    UPROPERTY()
    bool bEntranceUnlockMenuOpen;

    UPROPERTY(BlueprintAssignable)
    FIGS_PawnChangedEventSignature OnPawnChangedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnStartHeistHoldChanged OnStartHeistHoldChangedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnCinematicModeChanged OnCinematicModeChangedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_PawnChangedEventSignature OnSpectatorPawnChangedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_GiveUpEvent OnHoldingGiveUpEvent;

    UPROPERTY(BlueprintReadOnly)
    bool bIsCurrentlySwappingPawns;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInvertLook;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AHUD> DefaultHUDClass;

protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowShootingInSprint;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowAimingInSprint;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowReloadingInSprint;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowSwitchFireModeInSprint;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowChangeSlotInSprint;

    UPROPERTY(BlueprintReadOnly)
    bool bToggleSprint;

    UPROPERTY(BlueprintReadOnly)
    bool bToggleCrouch;

    UPROPERTY(BlueprintReadOnly)
    bool bToggleAim;

    UPROPERTY(BlueprintReadOnly)
    bool bSprintInterruptsReload;

    UPROPERTY(BlueprintReadOnly)
    bool bMagCheckInSprintAllowed;

    UPROPERTY(BlueprintReadOnly)
    bool bGamepadPrioritizeUseInsteadOfReload;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HoldTimeInSeconds;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StartHeistHoldTimeInSeconds;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DoublePingThresholdInSeconds;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ContextualDoublePingThresholdInSeconds;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PingCooldownInSeconds;

    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UAISense>> RegisterAsSourceForSenses;

    UPROPERTY(Instanced, VisibleAnywhere)
    UActiveSubControllerHandler* ActiveSubControllerHandler;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_SubControllerHuman* SubControllerHuman;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_SubControllerMountable* SubControllerMountable;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_SubControllerVehicle* SubControllerVehicle;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UIGS_SubControllerCommon*> m_Subcontrollers;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_SubControllerCommon* m_ActiveSubController;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USphereComponent* m_StreamingVolumeCollision;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_InputDeviceDetectorComponent* m_InputDeviceDetectorComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_PlayerDataComponent* PlayerDataComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_PlayerBotOrderComponent* PlayerBotOrderComponent;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_PlayerCharacter* CurrentPlayerCharacter;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_PlayerCharacter* CurrentlySpectatedPlayer;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_AimAssistComponent* m_AimAssistComponent;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_GivingUpTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HUDReconstructTimePeriod;

};
