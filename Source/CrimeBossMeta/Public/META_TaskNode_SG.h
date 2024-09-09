#pragma once
#include "CoreMinimal.h"
#include "META_BaseNode_SG.h"
#include "META_TaskSettings.h"
#include "META_TaskNode_SG.generated.h"

class UMETA_TaskCondition;

UCLASS()
class CRIMEBOSSMETA_API UMETA_TaskNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UMETA_TaskNode_SG();

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMETA_TaskSettings Success;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMETA_TaskSettings Fail;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bOverrideTaskExecution;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 OverrideNodeID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UMETA_TaskCondition* Task;
    
};

