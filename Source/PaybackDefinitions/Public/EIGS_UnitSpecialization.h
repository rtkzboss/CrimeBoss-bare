#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitSpecialization.generated.h"

UENUM(BlueprintType)
enum class EIGS_UnitSpecialization : uint8 {
    US_None UMETA(DisplayName=None),
    US_Sniper UMETA(DisplayName=Sniper),
    US_Shield UMETA(DisplayName=Shield),
    US_Melee UMETA(DisplayName=Melee),
    US_Heavy UMETA(DisplayName=Heavy),
    US_Detective UMETA(DisplayName=Detective),
    US_TurfWar_None UMETA(DisplayName="Turf War None"),
    US_Scout UMETA(DisplayName=Scout),
    US_HeavyMelee UMETA(DisplayName="Heavy Melee"),
    US_Engineer UMETA(DisplayName=Engineer),
    US_Booster UMETA(DisplayName=Booster),
    US_Thrower UMETA(DisplayName=Thrower),
    US_Artillery UMETA(DisplayName=Artillery),
    US_Captain UMETA(DisplayName=Captain),
    US_Unknown = 255 UMETA(DisplayName=Unknown),
};
