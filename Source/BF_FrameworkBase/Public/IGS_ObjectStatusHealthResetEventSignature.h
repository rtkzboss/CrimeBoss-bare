#pragma once
#include "CoreMinimal.h"
#include "IGS_ObjectStatusHealthResetEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_ObjectStatusHealthResetEventSignature, float, CurrentHealth, float, CurrentShield);
