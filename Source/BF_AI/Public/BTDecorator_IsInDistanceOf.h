#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTDecorator_Base.h"
#include "BTDecorator_IsInDistanceOf.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_IsInDistanceOf : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
    UBTDecorator_IsInDistanceOf();

protected:
    UPROPERTY(EditAnywhere)
    bool bIsBlackBoardDistance;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector DistanceBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetBlackboardKey;
    
};

