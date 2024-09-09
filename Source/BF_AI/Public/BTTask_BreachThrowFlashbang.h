#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Templates/SubclassOf.h"
#include "BTTask_BreachThrowFlashbang.generated.h"

class AIGS_AIControllerGame;
class UIGS_ThrowableInventoryObject;

UCLASS()
class BF_AI_API UBTTask_BreachThrowFlashbang : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_BreachThrowFlashbang();

private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UIGS_ThrowableInventoryObject> FlashGrenadeClass;
    
protected:
    UPROPERTY()
    AIGS_AIControllerGame* m_Controller;
    
};

