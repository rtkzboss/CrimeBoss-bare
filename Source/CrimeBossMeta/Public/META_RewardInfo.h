#pragma once
#include "CoreMinimal.h"
#include "EMETA_ActionCardTheme.h"
#include "META_RewardInfo.generated.h"

USTRUCT(BlueprintType)
struct FMETA_RewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ActionCardTheme Theme;

    CRIMEBOSSMETA_API FMETA_RewardInfo();
};
