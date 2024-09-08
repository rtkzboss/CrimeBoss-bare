#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "DelayedCommand.h"
#include "IGS_BTTask_SquadBase.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_SquadBase;
class UIGS_AICommand;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    AIGS_SquadBase* Squad;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UIGS_AICommand*> Commands;
    
    UPROPERTY()
    TMap<TWeakObjectPtr<AIGS_GameCharacterFramework>, FDelayedCommand> DelayedCommands;
    
public:
    UIGS_BTTask_SquadBase();

};

