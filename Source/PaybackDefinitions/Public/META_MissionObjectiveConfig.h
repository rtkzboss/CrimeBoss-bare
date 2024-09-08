#pragma once
#include "CoreMinimal.h"
#include "META_ObjectiveConfig.h"
#include "META_MissionObjectiveConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_MissionObjectiveConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_ObjectiveConfig Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DescriptionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideReward;
    
    FMETA_MissionObjectiveConfig();
};

