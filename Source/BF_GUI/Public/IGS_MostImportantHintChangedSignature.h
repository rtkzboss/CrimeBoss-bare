#pragma once
#include "CoreMinimal.h"
#include "EIGS_MostPrioHintType.h"
#include "IGS_MostImportantHintChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MostImportantHintChangedSignature, EIGS_MostPrioHintType, inMostImportantHint);
