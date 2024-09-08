#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_WidgetTextChatMenu.generated.h"

class APlayerController;
class UEditableTextBox;
class UIGS_GUIController;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetTextChatMenu : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<APlayerController> OwningPlayer;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_GUIController> GUIController;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UEditableTextBox* ChatInput;
    
public:
    UIGS_WidgetTextChatMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenChat();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTextChatStateChangedEvent(bool inOpen);
    
protected:
    UFUNCTION()
    void OnTextChatStateChanged(bool inOpen);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnTextChatSetup();
    
    UFUNCTION(BlueprintCallable)
    void HideVirtualKeyboard();
    
    UFUNCTION(BlueprintCallable)
    void ForceCloseChat();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FocusChat() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FocusAndShowVirtualKeyboard();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseChat();
    
    UFUNCTION(BlueprintNativeEvent)
    void BindToMessages();
    
};

