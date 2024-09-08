#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"
#include "IGS_IdleAvoidanceComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_IdleAvoidanceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VelocityTreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AvoidanceWeihgtOverride;
    
    UPROPERTY(ReplicatedUsing=OnRep_CharacterVsHeistersCollisionStatus)
    EIGS_CharacterVsHeistersCollisionStatus m_CharacterVsHeistersCollisionStatus;
    
public:
    UIGS_IdleAvoidanceComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_CharacterVsHeistersCollisionStatus();
    
};

