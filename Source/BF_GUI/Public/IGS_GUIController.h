#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_WheelMenuType.h"
#include "IGS_GUIVisibilityChangedDelegate.h"
#include "IGS_TextChatInputStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_GUIController.generated.h"

class AIGS_PlayerControllerRoot;
class UIGS_GameScreenHandler;
class UIGS_SystemMenuScreen;
class UIGS_WidgetRadialMenuBase;
class UIGS_WidgetTextChatMenu;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_GUI_API UIGS_GUIController : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_GUIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleTextChatMenu();
    
    UFUNCTION(BlueprintCallable)
    void ToggleGameMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchToWheelMenuType(EIGS_WheelMenuType inType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupGUIVisible(bool inGUIVisible, bool inIgnoreLook, bool inIgnoreMove, bool inIgnoreInteraction, bool inShowMouse);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldShowVirtualCursor(bool inShow);
    
protected:
    UFUNCTION()
    bool OpenWheelMenuInternal(EIGS_WheelMenuType inType);
    
    UFUNCTION(BlueprintCallable)
    bool OpenWheelMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenTextChat();
    
    UFUNCTION(BlueprintCallable)
    void OpenSystemMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenGameMenu();
    
private:
    UFUNCTION()
    void OnScreenOpen();
    
    UFUNCTION()
    void OnScreenClosed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRadialMenuAnalogY(float inAxis);
    
    UFUNCTION(BlueprintCallable)
    void OnRadialMenuAnalogX(float inAxis);
    
    UFUNCTION(BlueprintPure)
    bool IsTextChatOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGameMenuOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyWheelMenuOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyModalMenuOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyMenuOpen() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    EIGS_WheelMenuType GetWheelMenuType() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool GetShouldShowVirtualCursor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseWheelMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseTextChat();
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseGameMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseAnyMenu();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool CanWheelMenuBeOpen(EIGS_WheelMenuType inType) const;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_TextChatInputStateChanged OnTextChatInputStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_GUIVisibilityChanged OnGUIVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_SystemMenuScreen> WidgetSystemMenuClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EIGS_WheelMenuType, TSubclassOf<UIGS_WidgetRadialMenuBase>> WheelMenuClasses;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_WidgetRadialMenuBase> WidgetUnlockRadialMenuClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_WidgetRadialMenuBase> WidgetBotSelectionClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_WidgetRadialMenuBase> WidgetPingClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_WidgetTextChatMenu> WidgetTextChatClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WidgetRadialMenuBase* ActiveWheelMenuScreen;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayerController;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsGUIOpen;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsTextChatOpen;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsPendingClose;
    
private:
    UPROPERTY()
    UIGS_GameScreenHandler* m_GameScreenHandler;
    
};

