#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_LeanSide.h"
#include "IGS_AILeanChangedEventDelegate.h"
#include "IGS_AIWorldTracingComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AIWorldTracingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_AILeanChangedEvent OnLeanChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceToLean;
    
public:
    UIGS_AIWorldTracingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    EIGS_LeanSide GetCurrentLeanSide() const;
    
};

