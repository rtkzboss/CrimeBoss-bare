#pragma once
#include "CoreMinimal.h"
#include "AIBarksManagerBase.h"
#include "PaybackFriendliesBarksManager.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackFriendliesBarksManager : public UAIBarksManagerBase {
    GENERATED_BODY()
public:
    UPaybackFriendliesBarksManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void CombatTaunt(const AIGS_GameCharacterFramework* inInstigator, bool hasVisibleTarget);
    
};

