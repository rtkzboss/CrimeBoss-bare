#pragma once
#include "CoreMinimal.h"
#include "IGS_EnemyHolder.h"
#include "IGS_DetectedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_DetectedSignature, FIGS_EnemyHolder, outEnemyHolder);
