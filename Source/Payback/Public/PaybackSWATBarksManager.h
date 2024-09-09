#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerDirectionalCueDefinition.h"
#include "EIGS_CarType.h"
#include "EIGS_UnitSpecialization.h"
#include "AIBarksManagerBase.h"
#include "PaybackSWATBarksManager.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackSWATBarksManager : public UAIBarksManagerBase {
    GENERATED_BODY()
public:
    UPaybackSWATBarksManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PlayerDirectionCue(const AIGS_GameCharacterFramework* inCharacter, const AIGS_GameCharacterFramework* inPlayer, const EIGS_PlayerDirectionalCueDefinition inPlayerDirectionCue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWentSecurity(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWentPublic(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWentOutside(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWentEmployee(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnThrowGas(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnThrowFrag(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnThrowFlash(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTakingDamage(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSquadEnemySeen(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSquadEnemyLost(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpottedDeath(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedWindows(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedSpecial(const AIGS_GameCharacterFramework* inInstigator, EIGS_UnitSpecialization inUnitSpecialization);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedSecurity(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedPublic(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedOutside(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedInVehicle(const AIGS_GameCharacterFramework* inInstigator, EIGS_CarType inCarType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedEmployee(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedBuilding(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlope(const AIGS_GameCharacterFramework* inInstigator, float inSlope);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReloading(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMassKill(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInjured(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGadgetDisrupted(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeath(const AIGS_GameCharacterFramework* inInstigator, bool inLastSquadMemberRemaining);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCombatTaunt(const AIGS_GameCharacterFramework* inInstigator, bool isTargetVisible, bool IsDefending);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBreachTakePosition(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBreachIn(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBreachEnd(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBreachClearObstacle(const AIGS_GameCharacterFramework* inInstigator);
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> TargetSeenTraceDialogues;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> TargetNotSeenTraceDialogues;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> TargetSeenDefendDialogues;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> TargetNotSeenDefendDialogues;
    
};

