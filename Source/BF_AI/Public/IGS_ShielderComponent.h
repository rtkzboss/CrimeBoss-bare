#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_ShieldBase.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_ShielderComponent.generated.h"

class AActor;
class AController;
class UDamageType;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_ShielderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ShielderComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnShieldTakeAnyDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, AController* inInstigatedBy, AActor* inDamageCauser);

    UFUNCTION()
    void OnRep_MaxBreakableWindowHealth(const float inOldMaxHealth);

    UFUNCTION()
    void OnBreakableWindowObjectStatusHealthChanged(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);

public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AIGS_ShieldBase> ShieldActor;

    UPROPERTY(EditAnywhere)
    FName SocketHand;

    UPROPERTY(EditAnywhere)
    FName SocketHolster;

    UPROPERTY(EditAnywhere)
    bool HandleHolsterFromCode;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, ReplicatedUsing=OnRep_MaxBreakableWindowHealth)
    float MaxBreakableWindowHealth;

    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    float CurrentBreakableWindowHealth;

protected:
    UPROPERTY()
    AIGS_ShieldBase* m_Shield;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
