#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "IGS_MovementSpeedDynamicSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MovementSpeedDynamicSignature, EIGS_Speed, inNewSpeed);