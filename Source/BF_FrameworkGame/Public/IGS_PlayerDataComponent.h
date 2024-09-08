#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PlayerDataComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastEnemyHitTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastShootTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastInjuredTime;
    
    UIGS_PlayerDataComponent(const FObjectInitializer& ObjectInitializer);

};

