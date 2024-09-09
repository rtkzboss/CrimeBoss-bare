#pragma once
#include "CoreMinimal.h"
#include "IGS_EncryptedF32.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EIGS_HealthState.h"
#include "IGS_HealInfo.h"
#include "IGS_HitInfo.h"
#include "IGS_ObjectStatusAccumulatedDamageEventSignatureDelegate.h"
#include "IGS_ObjectStatusHealthChangedEventSignatureDelegate.h"
#include "IGS_ObjectStatusHealthResetEventSignatureDelegate.h"
#include "IGS_ObjectStatusHealthStateChangedEventSignatureDelegate.h"
#include "IGS_ObjectStatusMaxHealthChangedEventSignatureDelegate.h"
#include "IGS_ObjectStatus.generated.h"

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_ObjectStatus : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ObjectStatus(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHealthDecayDisabled(bool inDisabled);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetScriptInvulnerable(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION()
    void OnTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION()
    void OnTakeAnyDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, AController* inInstigatedBy, AActor* inDamageCauser);
    
    UFUNCTION()
    void OnRep_ReplicatedCurrentHealth();
    
    UFUNCTION()
    void OnRep_IsDead();
    
    UFUNCTION()
    void OnRep_HealthState() const;
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetMaxHealth(float inMaxHealth);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetAllData(float inHealthChange, float inMaxHealth, EIGS_HealthState inHealthState, const FIGS_HitInfo& inHitInfo, bool inAllowWhileDead);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_DoHeal(float inHealthChange, const FIGS_HealInfo& inHealInfo);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_DoDamage(float inHealthChange, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_Die(float inHealthChange, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_ChangeHealthState(EIGS_HealthState inHealthState);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_ChangeHealth(float inHealthChange, const FIGS_HitInfo& inHitInfo, bool inAllowWhileDead);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_DoHeal(float inHealthChange, const FIGS_HealInfo& inHealInfo);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDeadForSomeTime() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAliveInNormalHealthState() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintPure)
    bool HasRecentlyDownstated() const;
    
    UFUNCTION(BlueprintPure)
    bool HasRecentlyDied() const;
    
    UFUNCTION(BlueprintPure)
    float GetRelativeShield() const;
    
    UFUNCTION(BlueprintPure)
    float GetRelativeHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxShield() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastShieldDelta() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastHealthDelta() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_HealthState GetHealthState() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHealthDecayDisabled();
    
    UFUNCTION(BlueprintPure)
    float GetCurrentShield() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentHealthWithAccumulatedDamage() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentHealthNormalized() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseReviveHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseMaxHealth() const;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ObjectStatusHealthChangedEventSignature OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ObjectStatusMaxHealthChangedEventSignature OnMaxHealthChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ObjectStatusHealthChangedEventSignature OnDeath;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ObjectStatusAccumulatedDamageEventSignature OnAccumulatedDamage;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ObjectStatusAccumulatedDamageEventSignature OnAccumulatedDeath;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ObjectStatusHealthResetEventSignature OnHealthReset;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ObjectStatusHealthResetEventSignature OnResurrection;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ObjectStatusHealthStateChangedEventSignature OnHealthStateChanged;
    
protected:
    UPROPERTY()
    bool bCurrentHealthWasReplicated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float MaxShield;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_EncryptedF32 CurrentHealth;
    
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedCurrentHealth)
    float mR_ReplicatedCurrentHealth;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_EncryptedF32 CurrentShield;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float HealthMultiplierAttribute;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_IsDead)
    bool R_IsDead;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    bool Unkillable;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    bool ScriptInvulnerable;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    bool DifficultyInvulnerable;
    
    UPROPERTY(Replicated)
    bool HealthDecayDisabled;
    
    UPROPERTY(Replicated)
    bool InstantKillable;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_HealthState)
    EIGS_HealthState HealthState;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool IsInjured;
    
    UPROPERTY(BlueprintReadWrite)
    float AccumulateDamagePeriod;
    
    UPROPERTY(Replicated)
    bool m_OverrideReportingOfDamageDealt;
    
    UPROPERTY(Replicated)
    bool m_OverrideReportingOfDamageDealtValue;
    
    UPROPERTY(Replicated)
    float mR_BaseMaxHealth;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

