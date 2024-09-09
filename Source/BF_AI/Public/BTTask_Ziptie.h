#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_Ziptie.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class UIGS_ZiptieComponent;

UCLASS()
class BF_AI_API UBTTask_Ziptie : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_Ziptie();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CivToZiptieKey;
    
    UPROPERTY()
    AIGS_PlayerCharacter* Character;
    
    UPROPERTY()
    AIGS_GameCharacterFramework* CivToZiptie;
    
    UPROPERTY(Instanced)
    UIGS_ZiptieComponent* ZiptieComponent;
    
};

