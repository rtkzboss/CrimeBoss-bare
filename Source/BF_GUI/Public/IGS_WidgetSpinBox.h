#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetSpinBoxBlueprintEventSignatureDelegate.h"
#include "IGS_WidgetSpinBox.generated.h"

class UBorder;
class UIGS_WidgetButton;
class UIGS_WidgetDecorationBorder;
class UTextBlock;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetSpinBox : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* SpinBoxName;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* SpinBoxText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetButton* LeftButton;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetButton* RightButton;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetDecorationBorder* NameBorder;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetDecorationBorder* ValueBorder;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBorder* NameBG;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBorder* ValueBG;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SpinBoxNameText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StepSizeValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseEnumMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> EnumNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FontColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DisabledFontColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DisabledBackgroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalButtonColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoveredButtonColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PressedButtonColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SelectedButtonColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DisabledButtonColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoveredImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PressedImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SelectedImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DisabledImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoveredBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PressedBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SelectedBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DisabledBorderTint;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetSpinBoxBlueprintEventSignature OnValueDecreasedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetSpinBoxBlueprintEventSignature OnValueIncreasedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetSpinBoxBlueprintEventSignature OnValueChangedEvent;
    
    UIGS_WidgetSpinBox();

    UFUNCTION(BlueprintCallable)
    void SetUseEnumMode(bool inUseEnumMode);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSizeValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnumNames(const TArray<FText>& inEnumNames);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(int32 InValue);
    
protected:
    UFUNCTION()
    void OnValueIncreased(int32 InValue);
    
    UFUNCTION()
    void OnValueDecreased(int32 InValue);
    
private:
    UFUNCTION()
    void OnRightArrowClicked();
    
protected:
    UFUNCTION()
    void OnOnValueChanged(int32 InValue);
    
private:
    UFUNCTION()
    void OnLeftArrowClicked();
    
};

