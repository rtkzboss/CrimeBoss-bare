#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_CarryablePickupSequence.generated.h"

class AIGS_GameCharacterFramework;

UCLASS()
class BF_AI_API UIGS_BTService_CarryablePickupSequence : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_CarryablePickupSequence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestCarryablePickup;
    
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> m_HelpersCharacters;
    
};

