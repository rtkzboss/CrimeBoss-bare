#include "IGS_Slider.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"

UIGS_Slider::UIGS_Slider() {
    (*this).MaxValue = 1.000000000e+00f;
    (*this).WidgetStyle.NormalBarImage.TintColor = FSlateColor(FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    (*this).WidgetStyle.NormalBarImage.DrawAs = ESlateBrushDrawType::Box;
    (*this).WidgetStyle.HoveredBarImage.TintColor = FSlateColor(FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    (*this).WidgetStyle.HoveredBarImage.DrawAs = ESlateBrushDrawType::Box;
    (*this).WidgetStyle.DisabledBarImage.TintColor = FSlateColor(FLinearColor(5.000000000e-01f, 5.000000000e-01f, 5.000000000e-01f, 1.000000000e+00f));
    (*this).WidgetStyle.DisabledBarImage.DrawAs = ESlateBrushDrawType::Box;
    (*this).WidgetStyle.NormalThumbImage.ImageSize.X = 8.000000000e+00f;
    (*this).WidgetStyle.NormalThumbImage.ImageSize.Y = 1.400000000e+01f;
    (*this).WidgetStyle.NormalThumbImage.TintColor = FSlateColor(FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    auto gen = TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.NormalThumbImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/Button.png");
    (*this).WidgetStyle.NormalThumbImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.NormalThumbImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.HoveredThumbImage.ImageSize.X = 8.000000000e+00f;
    (*this).WidgetStyle.HoveredThumbImage.ImageSize.Y = 1.400000000e+01f;
    (*this).WidgetStyle.HoveredThumbImage.TintColor = FSlateColor(FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.HoveredThumbImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/Button.png");
    (*this).WidgetStyle.HoveredThumbImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.HoveredThumbImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.DisabledThumbImage.ImageSize.X = 8.000000000e+00f;
    (*this).WidgetStyle.DisabledThumbImage.ImageSize.Y = 1.400000000e+01f;
    (*this).WidgetStyle.DisabledThumbImage.TintColor = FSlateColor(FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.DisabledThumbImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/Button_Disabled.png");
    (*this).WidgetStyle.DisabledThumbImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.DisabledThumbImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.BarThickness = 2.000000000e+00f;
    (*this).SliderBarColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).SliderHandleColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).RequiresControllerLock = true;
    (*this).StepSize = 9.999999776e-03f;
    (*this).AnalogInputDelay = 1.000000015e-01f;
    (*this).SlideIncreaseSpeed = 5.000000000e-01f;
    (*this).CurrentAnalogInputDelay = 1.000000015e-01f;
    (*this).IsFocusable = true;
    (*this).LeftThumbstickThreshold = 5.000000000e-01f;
}

void UIGS_Slider::SetValue(float InValue) {
}

void UIGS_Slider::SetStepSize(float InValue) {
}

void UIGS_Slider::SetSliderHandleColor(FLinearColor InValue) {
}

void UIGS_Slider::SetSliderBarColor(FLinearColor InValue) {
}

void UIGS_Slider::SetMinValue(float InValue) {
}

void UIGS_Slider::SetMaxValue(float InValue) {
}

void UIGS_Slider::SetLocked(bool InValue) {
}

void UIGS_Slider::SetIndentHandle(bool InValue) {
}

void UIGS_Slider::ScrollRight() {
}

void UIGS_Slider::ScrollLeft() {
}

float UIGS_Slider::SanitizeValue(float InValue) const {
    return 0.000000000e+00f;
}

float UIGS_Slider::GetValue() const {
    return 0.000000000e+00f;
}

float UIGS_Slider::GetNormalizedValue() const {
    return 0.000000000e+00f;
}

bool UIGS_Slider::AnalogValueChange(const FGeometry& InGeometry, const FAnalogInputEvent& InAnalogEvent) {
    return false;
}

