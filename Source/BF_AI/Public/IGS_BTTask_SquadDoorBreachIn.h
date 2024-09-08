#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadDoorBreachBase.h"
#include "IGS_BTTask_SquadDoorBreachIn.generated.h"

class UIGS_AICommand;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadDoorBreachIn : public UIGS_BTTask_SquadDoorBreachBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadDoorBreachIn();

protected:
    UFUNCTION()
    static bool IsCommandActive(UIGS_AICommand* AICommand);
    
};

