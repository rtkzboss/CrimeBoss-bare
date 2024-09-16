#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_JobResult.h"
#include "IGS_CharacterMissionProgress.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_CharacterMissionProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, EMETA_JobResult> MissionsStatuses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool Completed;

    FIGS_CharacterMissionProgress();
};
