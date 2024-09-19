#pragma once
#include "CoreMinimal.h"
#include "EIGS_OffenceType.generated.h"

UENUM(BlueprintType)
enum class EIGS_OffenceType : uint8 {
    Offence_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
    Offence_Player = 0 UMETA(DisplayName=Player),
    Offence_Noise UMETA(DisplayName=Noise),
    Offence_SuspActors UMETA(DisplayName="Susp Actors"),
    Offence_Special UMETA(DisplayName=Special),
};
