#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SentryAggroComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_SentryAggroComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float AggroUpdateTick;
    
    UPROPERTY(EditDefaultsOnly)
    float AggroSwitchedCooldownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float MinAggroRangeMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxAggroRangeMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float GlobalAggroChangeDivisor;
    
public:
    UIGS_SentryAggroComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    AActor* GetRecommendedTarget() const;
    
};

