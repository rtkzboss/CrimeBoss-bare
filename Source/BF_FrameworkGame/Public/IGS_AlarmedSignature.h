#pragma once
#include "CoreMinimal.h"
#include "EIGS_AlarmReason.h"
#include "IGS_AlarmedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_AlarmedSignature, EIGS_AlarmReason, AlarmReason);
