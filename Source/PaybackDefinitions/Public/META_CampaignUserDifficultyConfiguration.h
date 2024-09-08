#pragma once
#include "CoreMinimal.h"
#include "EIGS_FPSDifficulty.h"
#include "EIGS_ScenarioDifficulty.h"
#include "META_CampaignUserDifficultyConfiguration.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_CampaignUserDifficultyConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Label;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_FPSDifficulty FPSDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FinalScoreBaseMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_ScenarioDifficulty BigHeistDifficultyOverride;
    
    FMETA_CampaignUserDifficultyConfiguration();
};

