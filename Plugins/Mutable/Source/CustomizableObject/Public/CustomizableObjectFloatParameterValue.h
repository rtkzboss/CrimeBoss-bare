#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectFloatParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectFloatParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ParameterName;
    
    UPROPERTY(VisibleAnywhere)
    float ParameterValue;
    
    UPROPERTY(VisibleAnywhere)
    FString Uid;
    
    UPROPERTY(VisibleAnywhere)
    TArray<float> ParameterRangeValues;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectFloatParameterValue();
};

