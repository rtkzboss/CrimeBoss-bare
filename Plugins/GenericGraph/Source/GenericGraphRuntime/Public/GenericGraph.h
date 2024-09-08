#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GenericGraph.generated.h"

class UGenericGraphEdge;
class UGenericGraphNode;

UCLASS(Abstract, BlueprintType)
class GENERICGRAPHRUNTIME_API UGenericGraph : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 END_GRAPH_VALUE;
    
    UPROPERTY(BlueprintReadOnly)
    int32 START_GRAPH_VALUE;
    
    UPROPERTY()
    FString Name;
    
    UPROPERTY(VisibleDefaultsOnly)
    TSubclassOf<UGenericGraphNode> NodeType;
    
    UPROPERTY(VisibleDefaultsOnly)
    TSubclassOf<UGenericGraphEdge> EdgeType;
    
    UPROPERTY()
    FGameplayTagContainer GraphTags;
    
    UPROPERTY(BlueprintReadOnly)
    UGenericGraphNode* RootNode;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, UGenericGraphNode*> AllNodes;
    
    UGenericGraph();

    UFUNCTION(BlueprintCallable)
    void Print(bool ToConsole, bool ToScreen);
    
    UFUNCTION(BlueprintCallable)
    void GetNodesByLevel(int32 Level, TArray<UGenericGraphNode*>& Nodes);
    
    UFUNCTION(BlueprintPure)
    int32 GetLevelNum() const;
    
};

