#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConstructionSystemUICategory.h"
#include "ConstructionSystemUIAsset.generated.h"

UCLASS(BlueprintType)
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemUIAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UConstructionSystemUIAsset();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MenuTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FConstructionSystemUICategory> Categories;
    
};

