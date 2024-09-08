#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_EnemyHolder.h"
#include "IGS_AggroHandlerComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AggroHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float AggroUpdateTick;
    
    UPROPERTY(EditDefaultsOnly)
    float AggroSwitchedCooldownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float GlobalAggroChangeDivisor;
    
public:
    UIGS_AggroHandlerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    AActor* GetRecommendedTarget() const;
    
    UFUNCTION(BlueprintPure)
    FIGS_EnemyHolder BPGetRecommendedTargetHolder() const;
    
};

