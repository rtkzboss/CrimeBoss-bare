#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputDevice.h"
#include "EIGS_InputThumbstickType.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EScreenInputMode.h"
#include "EScreenInputPass.h"
#include "EScreenModifier.h"
#include "EScreenZOrder.h"
#include "IGS_ScreenEventDelegate.h"
#include "IGS_Screen.generated.h"

class UIGS_ScreenHandler;

UCLASS(Abstract, EditInlineNew)
class IGS_UIFRAMEWORK_API UIGS_Screen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag screenTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EScreenZOrder ScreenZOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EScreenModifier ScreenModifier;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BaseScreenModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EScreenInputMode ScreenInputMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EScreenInputPass InputPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SupressSystemMenuOpen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InputDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RefreshFocusAfterClose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CallOnOpenAfterClosePreviousScreen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsOverlay;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ScreenEvent OnOpenEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ScreenEvent OnClosedEvent;
    
protected:
    UPROPERTY()
    UIGS_ScreenHandler* m_ScreenHandler;
    
public:
    UIGS_Screen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshFocus();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpen();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnMenuInputReleased(EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnMenuInputPressed(EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputDeviceChanged(EIGS_InputDevice newDevice);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnClosed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnAnalogInput(EIGS_InputThumbstickType Type, const FVector2D& Value);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsThisScreenOnTop() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GoBack();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetTitleOverride() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void AddScreenToViewport();
    
};

