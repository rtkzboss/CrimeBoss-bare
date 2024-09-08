#pragma once
#include "CoreMinimal.h"
#include "EMETA_ConditionExprOperator.h"
#include "META_BaseNode_SG.h"
#include "META_BranchNode_SG.generated.h"

class UMETA_BaseCondition;

UCLASS()
class CRIMEBOSSMETA_API UMETA_BranchNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UMETA_BaseCondition*> Conditions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EMETA_ConditionExprOperator ConditionOperator;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TrueNodeId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FalseNodeId;
    
    UMETA_BranchNode_SG();

};

