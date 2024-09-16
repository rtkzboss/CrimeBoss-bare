#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_GrenadeProjectileBase.h"
#include "IGS_PlantData.h"
#include "IGS_PlantableExplosiveProjectile.generated.h"

class AActor;
class UPrimitiveComponent;
class USphereComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_PlantableExplosiveProjectile : public AIGS_GrenadeProjectileBase {
    GENERATED_BODY()
public:
    AIGS_PlantableExplosiveProjectile(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSticked(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inSweepResult);

    UFUNCTION()
    void OnRep_PlantData();

public:
    UFUNCTION(BlueprintCallable)
    void Detonate();

protected:
    UFUNCTION(BlueprintNativeEvent)
    bool CanStick(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inSweepResult);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsShootable;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PushIntoMeshDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotateMeshOnPlant;

    UPROPERTY(ReplicatedUsing=OnRep_PlantData)
    FIGS_PlantData mR_PlantData;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USphereComponent* ShootCollisionSphere;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
