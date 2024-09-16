#pragma once
#include "CoreMinimal.h"
#include "IGS_HasDisabledPropCollisionChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_HasDisabledPropCollisionChangedSignature, bool, inHasDisabledPropCollision);
