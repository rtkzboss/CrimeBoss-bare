#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandBreachThrowFlashbang.generated.h"

class AIGS_GrenadeProjectileBase;

UCLASS()
class BF_AI_API UIGS_AICommandBreachThrowFlashbang : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY()
    AIGS_GrenadeProjectileBase* Grenade;
    
    UIGS_AICommandBreachThrowFlashbang();

};

