#pragma once
#include "CoreMinimal.h"
#include "IGS_CrouchChangedEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CrouchChangedEventSignature, bool, inIsCrouching);
