#pragma once
#include "CoreMinimal.h"
#include "CustomizedMaterialTexture2D.generated.h"

class UTexture2D;

USTRUCT()
struct FCustomizedMaterialTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;

    UPROPERTY(EditAnywhere)
    UTexture2D* Texture;

    CUSTOMIZABLEOBJECT_API FCustomizedMaterialTexture2D();
};
