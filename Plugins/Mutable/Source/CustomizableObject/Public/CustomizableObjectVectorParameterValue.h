#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizableObjectVectorParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectVectorParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ParameterName;
    
    UPROPERTY(VisibleAnywhere)
    FLinearColor ParameterValue;
    
    UPROPERTY(VisibleAnywhere)
    FString Uid;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectVectorParameterValue();
};

