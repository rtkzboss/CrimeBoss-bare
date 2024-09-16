#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_ThrowRequestSequence.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_ThrowRequestSequence : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_ThrowRequestSequence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ThrowRequestKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ThrowSlotKey;

};
