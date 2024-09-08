#pragma once
#include "CoreMinimal.h"
#include "EIGS_AmmoChangeDefinition.h"
#include "EIGS_DeathDefinition.h"
#include "EIGS_PingableType.h"
#include "EIGS_SquadHealthChangedDefinition.h"
#include "EIGS_WieldableClass.h"
#include "Components/ActorComponent.h"
#include "PaybackHeisterBarksManager.generated.h"

class AActor;
class AIGS_DetectorBase;
class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackHeisterBarksManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText VoFinishMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* VoFinishMissionCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SilenceMinHeisterShootingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SilenceWithoutShooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OutnumberedEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OutnumberedCoolDown;
    
public:
    UPaybackHeisterBarksManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Outnumbered(const AIGS_GameCharacterFramework* inInstigator, const int32 inOutnubmeredCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LootingStarted(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LootingLootBagAdded(const AIGS_GameCharacterFramework* inInstigator, int32 BagCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LootbagPickedUp(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LootbagCatchedInAir(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Lockpicked(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterZiptying(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* ziptiedChar);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterThrowingGrenade(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterSwapGun(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterSubdue(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterSquadSilence(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterSquadHealthChanged(const AIGS_GameCharacterFramework* inInstigator, const EIGS_SquadHealthChangedDefinition inHealthChange);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterSquadCrazyShooting(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterSquadAllDownstate(const AIGS_GameCharacterFramework* lastCharEnteringDownstate);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterShove(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterShout(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterReloading(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterPinged(const AIGS_GameCharacterFramework* inInstigator, const EIGS_PingableType inPingType, const AActor* pingedObject);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterKilledAI(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inKilledChar, bool isStealth, bool isDetected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterIsDying(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inDyingHeister);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterInDownState(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inHeisterDown);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterHostageStopFollow(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterHostageFollow(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterHealthChanged(const AIGS_GameCharacterFramework* inInstigator, const float InValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterEquipGun(const AIGS_GameCharacterFramework* inInstigator, const EIGS_WieldableClass inItemClass);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterDestroyedCamera(const AIGS_GameCharacterFramework* inInstigator, const AIGS_DetectorBase* inDestroyedCamera, bool isStealth);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterDeath(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* deathCharacter, const EIGS_DeathDefinition inDeathDefinition);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterBeingRevived(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inRevivingChar);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterAmmoChange(const AIGS_GameCharacterFramework* inInstigator, const EIGS_AmmoChangeDefinition inAmmoChangeDefinition);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterAlmostDeath(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeisterAccumulatedHealthChanged(const AIGS_GameCharacterFramework* inInstigator, const float InValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BotCommandHoldPosition(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BotCommandFollow(const AIGS_GameCharacterFramework* inInstigator);
    
};

