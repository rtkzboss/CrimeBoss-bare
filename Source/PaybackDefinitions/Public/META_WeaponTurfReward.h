#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_WeaponTurfReward.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_WeaponTurfReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality Quality;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WeaponQuality;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Amount;

    FMETA_WeaponTurfReward();
};
