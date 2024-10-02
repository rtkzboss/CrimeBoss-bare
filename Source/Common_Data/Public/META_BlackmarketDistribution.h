#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_BlackmarketCategory.h"
#include "META_BlackmarketPriorityModifiers.h"
#include "META_QualityDistribution.h"
#include "META_BlackmarketDistribution.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_BlackmarketDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMETA_Interval TotalItemCount;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSet<FMETA_QualityDistribution> QualityDistribution;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FMETA_BlackmarketCategory> Categories;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMETA_BlackmarketPriorityModifiers AdditionalPriorities;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSet<FMETA_QualityDistribution> WeaponSkinChances;

    FMETA_BlackmarketDistribution();
};
