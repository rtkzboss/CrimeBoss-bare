#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_OffenceReactionType.h"
#include "BTDecorator_OffenceType.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_OffenceType : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_OffenceType();

protected:
    UPROPERTY(EditAnywhere)
    EIGS_OffenceReactionType DesiredOffenceReactionType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;
    
};

