#pragma once
#include "CoreMinimal.h"
#include "EMETA_MenuState.generated.h"

UENUM(BlueprintType)
enum class EMETA_MenuState : uint8 {
    MS_Default UMETA(DisplayName=Default),
    MS_PostMission UMETA(DisplayName="Post Mission"),
    MS_InCutscene UMETA(DisplayName="In Cutscene"),
    MS_InScreenWithText UMETA(DisplayName="In Screen With Text"),
    MS_PostCutscene UMETA(DisplayName="Post Cutscene"),
    MS_InMovie UMETA(DisplayName="In Movie"),
    MS_LoadingCutscene UMETA(DisplayName="Loading Cutscene"),
    MS_MapChanging UMETA(DisplayName="Map Changing"),
    MS_StartUp UMETA(DisplayName="Start Up"),
    MS_LevelUpProgression UMETA(DisplayName="Level Up Progression"),
    MS_LevelUpBossCards UMETA(DisplayName="Level Up Boss Cards"),
    MS_INVALID = 255 UMETA(DisplayName=INVALID),
};
