#pragma once
#include "CoreMinimal.h"
#include "IGS_Screen.h"
#include "EIGS_MenuSettingsIndex.h"
#include "IGS_NotifyWantCloseEventSignature.h"
#include "IGS_WidgetOptionsMenu.generated.h"

class AIGS_PlayerControllerRoot;
class APlayerController;
class UIGS_GUIController;
class UIGS_WidgetButtonSimple;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetOptionsMenu : public UIGS_Screen {
    GENERATED_BODY()
public:
    UIGS_WidgetOptionsMenu();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateMenu(bool inSoundSubmenuOnly) const;

    UFUNCTION(BlueprintCallable)
    void ShiftCurrentMenuSelected(int32 Direction);

    UFUNCTION(BlueprintCallable)
    void SetupInMainMenu(APlayerController* inOwningPlayer);

    UFUNCTION(BlueprintCallable)
    void SetupInGame(AIGS_PlayerControllerRoot* inOwningPlayer, UIGS_GUIController* inGUIController, bool inWasSystemMenuOpen);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSettingsButtonsState(bool inState) const;

    UFUNCTION(BlueprintImplementableEvent)
    void RevertButtonClickedEvent() const;

    UFUNCTION(BlueprintCallable)
    void OpenFirstTab();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSubmenuChanged(EIGS_MenuSettingsIndex inType);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnRevertButtonClicked() const;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnApplyButtonClicked() const;

    UFUNCTION(BlueprintImplementableEvent)
    void ApplyButtonClickedEvent() const;

public:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetButtonSimple* GameSetButton;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetButtonSimple* GraphicsSetButton;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetButtonSimple* SoundSetButton;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetButtonSimple* ControlsSetButton;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetButtonSimple* ApplyButton;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetButtonSimple* RevertButton;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetButtonSimple* CloseButton;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UWidgetSwitcher* SettingsWidgetSwitcher;

    UPROPERTY(BlueprintAssignable)
    FIGS_NotifyWantCloseEventSignature OnWantCloseEvent;

};
