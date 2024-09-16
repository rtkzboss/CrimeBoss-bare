#pragma once
#include "CoreMinimal.h"
#include "IGS_SubtitleData.h"
#include "DialogueSubtitleInsertEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueSubtitleInsertEvent, const FIGS_SubtitleData&, SubtitleData);
