#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTDecorator_Base.h"
#include "IGS_BTDecorator_CanBeSubdued.generated.h"

UCLASS()
class BF_AI_API UIGS_BTDecorator_CanBeSubdued : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsBlackboardBased;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UIGS_BTDecorator_CanBeSubdued();

};

