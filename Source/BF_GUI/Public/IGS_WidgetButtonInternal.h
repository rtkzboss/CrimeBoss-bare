#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateEnums.h"
#include "Components/ContentWidget.h"
#include "IGS_OnButtonClickedEvent.h"
#include "IGS_OnButtonHoverEvent.h"
#include "IGS_OnButtonPressedEvent.h"
#include "IGS_OnButtonReleasedEvent.h"
#include "IGS_WidgetButtonInternal.generated.h"

UCLASS()
class BF_GUI_API UIGS_WidgetButtonInternal : public UContentWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetButtonInternal();

    UFUNCTION(BlueprintCallable)
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);

    UFUNCTION(BlueprintCallable)
    void SetStyle(const FButtonStyle& InStyle);

    UFUNCTION(BlueprintCallable)
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);

    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);

    UFUNCTION(BlueprintCallable)
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);

    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(FLinearColor InBackgroundColor);

    UFUNCTION(BlueprintPure)
    bool IsPressed() const;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle WidgetStyle;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BackgroundColor;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnButtonClickedEvent OnClicked;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnButtonClickedEvent OnDoubleClicked;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnButtonPressedEvent OnPressed;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnButtonReleasedEvent OnReleased;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnButtonHoverEvent OnHovered;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnButtonHoverEvent OnUnhovered;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnButtonHoverEvent OnFocused;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnButtonHoverEvent OnUnfocused;

};
