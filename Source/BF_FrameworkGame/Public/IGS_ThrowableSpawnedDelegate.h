#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableSpawnedDelegate.generated.h"

class AIGS_ThrowableProjectileBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ThrowableSpawnedDelegate, AIGS_ThrowableProjectileBase*, inProjectile);
