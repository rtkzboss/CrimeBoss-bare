#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_DialogueEvent, FName, inDialogueID);
