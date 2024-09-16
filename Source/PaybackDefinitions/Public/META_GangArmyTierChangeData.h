#pragma once
#include "CoreMinimal.h"
#include "EMETA_ArmyTier.h"
#include "META_GangArmyTierChangeData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GangArmyTierChangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ArmyTier ArmyTireChange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentGangArmyTierChangeCooldown;

    FMETA_GangArmyTierChangeData();
};
