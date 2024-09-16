#pragma once
#include "CoreMinimal.h"
#include "OnLinkCooldownFinished.generated.h"

class UIGS_NavLinkComponentBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLinkCooldownFinished, UIGS_NavLinkComponentBase*, inSmartLink);
