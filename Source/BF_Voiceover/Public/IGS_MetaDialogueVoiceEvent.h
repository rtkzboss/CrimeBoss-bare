#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaDialogueVoiceEvent.generated.h"

class UAkExternalMediaAsset;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaDialogueVoiceEvent, UAkExternalMediaAsset*, VoiceMedia);