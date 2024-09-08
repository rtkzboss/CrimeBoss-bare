#pragma once
#include "CoreMinimal.h"
#include "IGS_FootstepsBaseComponent.h"
#include "IGS_FootstepsEventBasedComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_FootstepsEventBasedComponent : public UIGS_FootstepsBaseComponent {
    GENERATED_BODY()
public:
    UIGS_FootstepsEventBasedComponent(const FObjectInitializer& ObjectInitializer);

};

