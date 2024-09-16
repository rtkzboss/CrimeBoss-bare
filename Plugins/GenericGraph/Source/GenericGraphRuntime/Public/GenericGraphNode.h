#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GenericGraphNode.generated.h"

class UGenericGraph;
class UGenericGraphEdge;

UCLASS(Blueprintable)
class GENERICGRAPHRUNTIME_API UGenericGraphNode : public UObject {
    GENERATED_BODY()
public:
    UGenericGraphNode();

    UFUNCTION(BlueprintCallable)
    void RefreshValuesOnSaveGraph();

    UFUNCTION(BlueprintPure)
    bool IsLeafNode() const;

    UFUNCTION(BlueprintPure)
    int32 GetNodeId() const;

    UFUNCTION(BlueprintPure)
    UGenericGraph* GetGraph() const;

    UFUNCTION(BlueprintCallable)
    UGenericGraphEdge* GetEdge(UGenericGraphNode* ChildNode);

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetDescription() const;

    UPROPERTY(BlueprintReadOnly)
    UGenericGraph* Graph;

    UPROPERTY(BlueprintReadOnly)
    TArray<UGenericGraphNode*> ParentNodes;

    UPROPERTY(BlueprintReadOnly)
    TArray<UGenericGraphNode*> ChildrenNodes;

    UPROPERTY(BlueprintReadOnly)
    TMap<UGenericGraphNode*, UGenericGraphEdge*> Edges;

};
