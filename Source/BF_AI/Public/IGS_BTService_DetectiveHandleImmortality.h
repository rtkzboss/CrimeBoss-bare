#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_DetectiveHandleImmortality.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_DetectiveHandleImmortality : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ReviveChargesKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector DetectiveInitKey;
    
    UIGS_BTService_DetectiveHandleImmortality();

};

