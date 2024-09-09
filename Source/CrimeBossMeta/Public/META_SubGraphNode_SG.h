#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalStatus.h"
#include "META_BaseNode_SG.h"
#include "META_SubGraphNode_SG.generated.h"

class UStoryGraphManager;

UCLASS()
class CRIMEBOSSMETA_API UMETA_SubGraphNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UMETA_SubGraphNode_SG();

    UFUNCTION(BlueprintCallable)
    void SetSubGraphResult(EMETA_GoalStatus inResult);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextNodeIDByResult();
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStoryGraphManager> SubGraph;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString SubGraphMan;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TrueNodeId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FalseNodeId;
    
    UPROPERTY()
    UStoryGraphManager* LoadedSubGraph;
    
private:
    UPROPERTY()
    EMETA_GoalStatus Result;
    
    UPROPERTY()
    int32 OldConnectionsCount;
    
};

