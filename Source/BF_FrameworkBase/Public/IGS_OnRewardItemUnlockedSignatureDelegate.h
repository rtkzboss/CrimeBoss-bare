#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockItemInfo.h"
#include "IGS_OnRewardItemUnlockedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnRewardItemUnlockedSignature, FIGS_UnlockItemInfo, inUnlockItemInfo);

