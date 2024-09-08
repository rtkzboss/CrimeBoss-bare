#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectIdPair.generated.h"

USTRUCT(BlueprintType)
struct CUSTOMIZABLEOBJECT_API FCustomizableObjectIdPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString CustomizableObjectGroupName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString CustomizableObjectName;
    
    FCustomizableObjectIdPair();
};

