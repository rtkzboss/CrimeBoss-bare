#pragma once
#include "CoreMinimal.h"
#include "IGS_BotOrderAction.h"
#include "IGS_BotOrderGenericDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BotOrderGenericDelegate, const FIGS_BotOrderAction&, outAction);
