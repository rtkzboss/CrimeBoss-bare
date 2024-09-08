#pragma once
#include "CoreMinimal.h"
#include "IGS_ShooterBase.h"
#include "IGS_AutomaticShooter.generated.h"

class UAkAudioEvent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AutomaticShooter : public UIGS_ShooterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ShootStartAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ShootStopAudioEvent;
    
public:
    UIGS_AutomaticShooter(const FObjectInitializer& ObjectInitializer);

};

