#pragma once
#include "CoreMinimal.h"
#include "MutableModelParameterValue.generated.h"

USTRUCT()
struct FMutableModelParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;

    UPROPERTY()
    int32 Value;

    CUSTOMIZABLEOBJECT_API FMutableModelParameterValue();
};
