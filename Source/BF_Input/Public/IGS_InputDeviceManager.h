#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EIGS_InputDevice.h"
#include "IGS_ControllerSpeakerConnectionChanged.h"
#include "IGS_OnControllerInputEstablished.h"
#include "IGS_OnCurrentControllerDisconnected.h"
#include "IGS_OnInputDeviceChanged.h"
#include "IGS_OnInputKeyPressed.h"
#include "IGS_OnMouseEvent.h"
#include "IGS_OnMouseMoved.h"
#include "IGS_InputDeviceManager.generated.h"

UCLASS(BlueprintType)
class BF_INPUT_API UIGS_InputDeviceManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_InputDeviceManager();

    UFUNCTION(BlueprintCallable)
    void TriggerKeyBindUIUpdate();

    UFUNCTION(BlueprintCallable)
    void RefreshCurrentInputDevice();

    UFUNCTION(BlueprintPure)
    EIGS_InputDevice GetCurrentInputDevice() const;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnInputDeviceChanged OnInputDeviceChanged;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnInputKeyPressed OnInputKeyPressed;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnMouseEvent OnMouseEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnMouseMoved OnMouseMoved;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnCurrentControllerDisconnected OnCurrentControllerDisconnected;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnControllerInputEstablished OnControllerInputEstablished;

    UPROPERTY(VisibleAnywhere)
    EIGS_InputDevice DefaultDevice;

    UPROPERTY(VisibleAnywhere)
    EIGS_InputDevice DefaultGamepadDevice;

    UPROPERTY(VisibleAnywhere)
    EIGS_InputDevice DefaultVRDevice;

    UPROPERTY(BlueprintAssignable)
    FIGS_ControllerSpeakerConnectionChanged OnControllerConnectionChangedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_ControllerSpeakerConnectionChanged OnControllerHeadphonesConnectionChangedEvent;

};
