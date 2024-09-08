#pragma once
#include "CoreMinimal.h"
#include "ConstructionSystemUIPrefabEntry.generated.h"

class UPrefabricatorAssetInterface;
class UTexture2D;

USTRUCT(BlueprintType)
struct CONSTRUCTIONSYSTEMRUNTIME_API FConstructionSystemUIPrefabEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Tooltip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPrefabricatorAssetInterface* Prefab;
    
    FConstructionSystemUIPrefabEntry();
};

