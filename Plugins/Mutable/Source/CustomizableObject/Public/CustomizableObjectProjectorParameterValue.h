#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectProjector.h"
#include "CustomizableObjectProjectorParameterValue.generated.h"

USTRUCT()
struct FCustomizableObjectProjectorParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ParameterName;
    
    UPROPERTY(VisibleAnywhere)
    FCustomizableObjectProjector Value;
    
    UPROPERTY(VisibleAnywhere)
    FString Uid;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FCustomizableObjectProjector> RangeValues;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectProjectorParameterValue();
};

