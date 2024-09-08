#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PaybackAICharactersEventsWatcher.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackAICharactersEventsWatcher : public UActorComponent {
    GENERATED_BODY()
public:
    UPaybackAICharactersEventsWatcher(const FObjectInitializer& ObjectInitializer);

};

