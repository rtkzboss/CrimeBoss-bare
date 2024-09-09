#pragma once
#include "CoreMinimal.h"
#include "EMETA_MediaNodeType.h"
#include "META_BaseNode_SG.h"
#include "META_MediaNode_SG.generated.h"

class UMETA_MediaCondition;

UCLASS()
class CRIMEBOSSMETA_API UMETA_MediaNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UMETA_MediaNode_SG();

    UFUNCTION(BlueprintCallable)
    int32 GetTargetNodeID(int32 inResult);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UMETA_MediaCondition* ExecutionBlueprint;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ExpireTimerResultNode;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<int32, int32> ResultNodesMap;
    
private:
    UPROPERTY()
    EMETA_MediaNodeType MediaNodeType;
    
};

