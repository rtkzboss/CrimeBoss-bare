#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "CommonButtonBase.h"
#include "IGS_WidgetButtonEventBlueprintSignature.h"
#include "IGS_WidgetButtonWithReferenceEventBlueprintSignature.h"
#include "IGS_WidgetButtonSimple.generated.h"

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetButtonSimple : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UIGS_WidgetButtonSimple();

    UFUNCTION(BlueprintCallable)
    void SimulateClick();

    UFUNCTION(BlueprintCallable)
    void SetSelected(bool inSelected);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_InputAction BoundInputAction;

    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetButtonWithReferenceEventBlueprintSignature OnClickedWithReferenceEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetButtonEventBlueprintSignature OnReleasedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetButtonEventBlueprintSignature OnClickedEvent;

};
