#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_SphereOverlappableComponent.h"
#include "IGS_SuppressionHandlerComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SuppressionHandlerComponent : public UIGS_SphereOverlappableComponent {
    GENERATED_BODY()
public:
    UIGS_SuppressionHandlerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCapsuleSize(float inCapsuleSize);
    
protected:
    UFUNCTION()
    void OnCharacterHit(float inDamage, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
    UPROPERTY(EditDefaultsOnly)
    float TimeToWaitAfterSniperShake;
    
    UPROPERTY(EditDefaultsOnly)
    float HeadCollisionCapsuleRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float AggroDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float EventsToActivate;
    
    UPROPERTY(EditDefaultsOnly)
    float AggroDisabledDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float AggroCumulationTimeout;
    
};

