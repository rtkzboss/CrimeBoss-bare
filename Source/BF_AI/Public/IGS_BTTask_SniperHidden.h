#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BTTask_SniperHidden.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_SniperHidden : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_SniperHidden();

protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval Cooldown;
    
    UPROPERTY(EditAnywhere)
    float MaxThreatToFinish;
    
};

