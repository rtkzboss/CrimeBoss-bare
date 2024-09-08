#pragma once
#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "Engine/Texture.h"
#include "Engine/TextureDefines.h"
#include "MutableModelImageProperties.generated.h"

USTRUCT(BlueprintType)
struct FMutableModelImageProperties {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString TextureParameterName;
    
    UPROPERTY()
    TEnumAsByte<TextureFilter> Filter;
    
    UPROPERTY()
    uint8 sRGB: 1;
    
    UPROPERTY()
    int32 LODBias;
    
    UPROPERTY()
    TEnumAsByte<TextureGroup> LODGroup;
    
    UPROPERTY()
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY()
    TEnumAsByte<TextureAddress> AddressY;
    
    CUSTOMIZABLEOBJECT_API FMutableModelImageProperties();
};

