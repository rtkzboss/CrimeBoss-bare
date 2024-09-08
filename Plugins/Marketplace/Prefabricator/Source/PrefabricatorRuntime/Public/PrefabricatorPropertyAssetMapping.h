#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrefabricatorPropertyAssetMapping.generated.h"

USTRUCT(BlueprintType)
struct PREFABRICATORRUNTIME_API FPrefabricatorPropertyAssetMapping {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSoftObjectPath AssetReference;
    
    UPROPERTY()
    FString AssetClassName;
    
    UPROPERTY()
    FName AssetObjectPath;
    
    UPROPERTY()
    bool bUseQuotes;
    
    FPrefabricatorPropertyAssetMapping();
};

