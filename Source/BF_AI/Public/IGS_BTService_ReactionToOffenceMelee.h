#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_ReactionToOffenceMelee.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_ReactionToOffenceMelee : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_ReactionToOffenceMelee();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;

    UPROPERTY(EditAnywhere)
    FText DialogID;

};
