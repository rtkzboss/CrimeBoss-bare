#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_BTTask_SquadDoorBreachBase.generated.h"

class UIGS_AICommand;
class UIGS_BreachRoles;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadDoorBreachBase : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BreachRolesKey;
    
    UPROPERTY(EditAnywhere)
    UIGS_BreachRoles* BreachRoles;
    
    UPROPERTY(EditDefaultsOnly)
    UIGS_AICommand* LeaderCommand;
    
    UPROPERTY(EditDefaultsOnly)
    UIGS_AICommand* DeputyCommand;
    
    UPROPERTY(EditDefaultsOnly)
    UIGS_AICommand* LeaderBackupCommand;
    
    UPROPERTY(EditDefaultsOnly)
    UIGS_AICommand* DeputyBackupCommand;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UIGS_AICommand*> StackCommands;
    
public:
    UIGS_BTTask_SquadDoorBreachBase();

};

