#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayObjectAnimationDelegate.generated.h"

class UAnimMontage;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PlayObjectAnimationDelegate, UAnimMontage*, inAnim);
