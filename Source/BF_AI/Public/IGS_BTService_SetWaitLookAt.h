#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_SetWaitLookAt.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_SetWaitLookAt : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_SetWaitLookAt();

private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OutLookPos;
    
};

