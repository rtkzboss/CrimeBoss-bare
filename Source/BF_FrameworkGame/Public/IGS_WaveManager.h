#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "EIGS_PressurePhase.h"
#include "EIGS_StormTacticType.h"
#include "IGS_EndlessStormTimerFiredEventDelegate.h"
#include "IGS_PhaseChangedSignatureDelegate.h"
#include "IGS_StormIntensityChangedEventDelegate.h"
#include "IGS_WaveManagerEventSignatureDelegate.h"
#include "IGS_WaveManager.generated.h"

class UIGS_WaveManagerData;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WaveManager : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_WaveManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUpWaveManagerWavesDirections(int32 inWavesDirections);
    
    UFUNCTION(BlueprintCallable)
    void SetUpWaveManagerSegment(int32 inStormTypes, int32 inMaxEnemyCount, float inStormLength, float inBreakLength, const TArray<FGameplayTagContainer>& inPointsGameplayTags, const TMap<EIGS_UnitSpecialization, int32>& inSpecialTypesMaxCount);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetStormIntensity(const UObject* inWCO, int32 inIntensity);
    
    UFUNCTION()
    void OnRep_StormIntensity() const;
    
    UFUNCTION()
    void OnRep_CurrentPhase() const;
    
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_PhaseChangedSignature OnPhaseChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WaveManagerEventSignature OnNewWaveStarted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WaveManagerEventSignature OnStormEndStarted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WaveManagerEventSignature OnEnemyCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WaveManagerEventSignature OnAllEnemiesDied;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_StormIntensityChangedEvent OnStormIntensityChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_EndlessStormTimerFiredEvent OnEndlessStormTimerFired;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_WaveManagerData* WaveManagerData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_CurrentPhase)
    EIGS_PressurePhase CurrentPhase;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_StormTacticType CurrentTactic;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float NextPhaseTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float AssaultEndingSoonTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float AssaultDurationAddon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float InitControlCheckTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float NextWaveTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float WaveDelay;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float WaveTimeAddon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float WaveTimeCoefAddon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_TeamSideEnum LastTeamSideEnum;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsAssaultEndingSoon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentWaveNumber;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentSquadNumber;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SpawnedTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 AliveTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 DeadTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<EIGS_UnitSpecialization, int32> SpecialTypesTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SpawnedInWave;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 AliveInWave;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 DeadInWave;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 HeistersTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 DeadHeistersTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CarsTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CarsOverall;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_StormIntensity)
    int32 StormIntensity;
    
    UPROPERTY(BlueprintReadWrite, Replicated, VisibleAnywhere)
    bool IsGangsterOnly;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

