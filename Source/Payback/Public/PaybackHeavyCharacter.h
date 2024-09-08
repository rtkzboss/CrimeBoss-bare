#pragma once
#include "CoreMinimal.h"
#include "IGS_HasWeakSpotInterface.h"
#include "IGS_HitInfo.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "IGS_OnDoomTimerEndEventDelegate.h"
#include "IGS_OnDoomTimerStartEventDelegate.h"
#include "IGS_OnShockChargeUsedEventDelegate.h"
#include "PaybackAICharacter.h"
#include "PaybackHeavyCharacter.generated.h"

class UCapsuleComponent;
class UIGS_WeakSpotComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicalMaterial;
class UPrimitiveComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS()
class PAYBACK_API APaybackHeavyCharacter : public APaybackAICharacter, public IIGS_HasWeakSpotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCapsuleComponent* WeakSpotCapsule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* HeadPhysicalMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FScalableFloat CompromisedDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UIGS_WeakSpotComponent* WeakSpotComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag WeakSpotCompromisedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UParticleSystem> PSTemplate;
    
    UPROPERTY(EditAnywhere)
    FVector ParticleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ParticleSocketName;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* ShockChargeMeshComponent1;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* ShockChargeMeshComponent2;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* ShockChargeMeshComponent3;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* ShockChargeMeshComponent4;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* ShockChargeMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ShockChargeMeshScale;
    
    UPROPERTY(EditDefaultsOnly)
    FName ShockChargeMeshComponentAttachBone;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnDoomTimerEndEvent OnDoomTimerEndEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnDoomTimerStartEvent OnDoomTimerStartEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnShockChargeUsedEvent OnShockChargeBeginEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnShockChargeUsedEvent OnShockChargeUsedEvent;
    
    UPROPERTY(Instanced)
    UParticleSystemComponent* m_ParticleComponent;
    
    UPROPERTY()
    UParticleSystem* PSObject;
    
    UPROPERTY(ReplicatedUsing=OnRep_RemainingMeshComps)
    TArray<int32> mR_ActiveMeshComps;
    
public:
    APaybackHeavyCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnWeakSpotCompromised(const UPrimitiveComponent* inWeakSpotComponent, const FIGS_HitInfo& inLastHitInfo);
    
    UFUNCTION()
    void OnRep_RemainingMeshComps();
    
private:
    UFUNCTION()
    void OnInjuredEnd();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeadWeakSpotEnabled();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_StartDoomTimer(FVector inImpactPoint, FVector inRotVec);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_OnShockChargeBegin();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnInjuredStart();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnInjuredEnd();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnDoomTimerEnd();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_EnableHeadWeakSpot();
    
    UFUNCTION()
    void HandleDeath(float inCurrentHealth, float inCurrentShield, float inHealthChanged, float inShieldChanged, const FIGS_HitInfo& inHitInfo);
    

    // Fix for true pure virtual functions not being implemented
};

