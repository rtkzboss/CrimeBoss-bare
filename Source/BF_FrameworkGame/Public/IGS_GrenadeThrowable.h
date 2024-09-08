#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableBase.h"
#include "IGS_GrenadeThrowable.generated.h"

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_GrenadeThrowable : public AIGS_ThrowableBase {
    GENERATED_BODY()
public:
    AIGS_GrenadeThrowable(const FObjectInitializer& ObjectInitializer);

};

