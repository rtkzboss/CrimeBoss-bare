#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTDecorator_IsOffenceReactionForced.generated.h"

UCLASS()
class BF_AI_API UIGS_BTDecorator_IsOffenceReactionForced : public UBTDecorator {
    GENERATED_BODY()
public:
    UIGS_BTDecorator_IsOffenceReactionForced();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;
    
};

