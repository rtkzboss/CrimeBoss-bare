#pragma once
#include "CoreMinimal.h"
#include "IGS_MeleeSoundParameters.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_MeleeSoundParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseThis;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UAkSwitchValue> WeaponNameAkSwitch;

    FIGS_MeleeSoundParameters();
};
