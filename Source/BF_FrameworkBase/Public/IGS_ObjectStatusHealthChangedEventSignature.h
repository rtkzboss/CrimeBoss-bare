#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_ObjectStatusHealthChangedEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FIGS_ObjectStatusHealthChangedEventSignature, float, CurrentHealth, float, CurrentShield, float, HealthChange, float, ShieldChange, const FIGS_HitInfo&, HitInfo);