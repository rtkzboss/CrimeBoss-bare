#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "IGS_BTTask_MoveToAsync.generated.h"

UCLASS(Config=Inherit)
class UIGS_BTTask_MoveToAsync : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseHierarchicalPathfinding: 1;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 bDontUsePathLengthLimiter: 1;
    
public:
    UIGS_BTTask_MoveToAsync();

};

