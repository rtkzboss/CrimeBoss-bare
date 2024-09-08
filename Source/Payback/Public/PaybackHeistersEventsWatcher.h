#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PaybackHeistersEventsWatcher.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackHeistersEventsWatcher : public UActorComponent {
    GENERATED_BODY()
public:
    UPaybackHeistersEventsWatcher(const FObjectInitializer& ObjectInitializer);

};

