#pragma once
#include "CoreMinimal.h"
#include "META_CampaignCostMultipliers.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_CampaignCostMultipliers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float GlobalCostsMultiplier;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TurfWarCostsMultiplier;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float WeaponCostsMultiplier;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float EquipmentCostsMultiplier;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PlanningCostsMultiplier;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CrewHiringCostsMultiplier;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PlotlineCostsMultiplier;

    FMETA_CampaignCostMultipliers();
};
