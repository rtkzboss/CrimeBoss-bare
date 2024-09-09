#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_BagPickupSequence.generated.h"

class AIGS_GameCharacterFramework;

UCLASS()
class BF_AI_API UIGS_BTService_BagPickupSequence : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_BagPickupSequence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestPickupBag;
    
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> m_HelpersCharacters;
    
};

