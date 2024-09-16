#pragma once
#include "CoreMinimal.h"
#include "EIGS_SubtitleType.h"
#include "DialogueSubtitleRemoveEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueSubtitleRemoveEvent, EIGS_SubtitleType, SubtitleType);
