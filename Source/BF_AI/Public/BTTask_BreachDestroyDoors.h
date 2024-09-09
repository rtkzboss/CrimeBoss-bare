#pragma once
#include "CoreMinimal.h"
#include "BTTask_BreachDestroyPlaceExplosiveBase.h"
#include "BTTask_BreachDestroyDoors.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterBase;

UCLASS()
class BF_AI_API UBTTask_BreachDestroyDoors : public UBTTask_BreachDestroyPlaceExplosiveBase {
    GENERATED_BODY()
public:
    UBTTask_BreachDestroyDoors();

protected:
    UPROPERTY()
    AIGS_AIControllerGame* m_Controller;
    
    UPROPERTY()
    AIGS_GameCharacterBase* m_Character;
    
};

