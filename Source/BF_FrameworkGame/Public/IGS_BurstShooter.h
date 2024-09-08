#pragma once
#include "CoreMinimal.h"
#include "IGS_SemiAutoShooter.h"
#include "IGS_BurstShooter.generated.h"

class UAkAudioEvent;

UCLASS(Abstract, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_BurstShooter : public UIGS_SemiAutoShooter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* Burst2ShotAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* Burst3ShotAudioEvent;
    
public:
    UIGS_BurstShooter(const FObjectInitializer& ObjectInitializer);

};

