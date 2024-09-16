#pragma once
#include "CoreMinimal.h"
#include "EMETA_BonusType.h"
#include "META_BonusSetup.h"
#include "META_LevelBonusSetup.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_LevelBonusSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_BonusType BonusType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_BonusSetup> Bonuses;

    FMETA_LevelBonusSetup();
};
