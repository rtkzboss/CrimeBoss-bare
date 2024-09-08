#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTDecorator_Base.h"
#include "BTDecorator_IsZiptieByOther.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_IsZiptieByOther : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CivToZiptieKey;
    
public:
    UBTDecorator_IsZiptieByOther();

};

