#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "IGS_GeneralListenerController.generated.h"

class AActor;

UCLASS(Config=Inherit)
class BF_AI_API AIGS_GeneralListenerController : public AAIController {
    GENERATED_BODY()
public:
    AIGS_GeneralListenerController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* inActor, FAIStimulus inStimulus);
    
};

