#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_LeanSide.h"
#include "IGS_AILeanChangedEvent.h"
#include "IGS_AIWorldTracingComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AIWorldTracingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_AIWorldTracingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    EIGS_LeanSide GetCurrentLeanSide() const;

    UPROPERTY(BlueprintAssignable)
    FIGS_AILeanChangedEvent OnLeanChangedEvent;

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceToLean;

};
