#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_BlackmarketCategory.h"
#include "META_BlackmarketRuntimeCategory.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_BlackmarketRuntimeCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_BlackmarketCategory Configuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> CalculatedPriorities;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> SelectedItems;

    FMETA_BlackmarketRuntimeCategory();
};
