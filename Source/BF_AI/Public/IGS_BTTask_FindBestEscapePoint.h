#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_FindBestEscapePoint.generated.h"

class AActor;
class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTTask_FindBestEscapePoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_FindBestEscapePoint();

protected:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector EscapePointKey;
    
    UPROPERTY()
    TArray<AActor*> EsapePointsResult;
    
};

