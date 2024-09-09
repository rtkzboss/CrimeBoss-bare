#pragma once
#include "CoreMinimal.h"
#include "GenericGraphNode.h"
#include "EMETA_NodeType.h"
#include "META_GraphNode.h"
#include "META_BaseNode_SG.generated.h"

class AMETA_BaseGameMode;

UCLASS(Abstract)
class CRIMEBOSSMETA_API UMETA_BaseNode_SG : public UGenericGraphNode, public IMETA_GraphNode {
    GENERATED_BODY()
public:
    UMETA_BaseNode_SG();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetNodeToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 ExecuteNode(AMETA_BaseGameMode* inGameMode);
    
    UPROPERTY(BlueprintReadOnly)
    int32 ID;
    
    UPROPERTY(BlueprintReadOnly)
    EMETA_NodeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldBeResetted;
    

    // Fix for true pure virtual functions not being implemented
};

