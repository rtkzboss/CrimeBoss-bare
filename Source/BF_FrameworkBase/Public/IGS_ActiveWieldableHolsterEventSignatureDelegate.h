#pragma once
#include "CoreMinimal.h"
#include "IGS_ActiveWieldableHolsterEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_ActiveWieldableHolsterEventSignature, bool, inIsHolstering, bool, inSkipAnimation);

