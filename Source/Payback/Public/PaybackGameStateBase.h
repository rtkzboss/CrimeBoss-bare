#pragma once
#include "CoreMinimal.h"
#include "IGS_GameStateGame.h"
#include "IGS_PlayersSpawnedDelegate.h"
#include "IGS_EndMissionCountdownCompleted.h"
#include "IGS_EndMissionCountdownPreCompleted.h"
#include "IGS_HideEndMissionCountdown.h"
#include "IGS_MatchHasEndedDelegate.h"
#include "IGS_PlayersInEndMissionTriggerChanged.h"
#include "IGS_PrepareRestartDelegate.h"
#include "IGS_StartEndMissionCountdown.h"
#include "PaybackGameStateBase.generated.h"

class AActor;
class AController;
class UIGS_AIGrenadeManager;
class UIGS_DissolveManager;
class UIGS_LootBagsManager;
class UIGS_NetworkComponentMusic;
class UIGS_ObjectiveManager;
class UIGS_PlayerJoinManager;
class UIGS_PropsManager;
class UIGS_SubtitleManager;
class UIGS_SuspicionManager;
class UIGS_TextChatManager;
class UIGS_WorldSpaceWidgetManager;
class UObject;
class UPaybackWaveManager;

UCLASS()
class PAYBACK_API APaybackGameStateBase : public AIGS_GameStateGame {
    GENERATED_BODY()
public:
    APaybackGameStateBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    int32 SetHeisterNumberForBotBP(AController* inBot, int32 inHeisterID);

public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetFinalDialogue(UObject* inWCO, const FText inID, AActor* inCharacter);

    UFUNCTION(BlueprintImplementableEvent)
    void PostInit();

    UFUNCTION(BlueprintImplementableEvent)
    void OnServerTravel();

    UFUNCTION()
    void OnRep_PlayersSpawned();

    UFUNCTION()
    void OnRep_MatchState();

    UFUNCTION()
    void OnRep_ElapsedTime();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPrepareRestart();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayersSpawned();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMatchHasEnded();

public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PrepareRestart();

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnServerTravel();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleEndMissionCountdownPreCompleted();

    UFUNCTION(BlueprintImplementableEvent)
    void HandleEndMissionCountdownCompleted();

public:
    UFUNCTION(BlueprintPure)
    UIGS_TextChatManager* GetTextChatManager() const;

    UFUNCTION(BlueprintPure)
    UIGS_SuspicionManager* GetSuspicionManager() const;

    UFUNCTION(BlueprintPure)
    UIGS_SubtitleManager* GetSubtitleManager() const;

    UFUNCTION(BlueprintPure)
    UIGS_PropsManager* GetPropsManager() const;

    UFUNCTION(BlueprintPure)
    UIGS_ObjectiveManager* GetObjectiveManager() const;

    UFUNCTION(BlueprintPure)
    UIGS_LootBagsManager* GetLootBagsManager() const;

protected:
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetHeisterNumberFromBotBP(AController* inBot);

public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_PlayersSpawned)
    bool R_PlayersSpawned;

    UPROPERTY(BlueprintAssignable)
    FIGS_PlayersSpawnedDelegate OnPlayersSpawnedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_MatchHasEndedDelegate OnMatchHasEndedEvent;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_PlayersInEndMissionTriggerChanged OnPlayersInEndMissionTriggerChanged;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_EndMissionCountdownPreCompleted OnEndMissionCountdownPreCompleted;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_EndMissionCountdownCompleted OnEndMissionCountdownCompleted;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_StartEndMissionCountdown OnStartEndMissionCountdown;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_HideEndMissionCountdown OnHideEndMissionCountdown;

    UPROPERTY(BlueprintAssignable)
    FIGS_PrepareRestartDelegate OnPrepareRestartEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoneyGoal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoneyGoalThresholdPercentage;

protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_MatchState)
    FName MatchState;

    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName PreviousMatchState;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_SuspicionManager* SuspicionManager;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_DissolveManager* DissolveManager;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_ObjectiveManager* ObjectiveManager2;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_TextChatManager* TextChatManager;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_LootBagsManager* LootBagsManager;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_WorldSpaceWidgetManager* WorldSpaceWidgetManager;

    UPROPERTY(Instanced, VisibleAnywhere)
    UPaybackWaveManager* WaveManager;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_PlayerJoinManager* JoinManager;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_SubtitleManager* SubtitleManager;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_AIGrenadeManager* AIGrenadeManager;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_PropsManager* PropsManager;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_NetworkComponentMusic* MusicComponent;

public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ElapsedTime)
    int32 ElapsedTime;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	void HandleBeginPlay() override;
};
