#include "IGS_WidgetFocusableSpinBox.h"

UIGS_WidgetFocusableSpinBox::UIGS_WidgetFocusableSpinBox() : Super(FObjectInitializer::Get()) {
    (*this).SpinBoxNameText = FText::FromString(TEXT("##SPINBOX_NAME##"));
    (*this).MaxValue = 1;
    (*this).StepSizeValue = 1;
    (*this).LeftThumbstickThreshold = 5.000000000e-01f;
    (*this).AnalogInputDelay = 1.000000015e-01f;
    (*this).FontColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
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

void UIGS_WidgetFocusableSpinBox::UpdateText() const {
}

void UIGS_WidgetFocusableSpinBox::SetUseEnumMode(bool inUseEnumMode) {
}

void UIGS_WidgetFocusableSpinBox::SetStepSizeValue(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::SetMinValue(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::SetMaxValue(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::SetEnumNames(const TArray<FText>& inEnumNames) {
}

void UIGS_WidgetFocusableSpinBox::SetCurrentValue(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::ScrollRight() {
}

void UIGS_WidgetFocusableSpinBox::ScrollLeft() {
}

void UIGS_WidgetFocusableSpinBox::ProcessSettingFontColor(FLinearColor InColor) {
}

void UIGS_WidgetFocusableSpinBox::OnValueIncreased(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::OnValueDecreased(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::OnValueChanged(int32 InValue) {
}



