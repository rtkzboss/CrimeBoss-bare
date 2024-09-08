#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TrafficPathfindingEdge.generated.h"

class UTrafficPathfindingNode;

UCLASS()
class BF_AI_API UTrafficPathfindingEdge : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTrafficPathfindingNode* FromNode;
    
    UPROPERTY()
    UTrafficPathfindingNode* ToNode;
    
    UTrafficPathfindingEdge();

};

