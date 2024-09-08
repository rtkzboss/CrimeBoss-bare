#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UIParticleActor.generated.h"

UCLASS(Config=Inherit)
class AUIParticleActor : public AActor {
    GENERATED_BODY()
public:
    AUIParticleActor(const FObjectInitializer& ObjectInitializer);

};

