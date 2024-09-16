#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTDecorator_Base.h"
#include "BTDecorator_WantsReactToOffence.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_WantsReactToOffence : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
    UBTDecorator_WantsReactToOffence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;

};
