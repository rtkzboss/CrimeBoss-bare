#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectBoolParameterValue.generated.h"

USTRUCT()
struct FCustomizableObjectBoolParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ParameterName;
    
    UPROPERTY(VisibleAnywhere)
    bool ParameterValue;
    
    UPROPERTY(VisibleAnywhere)
    FString Uid;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectBoolParameterValue();
};

