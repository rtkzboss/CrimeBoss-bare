#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_ProjectileBase.h"
#include "IGS_ProjectileWithMovement.generated.h"

class AActor;
class UPrimitiveComponent;
class UProjectileMovementComponent;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_ProjectileWithMovement : public AIGS_ProjectileBase {
    GENERATED_BODY()
public:
    AIGS_ProjectileWithMovement(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnProjectileStop(const FHitResult& ImpactResult);

    UFUNCTION()
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);

    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inSweepResult);

    UFUNCTION()
    void OnComponentBeginOverlap(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inIsFromSweep, const FHitResult& inSweepResult);

protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPrimitiveComponent* Collision;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UProjectileMovementComponent* ProjectileMovement;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileSpeed;

};
