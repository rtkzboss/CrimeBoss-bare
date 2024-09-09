#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShoutScanData.h"
#include "IGS_BTTask_BotShout.generated.h"

UCLASS(BlueprintType)
class BF_AI_API UIGS_BTTask_BotShout : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_BotShout();

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShoutDistance;
    
    UPROPERTY()
    FShoutScanData m_ShoutScanData;
    
};

