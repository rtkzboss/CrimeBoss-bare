#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScenarioDifficulty.generated.h"

UENUM(BlueprintType)
enum class EIGS_ScenarioDifficulty : uint8 {
    SD_Unknown UMETA(DisplayName=Unknown),
    SD_LightForce UMETA(DisplayName="Light Force"),
    SD_MediumForce UMETA(DisplayName="Medium Force"),
    SD_HeavyForce UMETA(DisplayName="Heavy Force"),
};
