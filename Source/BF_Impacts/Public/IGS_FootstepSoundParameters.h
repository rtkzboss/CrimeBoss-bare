#pragma once
#include "CoreMinimal.h"
#include "EIGS_MovementSlope.h"
#include "IGS_FootstepSoundParameters.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_FootstepSoundParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseThis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_MovementSlope SlopeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UAkSwitchValue> FootstepAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UAkSwitchValue> ShoeAkSwitch;
    
    FIGS_FootstepSoundParameters();
};

