#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeatherScenarioType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WeatherScenarioType : uint8 {
    Weather_ClearSky UMETA(DisplayName="Clear Sky"),
    Weather_DryOvercast UMETA(DisplayName="Dry Overcast"),
    Weather_WetOvercast UMETA(DisplayName="Wet Overcast"),
    Weather_LightRain UMETA(DisplayName="Light Rain"),
    Weather_MediumRain UMETA(DisplayName="Medium Rain"),
    Weather_HeavyRain UMETA(DisplayName="Heavy Rain"),
};
