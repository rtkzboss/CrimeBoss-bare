#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_ExplosiveCarryableComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ExplosiveCarryableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ExplosiveCarryableComponent(const FObjectInitializer& ObjectInitializer);

};

