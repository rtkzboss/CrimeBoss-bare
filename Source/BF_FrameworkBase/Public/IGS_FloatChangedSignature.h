#pragma once
#include "CoreMinimal.h"
#include "IGS_FloatChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_FloatChangedSignature, float, InValue);
