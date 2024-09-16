#pragma once
#include "CoreMinimal.h"
#include "IGS_PossessedByDynamicSignature.generated.h"

class AController;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PossessedByDynamicSignature, AController*, NewController);
