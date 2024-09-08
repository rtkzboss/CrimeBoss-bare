#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_WeaponQualityChance.generated.h"

USTRUCT(BlueprintType)
struct FMETA_WeaponQualityChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality WeaponQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Chance;
    
    PAYBACKDEFINITIONS_API FMETA_WeaponQualityChance();
};

