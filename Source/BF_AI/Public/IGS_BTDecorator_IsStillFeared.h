#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BTDecorator_IsStillFeared.generated.h"

UCLASS()
class BF_AI_API UIGS_BTDecorator_IsStillFeared : public UBTDecorator {
    GENERATED_BODY()
public:
    UIGS_BTDecorator_IsStillFeared();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval DesiredTimeWithoutFear;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval DesiredTimeWithoutFearZiptieAddon;
    
};

