#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableInventoryObject.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AICommand;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened();

protected:
    UFUNCTION()
    UIGS_AICommand* CommandToThrowGrenade(AIGS_GameCharacterFramework* inAgent, FVector position);

public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UIGS_ThrowableInventoryObject> Grenade;

protected:
    UPROPERTY(EditDefaultsOnly)
    AIGS_GameCharacterFramework* ContextActionCharacter;

    UPROPERTY(EditDefaultsOnly)
    UIGS_AICommand* ContextActionCommand;

};
