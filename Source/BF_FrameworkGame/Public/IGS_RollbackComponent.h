#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_RollbackComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_RollbackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_RollbackComponent(const FObjectInitializer& ObjectInitializer);

};

