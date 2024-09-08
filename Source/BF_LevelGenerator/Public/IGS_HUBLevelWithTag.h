#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_BuildConfigurationTileable.h"
#include "IGS_HUBLevelWithTag.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HUBLevelWithTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ScenarioTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_BuildConfigurationTileable LevelDA;
    
    BF_LEVELGENERATOR_API FIGS_HUBLevelWithTag();
};

