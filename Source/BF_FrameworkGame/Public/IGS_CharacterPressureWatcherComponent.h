#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_CharacterPressureWatcherComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CharacterPressureWatcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_CharacterPressureWatcherComponent(const FObjectInitializer& ObjectInitializer);

};

