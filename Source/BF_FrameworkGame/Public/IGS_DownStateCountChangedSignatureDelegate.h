#pragma once
#include "CoreMinimal.h"
#include "IGS_DownStateCountChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_DownStateCountChangedSignature, int32, inNewDownStateCount);

