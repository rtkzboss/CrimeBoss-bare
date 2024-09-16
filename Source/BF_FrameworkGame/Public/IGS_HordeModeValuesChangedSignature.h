#pragma once
#include "CoreMinimal.h"
#include "IGS_HordeModeValues.h"
#include "IGS_HordeModeValuesChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_HordeModeValuesChangedSignature, const FIGS_HordeModeValues, inValues);
