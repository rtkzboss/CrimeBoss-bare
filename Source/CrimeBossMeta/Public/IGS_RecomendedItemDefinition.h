#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_RecomendedItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FIGS_RecomendedItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AmountToBeSelected;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer JobCategoryPool;
    
    CRIMEBOSSMETA_API FIGS_RecomendedItemDefinition();
};

