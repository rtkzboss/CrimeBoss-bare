#pragma once
#include "CoreMinimal.h"
#include "IGS_TextChatStateChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_TextChatStateChanged, bool, inState);
