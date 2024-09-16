#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlanningBoardItemStatus.h"
#include "META_PlanningBoardManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_PlanningBoardManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTag ActivePlanningBoardTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, EMETA_PlanningBoardItemStatus> PlanningBoardItemsStatuses;

    FMETA_PlanningBoardManagerSaveData();
};
