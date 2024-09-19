#include "IGS_WidgetFocusableSlider.h"

UIGS_WidgetFocusableSlider::UIGS_WidgetFocusableSlider() : Super(FObjectInitializer::Get()) {
    (*this).SpinBoxNameText = FText::FromString(TEXT("##SPINBOX_NAME##"));
    (*this).MaxValue = 1.000000000e+00f;
    (*this).StepSize = 9.999999776e-03f;
    (*this).LeftThumbstickThreshold = 5.000000000e-01f;
    (*this).AnalogInputDelay = 1.000000015e-01f;
    (*this).MaximumFractionalDigits = 3;
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

void UIGS_WidgetFocusableSlider::UpdateText() const {
}

void UIGS_WidgetFocusableSlider::SetStepSizeValue(float InValue) {
}

void UIGS_WidgetFocusableSlider::SetSpinBoxNameText(FText inSpinBoxNameText) {
}

void UIGS_WidgetFocusableSlider::SetSliderStyle(FSliderStyle inNewStyle) {
}

void UIGS_WidgetFocusableSlider::SetMinValue(float InValue) {
}

void UIGS_WidgetFocusableSlider::SetMaxValue(float InValue) {
}

void UIGS_WidgetFocusableSlider::SetCurrentValue(float InValue) {
}

void UIGS_WidgetFocusableSlider::ScrollRight() {
}

void UIGS_WidgetFocusableSlider::ScrollLeft() {
}

float UIGS_WidgetFocusableSlider::SanitizeValue(float InValue) const {
    return 0.000000000e+00f;
}

void UIGS_WidgetFocusableSlider::ProcessSettingFontColor(FLinearColor InColor) {
}

void UIGS_WidgetFocusableSlider::OnValueChanged(float InValue) {
}

