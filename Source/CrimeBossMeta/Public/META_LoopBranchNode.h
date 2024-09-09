#pragma once
#include "CoreMinimal.h"
#include "META_LoopBranchNodeSaveData.h"
#include "META_BaseNode_SG.h"
#include "META_LoopBranchNode.generated.h"

UCLASS()
class CRIMEBOSSMETA_API UMETA_LoopBranchNode : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UMETA_LoopBranchNode();

    UFUNCTION(BlueprintCallable)
    void SetSaveData(FMETA_LoopBranchNodeSaveData SaveData);
    
    UFUNCTION(BlueprintCallable)
    void GetSaveData(FMETA_LoopBranchNodeSaveData& SaveData);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AmountOfActivations;
    
    UPROPERTY()
    int32 CurrentAmountOfActivation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LimitExceededNodeId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ContinueNodeId;
    
};

