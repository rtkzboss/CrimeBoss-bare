#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectTextureParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectTextureParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ParameterName;
    
    UPROPERTY(VisibleAnywhere)
    uint64 ParameterValue;
    
    UPROPERTY(VisibleAnywhere)
    FString Uid;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectTextureParameterValue();
};

