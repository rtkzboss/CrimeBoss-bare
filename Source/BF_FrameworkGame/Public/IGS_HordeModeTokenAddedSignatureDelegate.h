#pragma once
#include "CoreMinimal.h"
#include "IGS_HordeModeTokenAddedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_HordeModeTokenAddedSignature, const int32, inTokensAmount);

