#pragma once
#include "CoreMinimal.h"
#include "IGS_TextChatInputStateChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_TextChatInputStateChanged, bool, inOpen);
