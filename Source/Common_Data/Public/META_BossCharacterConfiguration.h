#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_BossCharacterConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_BossCharacterConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMETA_Interval LevelRange;

    UPROPERTY(EditDefaultsOnly)
    float MissionBonusReward;

    FMETA_BossCharacterConfiguration();
};
