#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GenericGraphEdge.generated.h"

class UGenericGraph;
class UGenericGraphNode;

UCLASS(BlueprintType)
class GENERICGRAPHRUNTIME_API UGenericGraphEdge : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UGenericGraph* Graph;
    
    UPROPERTY(BlueprintReadOnly)
    UGenericGraphNode* StartNode;
    
    UPROPERTY(BlueprintReadOnly)
    UGenericGraphNode* EndNode;
    
    UGenericGraphEdge();

    UFUNCTION(BlueprintPure)
    UGenericGraph* GetGraph() const;
    
};

