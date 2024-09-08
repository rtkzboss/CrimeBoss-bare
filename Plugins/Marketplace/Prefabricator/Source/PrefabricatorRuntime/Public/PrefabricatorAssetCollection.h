#pragma once
#include "CoreMinimal.h"
#include "PrefabricatorAssetCollectionItem.h"
#include "PrefabricatorAssetInterface.h"
#include "PrefabricatorAssetCollection.generated.h"

UCLASS()
class PREFABRICATORRUNTIME_API UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPrefabricatorAssetCollectionItem> Prefabs;
    
    UPROPERTY()
    uint32 Version;
    
    UPrefabricatorAssetCollection();

};

