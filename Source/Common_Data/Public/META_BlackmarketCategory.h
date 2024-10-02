#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_BlackmarketItemFilterType.h"
#include "META_QualityDistribution.h"
#include "META_BlackmarketCategory.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_BlackmarketCategory {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EMETA_BlackmarketItemFilterType FilterType;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSet<FString> ItemGroups;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer ItemTags;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer WeaponClasses;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer EntitlementTags;

    UPROPERTY(EditAnywhere)
    bool bUseCustomImportance;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Importance;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinimumCount;

    UPROPERTY(EditAnywhere)
    bool bHasMaximumRange;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaximumCount;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChanceToHappen;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSet<FMETA_QualityDistribution> QualityDistributionOverride;

    FMETA_BlackmarketCategory();
};
