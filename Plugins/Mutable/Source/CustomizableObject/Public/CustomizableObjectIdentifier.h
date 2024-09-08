#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectIdentifier.generated.h"

USTRUCT(BlueprintType)
struct CUSTOMIZABLEOBJECT_API FCustomizableObjectIdentifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString CustomizableObjectGroupName;
    
    UPROPERTY()
    FString CustomizableObjectName;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString Guid;
    
    FCustomizableObjectIdentifier();
};

