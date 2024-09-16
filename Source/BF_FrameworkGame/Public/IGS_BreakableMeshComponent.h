#pragma once
#include "CoreMinimal.h"
#include "EIGS_OverlapResponseType.h"
#include "IGS_HitInfo.h"
#include "IGS_ProjectileOverlappable.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "BrokenStage.h"
#include "EIGS_BreakPushImpulse.h"
#include "EIGS_WindowBreakBehaviour.h"
#include "OnBreakableStateChangedDelegate.h"
#include "IGS_BreakableMeshComponent.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UDamageType;
class UIGS_ObjectStatus;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UParticleSystem;
class UPrimitiveComponent;
class UStaticMesh;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_BreakableMeshComponent : public UStaticMeshComponent, public IIGS_ProjectileOverlappable {
    GENERATED_BODY()
public:
    UIGS_BreakableMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void TriggerBreakEvents(AActor* inDmgCauser);

protected:
    UFUNCTION()
    void SwitchMaterial();

    UFUNCTION()
    void SpawnParticlesImpact(FVector Location);

    UFUNCTION(BlueprintCallable)
    void SpawnParticles();

    UFUNCTION(BlueprintCallable)
    void PreBreak();

    UFUNCTION()
    void OnTakeRadialDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, FVector inOrigin, FHitResult inHitInfo, AController* inInstigatedBy, AActor* inDamageCauser);

    UFUNCTION()
    void OnTakePointDamage(AActor* inDamagedActor, float inDamage, AController* inInstigatedBy, FVector inHitLocation, UPrimitiveComponent* inHitComponent, FName InBoneName, FVector inShotFromDirection, const UDamageType* inDamageType, AActor* inDamageCauser);

    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);

    UFUNCTION()
    void OnRep_IsBroken();

public:
    UFUNCTION(BlueprintPure)
    bool IsBroken() const;

protected:
    UFUNCTION()
    void HandleBreakableMeshState();

public:
    UFUNCTION(BlueprintPure)
    float GetHealth() const;

protected:
    UFUNCTION(BlueprintCallable)
    void BreakComponent();

public:
    UFUNCTION(BlueprintCallable)
    void Break(AActor* inDmgCauser, FVector inHitLocation);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_OverlapResponseType OverlappableType;

    UPROPERTY(BlueprintAssignable)
    FOnBreakableStateChangedDelegate OnComponentBroken;

    UPROPERTY(BlueprintAssignable)
    FOnBreakableStateChangedDelegate OnComponentHealthChanged;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsEplosive;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bShowMeleePrompt;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bOnlyTakesDamageToSelf;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bUseObjectStatusHealth;

protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_ObjectStatus* m_ObjectStatus;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasMultiBreakableComps;

    UPROPERTY(BlueprintReadOnly)
    bool bUsesObjectStatus;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EIGS_WindowBreakBehaviour BreakBehaviour;

    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UPrimitiveComponent*> ChainedComponentsToBreak;

    UPROPERTY(ReplicatedUsing=OnRep_IsBroken)
    bool mR_IsBroken;

    UPROPERTY()
    bool mR_IsMaterialSwitched;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanTakeBulletDamage;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanTakeMeleeDamage;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanTakeExplosiveDamage;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanTakeBreachExplosiveDamage;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bSimulatePhysicsOnBreak;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName CollisionProfileOnBreak;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EIGS_BreakPushImpulse PushImpulseOnBreak;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector CustomPushImpulseVector;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector CustomPushImpulseOffset;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PushImpulseStrength;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FName> BreakOtherComponents;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* StaticMeshBroken;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBrokenStage> BrokenMeshStages;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* ParticleBreak;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* ParticleImpact;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FParticleSysParam> ParticleInstanceParameters;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTransform ParticleSpawnOffset;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<UMaterialInstance*> MaterialsOnBreak;

    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AkEventOnBreak;

    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AkEventOnImpact;

    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> DynamicBreakMaterials;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};
