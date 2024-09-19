#pragma once
#include "CoreMinimal.h"
#include "EIGS_WindScenarioType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WindScenarioType : uint8 {
    Wind_Still UMETA(DisplayName=Still),
    Wind_LightAir UMETA(DisplayName="Light Air"),
    Wind_Breeze UMETA(DisplayName=Breeze),
    Wind_Gale UMETA(DisplayName=Gale),
    Wind_Storm UMETA(DisplayName=Storm),
    Wind_Hurricane UMETA(DisplayName=Hurricane),
};
