#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimatedInteractiveComponentSimple.h"
#include "IGS_AnimatedInteractiveComponentProgress.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AnimatedInteractiveComponentProgress : public UIGS_AnimatedInteractiveComponentSimple {
    GENERATED_BODY()
public:
    UIGS_AnimatedInteractiveComponentProgress(const FObjectInitializer& ObjectInitializer);

};

