#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_IdleAvoidanceComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_IdleAvoidanceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_IdleAvoidanceComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VelocityTreshold;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AvoidanceWeihgtOverride;

};
