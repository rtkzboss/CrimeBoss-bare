#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_BTTask_SquadBreachRemoveGate.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class UIGS_AICommandBreachRemoveObstacle;
class UObject;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadBreachRemoveGate : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    AIGS_GameCharacterFramework* ContextActionCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    UIGS_AICommand* ContextActionCommand;
    
    UPROPERTY()
    UObject* BreachObject;
    
public:
    UIGS_BTTask_SquadBreachRemoveGate();

protected:
    UFUNCTION()
    static bool IsObstacleCleared(UIGS_AICommandBreachRemoveObstacle* Command);
    
    UFUNCTION()
    static UIGS_AICommand* CommandToClearGate(AIGS_GameCharacterFramework* inAgent, AActor* BreachableObject, FVector Location, FVector LookAtPoint);
    
};

