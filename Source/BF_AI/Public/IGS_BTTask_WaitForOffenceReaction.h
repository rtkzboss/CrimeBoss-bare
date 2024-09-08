#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "EIGS_OffenceReactionType.h"
#include "IGS_BTTask_WaitForOffenceReaction.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_WaitForOffenceReaction : public UBTTask_Wait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EIGS_OffenceReactionType Type;
    
    UIGS_BTTask_WaitForOffenceReaction();

};

