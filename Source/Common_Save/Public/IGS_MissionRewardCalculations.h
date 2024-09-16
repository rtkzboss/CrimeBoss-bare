#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_MissionRewardCalculations.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_MissionRewardCalculations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTag RowType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Value;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Score;

    FIGS_MissionRewardCalculations();
};
