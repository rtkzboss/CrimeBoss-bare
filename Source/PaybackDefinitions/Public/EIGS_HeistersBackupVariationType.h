#pragma once
#include "CoreMinimal.h"
#include "EIGS_HeistersBackupVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_HeistersBackupVariationType : uint8 {
    US_None UMETA(DisplayName=None),
    US_GI_US_Soldiers UMETA(DisplayName="GI US Soldiers"),
    US_FPSMaxIndex = 128 UMETA(DisplayName="FPS Max Index"),
    US_STO_GISoldiers UMETA(DisplayName="STO GI Soldiers"),
    US_STO_Arctic UMETA(DisplayName="STO Arctic"),
    US_STO_LatinoGang UMETA(DisplayName="STO Latino Gang"),
    US_STO_Haitians UMETA(DisplayName="STO Haitians"),
    US_STO_Hielos UMETA(DisplayName="STO Hielos"),
    US_Unknown = 255 UMETA(DisplayName=Unknown),
};
