#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConstraintRanges.h"
#include "ECurveColor.h"
#include "EPopulationConstraintType.h"
#include "CustomizableObjectPopulationConstraint.generated.h"

class UCurveBase;

USTRUCT()
struct FCustomizableObjectPopulationConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPopulationConstraintType Type;

    UPROPERTY(EditAnywhere)
    int32 ConstraintWeight;

    UPROPERTY(EditAnywhere)
    int32 TrueWeight;

    UPROPERTY(EditAnywhere)
    int32 FalseWeight;

    UPROPERTY(EditAnywhere)
    FString DiscreteValue;

    UPROPERTY(EditAnywhere)
    FLinearColor DiscreteColor;

    UPROPERTY(EditAnywhere)
    TArray<FString> WhiteList;

    UPROPERTY(EditAnywhere)
    TArray<FString> Blacklist;

    UPROPERTY(EditAnywhere)
    TArray<FConstraintRanges> Ranges;

    UPROPERTY(EditAnywhere)
    UCurveBase* Curve;

    UPROPERTY(EditAnywhere)
    ECurveColor CurveColor;

    CUSTOMIZABLEOBJECTPOPULATION_API FCustomizableObjectPopulationConstraint();
};
