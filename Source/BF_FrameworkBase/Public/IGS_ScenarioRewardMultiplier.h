#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_ScenarioRewardMultiplier.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_ScenarioRewardMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ItemName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer MissionScenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RewardMultiplier;
    
    FIGS_ScenarioRewardMultiplier();
};

