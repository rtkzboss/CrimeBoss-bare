#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IGS_BreachExplodable.h"
#include "Templates/SubclassOf.h"
#include "BTTask_BreachDestroyPlaceExplosiveBase.generated.h"

UCLASS(Abstract, BlueprintType)
class BF_AI_API UBTTask_BreachDestroyPlaceExplosiveBase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_BreachDestroyPlaceExplosiveBase();

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AIGS_BreachExplodable> m_Explodable;

};
