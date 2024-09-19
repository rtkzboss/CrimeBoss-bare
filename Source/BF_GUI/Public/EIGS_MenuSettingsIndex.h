#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuSettingsIndex.generated.h"

UENUM(BlueprintType)
enum class EIGS_MenuSettingsIndex : uint8 {
    MS_INVALID = 255 UMETA(DisplayName=INVALID),
    MS_GameSet = 0 UMETA(DisplayName="Game Set"),
    MS_ControlsSet UMETA(DisplayName="Controls Set"),
    MS_GraphicsSet UMETA(DisplayName="Graphics Set"),
    MS_SoundSet UMETA(DisplayName="Sound Set"),
    MS_VoiceSet UMETA(DisplayName="Voice Set"),
};
