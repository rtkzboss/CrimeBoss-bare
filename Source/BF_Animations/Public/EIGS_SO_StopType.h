#pragma once
#include "CoreMinimal.h"
#include "EIGS_SO_StopType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SO_StopType : uint8 {
    SO_Unknown = 255 UMETA(DisplayName=Unknown),
    SO_LoopOutAnim = 0 UMETA(DisplayName="Loop Out Anim"),
    SO_BreakAnim UMETA(DisplayName="Break Anim"),
    SO_Immediate UMETA(DisplayName=Immediate),
};
