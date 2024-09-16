#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_EveryoneHasLoadedLevel.h"
#include "IGS_HealthChanged.h"
#include "IGS_PlayerJoinInfo.h"
#include "IGS_PlayerJoined.h"
#include "IGS_PlayerListChanged.h"
#include "IGS_PlayerSlotChanged.h"
#include "IGS_PlayerJoinManager.generated.h"

class AIGS_GameCharacterFramework;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerJoinManager : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerJoinManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnRep_JoinedPlayers() const;

    UFUNCTION()
    void OnRep_HasEveryoneLoadedLevel();

    UFUNCTION(BlueprintCallable)
    FIGS_PlayerJoinInfo GetSlotByHeisterNumberBP(int32 inHeisterNumber);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PlayerJoinManager* GetPlayerJoinManager(UObject* inWCO);

    UFUNCTION(BlueprintPure)
    int32 GetNumberOfFreeSlots() const;

    UFUNCTION(BlueprintPure)
    int32 GetJoinedHeistersCount();

    UFUNCTION(BlueprintImplementableEvent)
    int32 GetHeisterNumberFromBot(AIGS_GameCharacterFramework* inBot);

    UFUNCTION(BlueprintPure)
    TArray<AIGS_GameCharacterFramework*> GetCurrentPlayers();

    UPROPERTY(BlueprintAssignable)
    FIGS_PlayerSlotChanged OnPlayerSlotChanged;

    UPROPERTY(BlueprintAssignable)
    FIGS_PlayerListChanged OnPlayerListChanged;

    UPROPERTY(BlueprintAssignable)
    FIGS_PlayerJoined OnPlayerJoinedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_PlayerJoined OnPlayerDisconectedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_EveryoneHasLoadedLevel OnEveryoneHasLoadedLevelEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_HealthChanged OnHealthChangedEvent;

    UPROPERTY(ReplicatedUsing=OnRep_JoinedPlayers)
    TArray<FIGS_PlayerJoinInfo> R_JoinedPlayers;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_HasEveryoneLoadedLevel)
    bool HasEveryoneLoadedLevel;

private:
    UPROPERTY()
    AIGS_GameCharacterFramework* m_OldPlayer;

    UPROPERTY()
    AIGS_GameCharacterFramework* m_OldBot;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
