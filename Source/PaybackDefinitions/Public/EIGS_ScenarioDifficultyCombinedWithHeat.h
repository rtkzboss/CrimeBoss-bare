#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScenarioDifficultyCombinedWithHeat.generated.h"

UENUM(BlueprintType)
enum class EIGS_ScenarioDifficultyCombinedWithHeat : uint8 {
    SDCWH_Unknown UMETA(DisplayName=Unknown),
    SDCWH_LightForce UMETA(DisplayName="Light Force"),
    SDCWH_MediumForce UMETA(DisplayName="Medium Force"),
    SDCWH_HeavyForce UMETA(DisplayName="Heavy Force"),
    SDCWH_VeryHeavyForce UMETA(DisplayName="Very Heavy Force"),
    SDCWH_Extreme UMETA(DisplayName=Extreme),
};
