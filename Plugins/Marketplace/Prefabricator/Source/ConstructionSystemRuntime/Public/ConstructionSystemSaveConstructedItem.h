#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConstructionSystemSaveConstructedItem.generated.h"

class UPrefabricatorAssetInterface;

USTRUCT()
struct CONSTRUCTIONSYSTEMRUNTIME_API FConstructionSystemSaveConstructedItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPrefabricatorAssetInterface* PrefabAsset;
    
    UPROPERTY()
    int32 Seed;
    
    UPROPERTY()
    FTransform Transform;
    
    FConstructionSystemSaveConstructedItem();
};

