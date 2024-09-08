#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Templates/SubclassOf.h"
#include "BTTask_BreachDestroyPlaceExplosiveBase.generated.h"

class AIGS_BreachExplodable;

UCLASS(Abstract, BlueprintType)
class BF_AI_API UBTTask_BreachDestroyPlaceExplosiveBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AIGS_BreachExplodable> m_Explodable;
    
public:
    UBTTask_BreachDestroyPlaceExplosiveBase();

};

