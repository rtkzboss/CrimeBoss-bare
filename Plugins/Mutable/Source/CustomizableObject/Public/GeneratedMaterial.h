#pragma once
#include "CoreMinimal.h"
#include "GeneratedTexture.h"
#include "GeneratedMaterial.generated.h"

USTRUCT()
struct FGeneratedMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FGeneratedTexture> Textures;

    CUSTOMIZABLEOBJECT_API FGeneratedMaterial();
};
