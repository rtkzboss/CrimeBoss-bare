#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMETA_PlanningBoardItemStatus.h"
#include "META_PlanningBoardItemRow.h"
#include "META_PlanningBoardItemObject.generated.h"

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UMETA_PlanningBoardItemObject : public UObject {
    GENERATED_BODY()
public:
    UMETA_PlanningBoardItemObject();

    UFUNCTION(BlueprintCallable)
    void SetStatus(EMETA_PlanningBoardItemStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetData(FMETA_PlanningBoardItemRow& itemData, EMETA_PlanningBoardItemStatus Status);
    
    UFUNCTION(BlueprintPure)
    EMETA_PlanningBoardItemStatus GetStatus() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_PlanningBoardItemRow GetData() const;
    
};

