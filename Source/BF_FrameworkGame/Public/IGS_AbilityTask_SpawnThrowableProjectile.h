#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableInventoryObject.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "IGS_ThrowableSpawnedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_AbilityTask_SpawnThrowableProjectile.generated.h"

class UGameplayAbility;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AbilityTask_SpawnThrowableProjectile : public UAbilityTask {
    GENERATED_BODY()
public:
    UIGS_AbilityTask_SpawnThrowableProjectile();

    UFUNCTION(BlueprintCallable)
    static UIGS_AbilityTask_SpawnThrowableProjectile* CreateSpawnThrowableProjectileProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, bool inRequiresAuthority, bool inThrowLow, float inTimeHeldInHand);

    UPROPERTY(BlueprintAssignable)
    FIGS_ThrowableSpawnedDelegate OnSpawned;

private:
    UPROPERTY()
    TSubclassOf<UIGS_ThrowableInventoryObject> ThrowableClass;

    UPROPERTY()
    bool bRequiresAuthority;

    UPROPERTY()
    bool bThrowLow;

    UPROPERTY()
    float TimeHeldInHand;

};
