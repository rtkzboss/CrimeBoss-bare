#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaskOutTexture.h"
#include "MutableMaskOutCache.generated.h"

UCLASS()
class CUSTOMIZABLEOBJECT_API UMutableMaskOutCache : public UObject {
    GENERATED_BODY()
public:
    UMutableMaskOutCache();

    UPROPERTY()
    TMap<FString, FString> Materials;
    
    UPROPERTY()
    TMap<FString, FMaskOutTexture> Textures;
    
};

