#pragma once
#include "CoreMinimal.h"
#include "META_BaseGraphComponent.h"
#include "META_BaseCallback.generated.h"

class UGenericGraphNode;

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_BaseCallback : public UMETA_BaseGraphComponent {
    GENERATED_BODY()
public:
    UMETA_BaseCallback();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateNextNodes(const TArray<UGenericGraphNode*>& inChildrenNodes, int32 inOldConnectionsCount);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FString, int32> GetResultPaths();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAvailableConnections();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNeedForceExecuteAfterCallbackTrigger;

};
