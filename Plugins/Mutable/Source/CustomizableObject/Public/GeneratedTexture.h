#pragma once
#include "CoreMinimal.h"
#include "GeneratedTexture.generated.h"

class UTexture2D;

USTRUCT()
struct FGeneratedTexture {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ID;

    UPROPERTY(EditAnywhere)
    FString Name;

    UPROPERTY(EditAnywhere)
    UTexture2D* Texture;

    CUSTOMIZABLEOBJECT_API FGeneratedTexture();
};
