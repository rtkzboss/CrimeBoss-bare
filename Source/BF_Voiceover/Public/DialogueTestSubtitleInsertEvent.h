#pragma once
#include "CoreMinimal.h"
#include "EIGS_SubtitleType.h"
#include "DialogueTestSubtitleInsertEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogueTestSubtitleInsertEvent, const FString&, SubtitleText, EIGS_SubtitleType, SubtitleType);
