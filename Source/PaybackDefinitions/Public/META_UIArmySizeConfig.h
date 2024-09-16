#pragma once
#include "CoreMinimal.h"
#include "META_UIArmyTierCoefficientConfig.h"
#include "META_UIArmySizeConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_UIArmySizeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercentageDifferenceOneSkull;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercentageDifferenceThreeSkulls;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercentageDifferenceWarning;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_UIArmyTierCoefficientConfig> ArmyTierCoeffiecentConfigs;

    FMETA_UIArmySizeConfig();
};
