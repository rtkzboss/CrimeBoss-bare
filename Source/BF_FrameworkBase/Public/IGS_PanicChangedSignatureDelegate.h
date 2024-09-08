#pragma once
#include "CoreMinimal.h"
#include "IGS_PanicChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PanicChangedSignature, bool, inPanic);

