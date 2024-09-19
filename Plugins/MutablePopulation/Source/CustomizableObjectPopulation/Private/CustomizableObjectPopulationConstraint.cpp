#include "CustomizableObjectPopulationConstraint.h"

FCustomizableObjectPopulationConstraint::FCustomizableObjectPopulationConstraint() {
    (*this).Type = EPopulationConstraintType::NONE;
    (*this).ConstraintWeight = 1;
    (*this).TrueWeight = 1;
    (*this).FalseWeight = 1;
    (*this).DiscreteValue = TEXT("");
    (*this).DiscreteColor = FLinearColor(0.000000000e+00f, 0.000000000e+00f, 0.000000000e+00f, 0.000000000e+00f);
    (*this).WhiteList = TArray<FString>{};
    (*this).Blacklist = TArray<FString>{};
    (*this).Ranges = TArray<FConstraintRanges>{};
    (*this).Curve = nullptr;
    (*this).CurveColor = ECurveColor::RED;
}
