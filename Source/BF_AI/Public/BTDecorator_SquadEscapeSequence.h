#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_SquadBase.h"
#include "BTDecorator_SquadEscapeSequence.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_SquadEscapeSequence : public UBTDecorator_SquadBase {
    GENERATED_BODY()
public:
    UBTDecorator_SquadEscapeSequence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector EscapePointKey;
    
};

