#pragma once
#include "CoreMinimal.h"
#include "IGS_ReloaderBase.h"
#include "IGS_ShotgunReloader.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ShotgunReloader : public UIGS_ReloaderBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 AmmoPerStep;
    
public:
    UIGS_ShotgunReloader(const FObjectInitializer& ObjectInitializer);

};

