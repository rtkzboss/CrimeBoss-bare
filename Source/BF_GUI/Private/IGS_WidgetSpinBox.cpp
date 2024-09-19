#include "IGS_WidgetSpinBox.h"

UIGS_WidgetSpinBox::UIGS_WidgetSpinBox() : Super(FObjectInitializer::Get()) {
    (*this).SpinBoxNameText = FText::FromString(TEXT("##SPINBOX_NAME##"));
    (*this).MaxValue = 1;
    (*this).StepSizeValue = 1;
    (*this).FontColor = FLinearColor(0.000000000e+00f, 0.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).DisabledFontColor = FLinearColor(5.000000000e-01f, 5.000000000e-01f, 5.000000000e-01f, 1.000000000e+00f);
    (*this).BackgroundColor = FLinearColor(5.000000000e-01f, 5.000000000e-01f, 5.000000000e-01f, 1.000000000e+00f);
    (*this).DisabledBackgroundColor = FLinearColor(1.000000015e-01f, 1.000000015e-01f, 1.000000015e-01f, 1.000000000e+00f);
    (*this).NormalButtonColor = FLinearColor(5.000000000e-01f, 5.000000000e-01f, 5.000000000e-01f, 1.000000000e+00f);
    (*this).HoveredButtonColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).PressedButtonColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).SelectedButtonColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).DisabledButtonColor = FLinearColor(1.000000015e-01f, 1.000000015e-01f, 1.000000015e-01f, 1.000000000e+00f);
    (*this).NormalImageTint = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).HoveredImageTint = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).PressedImageTint = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).SelectedImageTint = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).DisabledImageTint = FLinearColor(5.000000000e-01f, 5.000000000e-01f, 5.000000000e-01f, 1.000000000e+00f);
    (*this).NormalBorderTint = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).HoveredBorderTint = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).PressedBorderTint = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).SelectedBorderTint = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).DisabledBorderTint = FLinearColor(5.000000000e-01f, 5.000000000e-01f, 5.000000000e-01f, 1.000000000e+00f);
}

void UIGS_WidgetSpinBox::SetUseEnumMode(bool inUseEnumMode) {
}

void UIGS_WidgetSpinBox::SetStepSizeValue(int32 InValue) {
}

void UIGS_WidgetSpinBox::SetMinValue(int32 InValue) {
}

void UIGS_WidgetSpinBox::SetMaxValue(int32 InValue) {
}

void UIGS_WidgetSpinBox::SetEnumNames(const TArray<FText>& inEnumNames) {
}

void UIGS_WidgetSpinBox::SetCurrentValue(int32 InValue) {
}

void UIGS_WidgetSpinBox::OnValueIncreased(int32 InValue) {
}

void UIGS_WidgetSpinBox::OnValueDecreased(int32 InValue) {
}

void UIGS_WidgetSpinBox::OnRightArrowClicked() {
}

void UIGS_WidgetSpinBox::OnOnValueChanged(int32 InValue) {
}

void UIGS_WidgetSpinBox::OnLeftArrowClicked() {
}

