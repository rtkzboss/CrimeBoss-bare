#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EIGS_DirectionalCueType.h"
#include "IGS_BTTask_HandleDirectionalPlayerCue.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_HandleDirectionalPlayerCue : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_HandleDirectionalPlayerCue();

protected:
    UPROPERTY(EditAnywhere)
    EIGS_DirectionalCueType Type;

    UPROPERTY(EditAnywhere)
    float Cooldown;

};
