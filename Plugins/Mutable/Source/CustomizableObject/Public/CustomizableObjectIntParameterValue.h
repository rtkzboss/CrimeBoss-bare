#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectIntParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectIntParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ParameterName;
    
    UPROPERTY(VisibleAnywhere)
    FString ParameterValueName;
    
    UPROPERTY(VisibleAnywhere)
    FString Uid;
    
    UPROPERTY()
    TArray<FString> ParameterRangeValueNames;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectIntParameterValue();
};

