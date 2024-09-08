#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECustomizableObjectProjectorType.h"
#include "CustomizableObjectProjector.generated.h"

USTRUCT(BlueprintType)
struct CUSTOMIZABLEOBJECT_API FCustomizableObjectProjector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Position;
    
    UPROPERTY(EditAnywhere)
    FVector Direction;
    
    UPROPERTY(EditAnywhere)
    FVector Up;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(EditAnywhere)
    ECustomizableObjectProjectorType ProjectionType;
    
    UPROPERTY(EditAnywhere)
    float Angle;
    
    FCustomizableObjectProjector();
};

