#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EIGS_AlarmReason.h"
#include "IGS_AlarmedSignatureDelegate.h"
#include "IGS_AllGuardsDeadSignatureDelegate.h"
#include "IGS_CamerasDisabledSignatureDelegate.h"
#include "IGS_DetectorPacifiedStateChangedDelegate.h"
#include "IGS_HeisteCanStartDelegate.h"
#include "IGS_LimboSignatureDelegate.h"
#include "IGS_StrikesAddedSignatureDelegate.h"
#include "IGS_VaultOffenceDefinition.h"
#include "IGS_SuspicionManager.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_SuspicionEventActor;
class UIGS_SuspicionComponent;
class UIGS_SuspicionManager;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SuspicionManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Strikes)
    int32 CurrentStrikes;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    FGameplayTag BlameTag;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    EIGS_AlarmReason AlarmReason;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Alarm)
    bool IsAlarmed;
    
    UPROPERTY(BlueprintReadOnly)
    bool HeistCanStart;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<UIGS_SuspicionComponent*> SuspicionComponents;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_StrikesAddedSignature OnStrikeAdded;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_LimboSignature OnBotLimboStarted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_AlarmedSignature OnAlarmed;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_AllGuardsDeadSignature OnAllGuardsDead;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_HeisteCanStart OnHeistCanStartChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CamerasDisabledSignature OnCamerasDisabled;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_DetectorPacifiedStateChanged OnHQSuspicionStart;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_DetectorPacifiedStateChanged OnHQSuspicionEnd;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_DetectorPacifiedStateChanged OnHQAllDead;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_DetectorPacifiedStateChanged OnHQSuspicionChanged;
    
protected:
    UPROPERTY()
    TMap<AActor*, FIGS_VaultOffenceDefinition> m_VaultOpenDefinitions;
    
    UPROPERTY()
    TMap<AActor*, AIGS_SuspicionEventActor*> m_SusOpenDefinitions;
    
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> m_TmpCharacters;
    
private:
    UPROPERTY()
    FString MessagesLocTableNamespace;
    
    UPROPERTY()
    FString MessageHQReportKey;
    
public:
    UIGS_SuspicionManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    bool WouldStrikeCauseAlarm(int32 inStrikeCount) const;
    
    UFUNCTION(BlueprintCallable)
    void ReportCivStartEscaping(AIGS_GameCharacterFramework* inCivilian);
    
    UFUNCTION(BlueprintCallable)
    void ReportCivEscaped(AIGS_GameCharacterFramework* inCivilian);
    
protected:
    UFUNCTION()
    void OnRep_Strikes(int32 inLastStrikes);
    
    UFUNCTION()
    void OnRep_Alarm();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnStrikeAdded(int32 inNewStrikes, int32 inIncrease, const FGameplayTag inBlameTag);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddSuspicionInfoMessage(int32 inStrikesIncrease, const FText& inBlame);
    
public:
    UFUNCTION(BlueprintCallable)
    void IsSuitableForHeist(const bool inIsSuitable);
    
    UFUNCTION(BlueprintPure)
    bool IsStrikeAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLastStrike() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static UIGS_SuspicionManager* GetSuspicionManager(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    float GetHQSuspicion();
    
    UFUNCTION(BlueprintCallable)
    void CanShowHeistHint(const bool inCanShow);
    
};

