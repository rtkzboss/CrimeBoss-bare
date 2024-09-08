#pragma once
#include "CoreMinimal.h"
#include "KantanCategoryStyle.h"
#include "CategoryStyleManualMapping.generated.h"

USTRUCT(BlueprintType)
struct FCategoryStyleManualMapping {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CategoryId;
    
    UPROPERTY(EditAnywhere)
    FKantanCategoryStyle Style;
    
    KANTANCHARTSUMG_API FCategoryStyleManualMapping();
};

