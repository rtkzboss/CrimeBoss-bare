#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_LookAt.generated.h"

UCLASS()
class BF_AI_API UBTService_LookAt : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector LookAtBlackBoardKey;
    
    UPROPERTY(EditAnywhere)
    bool bRotateIfBehind;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float LookAtStartMaxAngle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float LookAtStopMaxAngle;
    
    UBTService_LookAt();

};

