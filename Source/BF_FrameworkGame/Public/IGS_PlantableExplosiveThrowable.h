#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableBase.h"
#include "IGS_PlantableExplosiveThrowable.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_PlantableExplosiveThrowable : public AIGS_ThrowableBase {
    GENERATED_BODY()
public:
    AIGS_PlantableExplosiveThrowable(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPrepareToThrow();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPrepareToPlant();

};
