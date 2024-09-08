#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "BTService_StickyStillValid.generated.h"

UCLASS()
class BF_AI_API UBTService_StickyStillValid : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector StickToChar;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval InvalidTimeCommon;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval InvalidTimeOutside;
    
public:
    UBTService_StickyStillValid();

};

