#pragma once
#include "CoreMinimal.h"
#include "IGS_GameStateFramework.h"
#include "ECommonMissionResult.h"
#include "EIGS_MissionStartupSource.h"
#include "EIGS_CharacterID.h"
#include "IGS_CopsArriveTimerFinishedDelegate.h"
#include "IGS_CopsArriveTimerStartedDelegate.h"
#include "IGS_EveryoneHasLoadedLevelDelegate.h"
#include "IGS_ForceHideEscapeWarningDelegate.h"
#include "IGS_PlayersSpawnedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameStateGame.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_CarryableInventoryObject;
class UIGS_GlobalInventory;
class UIGS_InventoryObjectFramework;
class UIGS_LootManager;
class UIGS_PickupsManager;
class UIGS_PlayerIntelManager;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_GameStateGame : public AIGS_GameStateFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_CopsArriveTimerFinished OnCopsArriveTimerFinished;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CopsArriveTimerStarted OnCopsArriveTimerStarted;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_HasEveryoneLoadedLevel)
    bool R_HasEveryoneLoadedLevel;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_EveryoneHasLoadedLevel OnEveryoneHasLoadedLevelEvent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_StartedPlayingMatch)
    bool R_StartedPlayingMatch;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PlayersSpawnedDelegate OnStartedPlayingMatchEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ForceHideEscapeWarning OnForceHideEscapeWarning;
    
    UPROPERTY(BlueprintReadWrite)
    bool bHasEscapeVehicle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float DeathCamLastDeadTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float FailsafeMissionEndTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString FinalPreset;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FString> ObjectiveTile;
    
protected:
    UPROPERTY(Instanced)
    UIGS_GlobalInventory* GlobalInventory;
    
    UPROPERTY(Instanced)
    UIGS_PlayerIntelManager* IntelManager;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_PickupsManager* PickupsManager;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_CopsArriveTimer)
    float CopsArriveTimerEnd;
    
public:
    AIGS_GameStateGame(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SwitchStartupSource(EIGS_MissionStartupSource& outBranches);
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartEndMission(ECommonMissionResult inMissionResult);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_RemoveLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(Reliable, Server)
    void Server_RemoveBonusLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(Reliable, Server)
    void Server_AddSecuredLootBag();
    
    UFUNCTION(Reliable, Server)
    void Server_AddPocketLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(Reliable, Server)
    void Server_AddLootBag();
    
    UFUNCTION(Reliable, Server)
    void Server_AddLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, AIGS_GameCharacterFramework* OwningPawn);
    
    UFUNCTION(Reliable, Server)
    void Server_AddCarryablePocketLoot(TSubclassOf<UIGS_CarryableInventoryObject> inItemClass);
    
    UFUNCTION(Reliable, Server)
    void Server_AddCarryablePickedUpLoot(TSubclassOf<UIGS_CarryableInventoryObject> inItemClass);
    
    UFUNCTION(Reliable, Server)
    void Server_AddBonusPocketLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(Reliable, Server)
    void Server_AddBonusLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, AIGS_GameCharacterFramework* OwningPawn);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartedPlayingMatch();
    
protected:
    UFUNCTION()
    void OnRep_StartedPlayingMatch();
    
    UFUNCTION()
    void OnRep_HasEveryoneLoadedLevel();
    
    UFUNCTION()
    void OnRep_CopsArriveTimer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBossDied(EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAllDiedOrDowned();
    
    UFUNCTION(BlueprintPure)
    UIGS_PickupsManager* GetPickupsManager() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UIGS_LootManager* GetLootManager() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool GetIsTurfWar();
    
public:
    UFUNCTION(BlueprintPure)
    UIGS_GlobalInventory* GetGlobalInventory() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void FinishEndMissionNoResultScreen();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FinishEndMission();
    
};

