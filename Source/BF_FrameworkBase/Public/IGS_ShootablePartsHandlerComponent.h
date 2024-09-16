#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_HitInfo.h"
#include "IGS_ShootablePart.h"
#include "IGS_ShootablePartsHandlerComponent.generated.h"

class UPhysicalMaterial;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_ShootablePartsHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ShootablePartsHandlerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnRep_VisibleComponents();

    UFUNCTION()
    void OnRep_CollisionComponents();

public:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_ShootOffPart(UActorComponent* inCollisionComponent, UActorComponent* inVisibleComponent, const FIGS_HitInfo& inHit, float inDamage);

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_ShootablePart> ShootableParts;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UPhysicalMaterial* PartPhysMatOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShootOffVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnDistance;

    UPROPERTY(Instanced, ReplicatedUsing=OnRep_CollisionComponents)
    TArray<UActorComponent*> mR_CollisionComponents;

    UPROPERTY(Instanced, ReplicatedUsing=OnRep_VisibleComponents)
    TArray<UActorComponent*> mR_VisibleComponents;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
