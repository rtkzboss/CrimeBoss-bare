#pragma once
#include "CoreMinimal.h"
#include "IGS_GameModeFramework.h"
#include "EIGS_CharacterID.h"
#include "IGS_AllDiedSignatureDelegate.h"
#include "IGS_BossDiedSignatureDelegate.h"
#include "IGS_PlayerLogActionSignatureDelegate.h"
#include "IGS_PlayerSwapActionsSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "PaybackGameModeBase.generated.h"

class AAIController;
class AController;
class AIGS_GameCharacterBase;
class AIGS_PlayerControllerRoot;
class APlayerState;
class UGameMetaTransferComponent;
class UObject;
class UPaybackPlayerSwapper;

UCLASS(NonTransient)
class PAYBACK_API APaybackGameModeBase : public AIGS_GameModeFramework {
    GENERATED_BODY()
public:
    APaybackGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchToPlayerSpectating(AIGS_PlayerControllerRoot* inSpectatingController);
    
    UFUNCTION(BlueprintCallable)
    void SwapToNextPlayer(AController* inInstigatorController);
    
    UFUNCTION(BlueprintCallable)
    void SwapPlayerFromDeadPlayer(AController* inInstigatorController, int32 inBotHeisterNum);
    
    UFUNCTION(BlueprintCallable)
    void SwapHeisters(int32 inPlayerHeisterNum, int32 inBotHeisterNum);
    
    UFUNCTION(BlueprintCallable)
    void StartPlayingMatch();
    
    UFUNCTION(BlueprintCallable)
    bool StartMatchInPreparation();
    
    UFUNCTION(BlueprintCallable)
    bool StartMatchInAction();
    
    UFUNCTION(BlueprintCallable)
    void SpectateNextPlayer(AIGS_PlayerControllerRoot* inSpectatingController);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool ReadyToStartMatch();
    
    UFUNCTION(BlueprintNativeEvent)
    bool ReadyToEndMatch();
    
    UFUNCTION()
    void OnRoomPolysGathered();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerSwapEndEvent(AIGS_GameCharacterBase* inPlayer, AIGS_GameCharacterBase* inBot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerSwapBeginEvent(AIGS_GameCharacterBase* inPlayer, AIGS_GameCharacterBase* inBot);
    
protected:
    UFUNCTION()
    void OnLevelGenerated();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnControllerWantsPlayerStart(AController* InController);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBossDiedEvent(const EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnAllDiedOrDownedEvent();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnSetMatchState(FName inNewState);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsMatchInProgress() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMapGenerationFinished() const;
    
    UFUNCTION(BlueprintPure)
    FName GetMatchState() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static int32 GetJoinedHeistersCount(UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintImplementableEvent)
    UClass* GetDefaultPawnClassForControllerAndCharacterDataOverride(AController* InController, EIGS_CharacterID inCharacterID, bool bIsMaxLeveled, int32 inGenericID);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetBotIndex(AController* inBotController);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetBotCount();
    
    UFUNCTION(BlueprintCallable)
    AController* GetBotByIndex(int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    void EndMatch();
    
protected:
    UFUNCTION(BlueprintCallable)
    static void DespawnAndSpectate(AIGS_PlayerControllerRoot* InController);
    
public:
    UFUNCTION(BlueprintCallable)
    void DebugSetMatchAction(bool inIsAction);
    
    UFUNCTION(BlueprintCallable)
    void AbortMatch();
    
    UPROPERTY(BlueprintAssignable)
    FIGS_AllDiedSignature OnAllDiedOrDowned;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_BossDiedSignature OnBossDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GuardsCount;
    
protected:
    UPROPERTY(Transient)
    FName MatchState;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bDelayedStart: 1;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumSpectators;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AAIController> BotControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AIGS_GameCharacterBase> BotPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 QuickPlayBotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SpawnUniqueBotIDsInQuickPlay;
    
    UPROPERTY(BlueprintReadOnly)
    int32 numBots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinRespawnDelay;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumTravelingPlayers;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<APlayerState*> ConnectedPlayerStates;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PlayerLogActionSignature OnPlayerLoggedOut;
    
    UPROPERTY(VisibleAnywhere)
    TArray<AController*> BotControllers;
    
protected:
    UPROPERTY(EditAnywhere)
    float InactivePlayerStateLifeSpan;
    
    UPROPERTY(EditAnywhere)
    int32 MaxInactivePlayers;
    
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_PlayerSwapActionsSignature OnPlayerSwapBeginEventDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PlayerSwapActionsSignature OnPlayerSwapEndEventDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPaybackPlayerSwapper* m_PlayerSwapper;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGameMetaTransferComponent* MetaTransferComponent;
    
};

