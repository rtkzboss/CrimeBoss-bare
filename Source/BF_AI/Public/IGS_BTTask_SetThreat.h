#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IGS_BTTask_SetThreat.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_SetThreat : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UIGS_BTTask_SetThreat();

};

