#pragma once
#include "CoreMinimal.h"
#include "ParameterDecorations.generated.h"

class UTexture2D;

USTRUCT()
struct FParameterDecorations {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UTexture2D*> Images;

    CUSTOMIZABLEOBJECT_API FParameterDecorations();
};
