#pragma once
#include "CoreMinimal.h"
#include "IGS_IsZiptiedChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_IsZiptiedChangedSignature, bool, InValue);
