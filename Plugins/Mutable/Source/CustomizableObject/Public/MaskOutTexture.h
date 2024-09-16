#pragma once
#include "CoreMinimal.h"
#include "MaskOutTexture.generated.h"

USTRUCT()
struct FMaskOutTexture {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 SizeX;

    UPROPERTY()
    int32 SizeY;

    UPROPERTY()
    TArray<uint32> Data;

public:
    CUSTOMIZABLEOBJECT_API FMaskOutTexture();
};
