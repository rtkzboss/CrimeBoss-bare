#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_MinigunnerHandleFocusPoints.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_MinigunnerHandleFocusPoints : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_MinigunnerHandleFocusPoints();

private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MoveToLookAtPosition;

};
