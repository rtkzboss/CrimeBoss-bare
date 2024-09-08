#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Templates/SubclassOf.h"
#include "BTDecorator_CanStrafe.generated.h"

class UNavigationQueryFilter;

UCLASS()
class BF_AI_API UBTDecorator_CanStrafe : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector DodgeDistanceKey;
    
    UPROPERTY(EditAnywhere)
    bool UseLongStrafe;
    
    UPROPERTY(EditAnywhere)
    bool UseMediumStrafe;
    
    UPROPERTY(EditAnywhere)
    bool CanEndInDanger;
    
private:
    UPROPERTY()
    TSubclassOf<UNavigationQueryFilter> NoDangerNavFilter;
    
public:
    UBTDecorator_CanStrafe();

};

