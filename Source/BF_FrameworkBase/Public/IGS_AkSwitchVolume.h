#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_AkSwitchVolume.generated.h"

class UAkSwitchValue;

UCLASS()
class BF_FRAMEWORKBASE_API AIGS_AkSwitchVolume : public AVolume {
    GENERATED_BODY()
public:
    AIGS_AkSwitchVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkSwitchValue* FootstepAkSwitch;

    UPROPERTY()
    UAkSwitchValue* FootstepNoneAkSwitch;

};
