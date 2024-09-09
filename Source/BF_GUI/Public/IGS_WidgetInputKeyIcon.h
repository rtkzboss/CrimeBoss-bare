#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputDevice.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetInputKeyIcon.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetInputKeyIcon : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetInputKeyIcon();

    UFUNCTION(BlueprintCallable)
    void SetInputActionToShow(EIGS_InputAction InAction);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputKeyCharacterChanged(FName inInputKeyCharacter, bool inIsFallback);
    
    UFUNCTION()
    void OnInputDeviceChanged(EIGS_InputDevice inDevice);
    
    UFUNCTION(BlueprintCallable)
    void ForceChangeInputDevice(EIGS_InputDevice inDevice);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideInputActionsByDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_InputAction KeyboardMouseInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_InputAction GamepadInputAction;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FName InputKeyCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_InputAction InputActionToShow;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* CharacterText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_InputDevice PreviewInputDevice;
    
};

