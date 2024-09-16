#pragma once
#include "CoreMinimal.h"
#include "IGS_OnDownstateHealthChangedEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnDownstateHealthChangedEventSignature, float, inHealth);
