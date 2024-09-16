#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlanningBoardItemStatus.h"
#include "META_ChangeStatusPlanningBoardEvent.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_ChangeStatusPlanningBoardEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag itemTag;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag voiceoverTag;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EMETA_PlanningBoardItemStatus fromStatus;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EMETA_PlanningBoardItemStatus toStatus;

    FMETA_ChangeStatusPlanningBoardEvent();
};
