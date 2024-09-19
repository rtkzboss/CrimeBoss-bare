#pragma once
#include "CoreMinimal.h"
#include "EIGS_ReactionVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_ReactionVariant : uint8 {
    React_Unknown = 255 UMETA(DisplayName=Unknown),
    React_ReportIn = 0 UMETA(DisplayName="Report In"),
    React_WaveAtPlayer UMETA(DisplayName="Wave At Player"),
    React_FixWall UMETA(DisplayName="Fix Wall"),
    React_FixTable UMETA(DisplayName="Fix Table"),
    React_CloseDoor UMETA(DisplayName="Close Door"),
    React_Inspect UMETA(DisplayName=Inspect),
    React_SearchPlayer UMETA(DisplayName="Search Player"),
    React_SurpriseSmall UMETA(DisplayName="Surprise Small"),
    React_SurpriseDanger UMETA(DisplayName="Surprise Danger"),
    React_LookAround UMETA(DisplayName="Look Around"),
    React_BackToNormal UMETA(DisplayName="Back To Normal"),
    React_InspectCamera UMETA(DisplayName="Inspect Camera"),
    React_ReportInWithGun UMETA(DisplayName="Report In With Gun"),
};
