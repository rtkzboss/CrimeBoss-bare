#pragma once
#include "CoreMinimal.h"
#include "EMETA_MessageType.h"
#include "GenericGraphNode_ErrorData.generated.h"

class UGenericGraphNode;

USTRUCT(BlueprintType)
struct FGenericGraphNode_ErrorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_MessageType MessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGenericGraphNode* Node;
    
    GENERICGRAPHRUNTIME_API FGenericGraphNode_ErrorData();
};

