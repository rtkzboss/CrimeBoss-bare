#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableProjectileFramework.h"
#include "IGS_ThrowableData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_ThrowableThrownData.h"
#include "Templates/SubclassOf.h"
#include "IGS_ThrowableProjectileBase.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UCapsuleComponent;
class UDamageType;
class UIGS_ThrowableInventoryObject;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USkeletalMeshComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_ThrowableProjectileBase : public AIGS_ThrowableProjectileFramework {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UCapsuleComponent* CapsuleCollision;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* ThrowableMesh;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UProjectileMovementComponent* ProjectileMovementComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDamageOnBounce;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_Thrower)
    TWeakObjectPtr<AIGS_GameCharacterFramework> mR_Thrower;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FIGS_ThrowableData ThrowableData;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    float mR_TimeHeldInHand;
    
    UPROPERTY(ReplicatedUsing=OnRep_Thrown)
    FIGS_ThrowableThrownData mR_ThrownData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_InventoryObjectClass)
    TSubclassOf<UIGS_ThrowableInventoryObject> mR_ThrowableObjectClass;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsCollisionEnabled)
    bool mR_IsCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bMakeImpactNoise;
    
private:
    UPROPERTY(Replicated)
    bool mR_bStoppedMoving;
    
    UPROPERTY(Replicated)
    bool mR_bHasHit;
    
    UPROPERTY(Replicated)
    bool mR_bThrowedByAI;
    
public:
    AIGS_ThrowableProjectileBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintPure)
    bool WasThrownByAI() const;
    
    UFUNCTION(BlueprintPure)
    bool WasThrown() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ThrowCustom(AIGS_GameCharacterFramework* inThrower, FVector inThrowVelocity);
    
    UFUNCTION(BlueprintCallable)
    void ThrowAt(AIGS_GameCharacterFramework* inThrower, FVector inTargetPoint);
    
    UFUNCTION(BlueprintCallable)
    void Throw(AIGS_GameCharacterFramework* inThrower, bool inThrowLow);
    
    UFUNCTION(BlueprintCallable)
    void StartPhysics();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnThrown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnThrowableInit();
    
    UFUNCTION()
    void OnRep_Thrown();
    
    UFUNCTION()
    void OnRep_Thrower();
    
    UFUNCTION()
    void OnRep_IsCollisionEnabled() const;
    
    UFUNCTION()
    void OnRep_InventoryObjectClass();
    
    UFUNCTION()
    void OnProjectileStopped(const FHitResult& inImpactResult);
    
    UFUNCTION()
    void OnProjectileBounced(const FHitResult& inImpactResult, const FVector& inImpactVelocity);
    
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inSweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOwner(AActor* inOwner) const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, float inTimeHeldInHand);
    
protected:
    UFUNCTION(BlueprintPure)
    bool HasHit() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetInitialVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetInitialThrowSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    float ApplyThrowableDamage(const FHitResult& inHitResult, float inBaseDamage, AIGS_GameCharacterFramework* inDamageCauser, TSubclassOf<UDamageType> inDamageType);
    
};

