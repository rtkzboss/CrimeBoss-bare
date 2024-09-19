#pragma once
#include "CoreMinimal.h"
#include "EIGS_GlassPreset.generated.h"

UENUM(BlueprintType)
enum class EIGS_GlassPreset : uint8 {
    Panel_None UMETA(DisplayName=None),
    Panel_400X105 UMETA(DisplayName="400 X 105"),
    Panel_400X135 UMETA(DisplayName="400 X 135"),
    Panel_200X135 UMETA(DisplayName="200 X 135"),
    Panel_200X105 UMETA(DisplayName="200 X 105"),
    Panel_060X190 UMETA(DisplayName="060 X 190"),
    Panel_060X160 UMETA(DisplayName="060 X 160"),
    Panel_025X190 UMETA(DisplayName="025 X 190"),
    Panel_025X160 UMETA(DisplayName="025 X 160"),
    Panel_100X100 UMETA(DisplayName="100 X 100"),
    Panel_100X150 UMETA(DisplayName="100 X 150"),
    Panel_200X200 UMETA(DisplayName="200 X 200"),
    Panel_140X015 UMETA(DisplayName="140 X 015"),
    Panel_045X060 UMETA(DisplayName="045 X 060"),
    Panel_050X100 UMETA(DisplayName="050 X 100"),
    Panel_250X150 UMETA(DisplayName="250 X 150"),
    Panel_100X250 UMETA(DisplayName="100 X 250"),
};
