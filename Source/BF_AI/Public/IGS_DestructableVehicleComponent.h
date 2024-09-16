#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "Components/SceneComponent.h"
#include "IGS_CarExplodedEventSignature.h"
#include "IGS_DestructableVehicleComponent.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_VehicleCar;
class UAkComponent;
class UIGS_DestructableVehicleSettings;
class UIGS_ObjectStatus;
class UIGS_PingWidgetComponent;
class UMaterialInstance;
class UNiagaraComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_DestructableVehicleComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UIGS_DestructableVehicleComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void UpdateShakeCar();

    UFUNCTION()
    void UpdateFire() const;

    UFUNCTION(BlueprintCallable)
    void SetPrimitiveDataOnStaticMesh(UStaticMeshComponent* inStaticMesh);

    UFUNCTION()
    void SelfDamage(float inDamage);

    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);

    UFUNCTION()
    void OnRep_IsExploded(bool inIsExploded);

    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_ExplodeVehicle();

    UFUNCTION(BlueprintCallable)
    void ExplodeVehicle();

    UFUNCTION()
    void ClearFire();

public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UIGS_DestructableVehicleSettings> Settings;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USkeletalMeshComponent* SkelCarMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* StaticCarMesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BurnMaterialSlot0;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* ExplosionMaterialSlot0;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BurnMaterialSlot1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* ExplosionMaterialSlot1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BurnMaterialSlot2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* ExplosionMaterialSlot2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BurnMaterialSlot3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* ExplosionMaterialSlot3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UNiagaraComponent* ExplosionFireParticle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UStaticMeshComponent*> DoorsAndTrunk;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanBeDestroyed;

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AIGS_VehicleCar* VehicleCarOwner;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_ObjectStatus* ObjectStatus;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTakeDamageOnlyInFront;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExplodeOutDoors;

    UPROPERTY(BlueprintReadOnly)
    float EngineHealth;

    UPROPERTY(BlueprintReadOnly, Replicated)
    float R_EngineHealth;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CoolerPercentStartPosX;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CoolerPercentStartPosWidth;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CoolerPercentStartPosZ;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CoolerPercentEndPosZ;

    UPROPERTY()
    float DoorHealth[5];

    UPROPERTY(Replicated)
    float R_DoorHealth[5];

    UPROPERTY(ReplicatedUsing=OnRep_IsExploded)
    bool R_IsExploded;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* SkelDestructedMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* StaticDestructedMesh;

    UPROPERTY()
    bool bFireParticleSpawned;

    UPROPERTY()
    bool bSmokeParticleSpawned;

    UPROPERTY()
    bool bBlackSmokeParticleSpawned;

    UPROPERTY()
    bool bShakeDynamicCar;

    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    UIGS_PingWidgetComponent* ExplosionWarningWidget;

    UPROPERTY()
    AIGS_GameCharacterFramework* LastHitFromCharacter;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, Transient)
    UAkComponent* AkAudioComponent;

    UPROPERTY(Instanced)
    UNiagaraComponent* ExplosionGraySmoke;

    UPROPERTY(Instanced)
    UNiagaraComponent* ExplosionBlackSmoke;

    UPROPERTY(BlueprintAssignable)
    FIGS_CarExplodedEventSignature OnCarExploded;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_DestructableVehicleSettings* SettingsLoaded;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
