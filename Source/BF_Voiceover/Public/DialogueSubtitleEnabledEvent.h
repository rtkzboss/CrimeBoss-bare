#pragma once
#include "CoreMinimal.h"
#include "EIGS_SubtitleType.h"
#include "DialogueSubtitleEnabledEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogueSubtitleEnabledEvent, bool, State, EIGS_SubtitleType, SubtitleType);
