#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadDoorBreachBase.h"
#include "IGS_BTTask_SquadDoorBreachFight.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AICommand;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadDoorBreachFight : public UIGS_BTTask_SquadDoorBreachBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadDoorBreachFight();

protected:
    UPROPERTY(EditDefaultsOnly)
    AIGS_GameCharacterFramework* FightingCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    UIGS_AICommand* BreachFightCommand;
    
};

