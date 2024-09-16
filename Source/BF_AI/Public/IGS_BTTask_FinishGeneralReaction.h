#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "IGS_BTTask_FinishGeneralReaction.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_FinishGeneralReaction : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_FinishGeneralReaction();

    UPROPERTY(EditAnywhere)
    bool bSuccess;

};
