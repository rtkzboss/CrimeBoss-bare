#pragma once
#include "CoreMinimal.h"
#include "IGS_PanicStateChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PanicStateChangedSignature, bool, inState);
