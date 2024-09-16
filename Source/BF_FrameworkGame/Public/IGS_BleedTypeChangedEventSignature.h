#pragma once
#include "CoreMinimal.h"
#include "EIGS_BleedType.h"
#include "IGS_BleedTypeChangedEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BleedTypeChangedEventSignature, EIGS_BleedType, BleedType);
