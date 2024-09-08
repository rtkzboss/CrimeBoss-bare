#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SubControllerCommon.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SubControllerCommon : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_SubControllerCommon(const FObjectInitializer& ObjectInitializer);

};

