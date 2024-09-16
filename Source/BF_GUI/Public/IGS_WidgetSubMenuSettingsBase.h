#pragma once
#include "CoreMinimal.h"
#include "IGS_SettingsValueChangedEvent.h"
#include "IGS_WidgetSubMenuBase.h"
#include "IGS_WidgetSubMenuSettingsBase.generated.h"

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetSubMenuSettingsBase : public UIGS_WidgetSubMenuBase {
    GENERATED_BODY()
public:
    UIGS_WidgetSubMenuSettingsBase();

    UFUNCTION(BlueprintCallable)
    void SetDirty();

    UFUNCTION(BlueprintCallable)
    void RevertToDefaults();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshFocus();

    UFUNCTION(BlueprintImplementableEvent)
    void OnRevertToDefaults();

    UFUNCTION(BlueprintImplementableEvent)
    void OnRevert();

    UFUNCTION(BlueprintImplementableEvent)
    void OnApply();

    UPROPERTY(BlueprintAssignable)
    FIGS_SettingsValueChangedEvent OnSettingsValueChanged;

};
