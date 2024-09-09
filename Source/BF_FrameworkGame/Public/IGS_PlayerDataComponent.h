#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PlayerDataComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerDataComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastEnemyHitTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastShootTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastInjuredTime;
    
};

