#include "IGS_WidgetButtonInternal.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"

UIGS_WidgetButtonInternal::UIGS_WidgetButtonInternal() {
    (*this).WidgetStyle.Normal.ImageSize.X = 3.200000000e+01f;
    (*this).WidgetStyle.Normal.ImageSize.Y = 3.200000000e+01f;
    (*this).WidgetStyle.Normal.Margin.Left = 2.500000000e-01f;
    (*this).WidgetStyle.Normal.Margin.Top = 2.500000000e-01f;
    (*this).WidgetStyle.Normal.Margin.Right = 2.500000000e-01f;
    (*this).WidgetStyle.Normal.Margin.Bottom = 2.500000000e-01f;
    (*this).WidgetStyle.Normal.TintColor = FSlateColor(FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    auto gen = TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.Normal, 0)) = TEXT("../../../Engine/Content/Slate/Common/Button.png");
    (*this).WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Box;
    (*this).WidgetStyle.Normal.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.Hovered.ImageSize.X = 3.200000000e+01f;
    (*this).WidgetStyle.Hovered.ImageSize.Y = 3.200000000e+01f;
    (*this).WidgetStyle.Hovered.Margin.Left = 2.500000000e-01f;
    (*this).WidgetStyle.Hovered.Margin.Top = 2.500000000e-01f;
    (*this).WidgetStyle.Hovered.Margin.Right = 2.500000000e-01f;
    (*this).WidgetStyle.Hovered.Margin.Bottom = 2.500000000e-01f;
    (*this).WidgetStyle.Hovered.TintColor = FSlateColor(FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.Hovered, 0)) = TEXT("../../../Engine/Content/Slate/Common/Button_Hovered.png");
    (*this).WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Box;
    (*this).WidgetStyle.Hovered.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.Pressed.ImageSize.X = 3.200000000e+01f;
    (*this).WidgetStyle.Pressed.ImageSize.Y = 3.200000000e+01f;
    (*this).WidgetStyle.Pressed.Margin.Left = 2.500000000e-01f;
    (*this).WidgetStyle.Pressed.Margin.Top = 2.500000000e-01f;
    (*this).WidgetStyle.Pressed.Margin.Right = 2.500000000e-01f;
    (*this).WidgetStyle.Pressed.Margin.Bottom = 2.500000000e-01f;
    (*this).WidgetStyle.Pressed.TintColor = FSlateColor(FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.Pressed, 0)) = TEXT("../../../Engine/Content/Slate/Common/Button_Pressed.png");
    (*this).WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Box;
    (*this).WidgetStyle.Pressed.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.Disabled.TintColor = FSlateColor(FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    (*this).WidgetStyle.NormalPadding.Left = 2.000000000e+00f;
    (*this).WidgetStyle.NormalPadding.Top = 2.000000000e+00f;
    (*this).WidgetStyle.NormalPadding.Right = 2.000000000e+00f;
    (*this).WidgetStyle.NormalPadding.Bottom = 2.000000000e+00f;
    (*this).WidgetStyle.PressedPadding.Left = 2.000000000e+00f;
    (*this).WidgetStyle.PressedPadding.Top = 3.000000000e+00f;
    (*this).WidgetStyle.PressedPadding.Right = 2.000000000e+00f;
    (*this).WidgetStyle.PressedPadding.Bottom = 1.000000000e+00f;
    (*this).ColorAndOpacity = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).BackgroundColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).IsFocusable = true;
}

void UIGS_WidgetButtonInternal::SetTouchMethod(EButtonTouchMethod::Type InTouchMethod) {
}

void UIGS_WidgetButtonInternal::SetStyle(const FButtonStyle& InStyle) {
}

void UIGS_WidgetButtonInternal::SetPressMethod(EButtonPressMethod::Type InPressMethod) {
}

void UIGS_WidgetButtonInternal::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UIGS_WidgetButtonInternal::SetClickMethod(EButtonClickMethod::Type InClickMethod) {
}

void UIGS_WidgetButtonInternal::SetBackgroundColor(FLinearColor InBackgroundColor) {
}

bool UIGS_WidgetButtonInternal::IsPressed() const {
    return false;
}

