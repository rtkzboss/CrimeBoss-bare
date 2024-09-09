#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_SolveCivilianToZip.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UBTService_SolveCivilianToZip : public UBTService {
    GENERATED_BODY()
public:
    UBTService_SolveCivilianToZip();

protected:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CivlianToZipKey;
    
    UPROPERTY(EditAnywhere)
    float RefreshDelay;
    
};

