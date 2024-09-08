#pragma once
#include "CoreMinimal.h"
#include "ConstructionSystemTool.h"
#include "ConstructionSystemRemoveTool.generated.h"

class APrefabActor;

UCLASS(BlueprintType)
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemRemoveTool : public UConstructionSystemTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceDistance;
    
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<APrefabActor> FocusedActor;
    
public:
    UConstructionSystemRemoveTool();

protected:
    UFUNCTION()
    void HandleInput_RemoveAtCursor();
    
};

