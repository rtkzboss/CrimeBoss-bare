#pragma once
#include "CoreMinimal.h"
#include "META_MissionID.h"
#include "Templates/SubclassOf.h"
#include "META_PlanningBoardMission.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_PlanningBoardMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UMETA_MissionID> MissionID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Priority;

    FMETA_PlanningBoardMission();
};
