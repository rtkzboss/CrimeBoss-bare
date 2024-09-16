#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectExportOptions.generated.h"

USTRUCT()
struct FCustomizableObjectExportOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bTextureCompression;

    UPROPERTY()
    FString TargetPlatform;

    CUSTOMIZABLEOBJECT_API FCustomizableObjectExportOptions();
};
