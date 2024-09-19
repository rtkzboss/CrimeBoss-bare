#pragma once
#include "CoreMinimal.h"
#include "EIGS_SecurityVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SecurityVariationType : uint8 {
    US_None UMETA(DisplayName=None),
    US_RDR UMETA(DisplayName=RDR),
    US_RDR2 UMETA(DisplayName="RDR 2"),
    US_Metahuman UMETA(DisplayName=Metahuman),
    US_Jewelry UMETA(DisplayName=Jewelry),
    US_Bay UMETA(DisplayName=Bay),
    US_Prison UMETA(DisplayName=Prison),
    US_Cop UMETA(DisplayName=Cop),
    US_Elite UMETA(DisplayName=Elite),
    US_FPSMaxIndex = 128 UMETA(DisplayName="FPS Max Index"),
    US_STO_Prison UMETA(DisplayName="STO Prison"),
    US_Unknown = 255 UMETA(DisplayName=Unknown),
};
