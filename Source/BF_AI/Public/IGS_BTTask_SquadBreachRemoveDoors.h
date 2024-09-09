#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadDoorBreachBase.h"
#include "IGS_BTTask_SquadBreachRemoveDoors.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class UIGS_AICommandBreachRemoveObstacle;
class UObject;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadBreachRemoveDoors : public UIGS_BTTask_SquadDoorBreachBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadBreachRemoveDoors();

protected:
    UFUNCTION()
    static bool IsObstacleCleared(UIGS_AICommandBreachRemoveObstacle* Command);
    
    UFUNCTION()
    static UIGS_AICommand* CommandToClearObstacle(AIGS_GameCharacterFramework* inAgent, AActor* BreachableObject, bool IsRight);
    
    UPROPERTY(EditDefaultsOnly)
    AIGS_GameCharacterFramework* ContextActionCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    UIGS_AICommand* ContextActionCommand;
    
    UPROPERTY()
    UObject* BreachObject;
    
};

