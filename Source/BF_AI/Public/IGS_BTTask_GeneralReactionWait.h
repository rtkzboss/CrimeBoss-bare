#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "EIGS_GRWaitType.h"
#include "IGS_BTTask_GeneralReactionWait.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_GeneralReactionWait : public UBTTask_Wait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EIGS_GRWaitType Type;
    
    UIGS_BTTask_GeneralReactionWait();

};

