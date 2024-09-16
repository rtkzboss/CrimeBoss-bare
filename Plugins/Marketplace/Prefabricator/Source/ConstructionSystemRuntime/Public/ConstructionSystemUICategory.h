#pragma once
#include "CoreMinimal.h"
#include "ConstructionSystemUIPrefabEntry.h"
#include "ConstructionSystemUICategory.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct CONSTRUCTIONSYSTEMRUNTIME_API FConstructionSystemUICategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FConstructionSystemUIPrefabEntry> PrefabEntries;

    FConstructionSystemUICategory();
};
