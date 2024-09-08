#pragma once
#include "CoreMinimal.h"
#include "PrefabricatorAssetCollectionItem.generated.h"

class UPrefabricatorAsset;

USTRUCT(BlueprintType)
struct PREFABRICATORRUNTIME_API FPrefabricatorAssetCollectionItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPrefabricatorAsset> PrefabAsset;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    FPrefabricatorAssetCollectionItem();
};

