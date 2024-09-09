#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BTTask_SquadDoorBreachBase.h"
#include "IGS_BTTask_SquadDoorBreachThrowGrenade.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class UIGS_AICommandBreachThrowFlashbang;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadDoorBreachThrowGrenade : public UIGS_BTTask_SquadDoorBreachBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadDoorBreachThrowGrenade();

protected:
    UFUNCTION()
    static bool HasFlashbangExploded(UIGS_AICommandBreachThrowFlashbang* Command);
    
    UFUNCTION()
    static UIGS_AICommand* CommandToThrowFlashbang(AIGS_GameCharacterFramework* inAgent, FVector position, bool IsRight);
    
    UPROPERTY(EditDefaultsOnly)
    AIGS_GameCharacterFramework* ContextActionCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    UIGS_AICommand* ContextActionCommand;
    
};

