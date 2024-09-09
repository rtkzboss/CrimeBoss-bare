#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_IsSniperCompromised.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_IsSniperCompromised : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_IsSniperCompromised();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector IsCompromisedKey;
    
};

