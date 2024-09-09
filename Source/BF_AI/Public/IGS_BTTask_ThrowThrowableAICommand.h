#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_ThrowBase.h"
#include "IGS_BTTask_ThrowThrowableAICommand.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_ThrowThrowableAICommand : public UIGS_BTTask_ThrowBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_ThrowThrowableAICommand();

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
};

