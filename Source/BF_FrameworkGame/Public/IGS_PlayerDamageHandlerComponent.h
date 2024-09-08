#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "EIGS_DamageLimiterType.h"
#include "IGS_DamageHandlerComponent.h"
#include "IGS_PlayerDamageHandlerComponent.generated.h"

class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerDamageHandlerComponent : public UIGS_DamageHandlerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<EIGS_DamageLimiterType, UCurveFloat*> DamageLimiterCurves;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat bActivateDamageLimiterOnFirstHit;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat FirstHitLimiterCooldown;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat bActivateDamageLimiterByDPSAmount;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat DamageSumInterval;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat DamageSumActivationThreshold;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat bActivateDamageLimiterOnLowHealth;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat bLowHealthThresholdRelative;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat LowHealthThresholdRelative;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat LowHealthThresholdAbsolute;
    
public:
    UIGS_PlayerDamageHandlerComponent(const FObjectInitializer& ObjectInitializer);

};

