#pragma once
#include "CoreMinimal.h"
#include "EBuildConfigurationExecPin.generated.h"

UENUM()
enum class EBuildConfigurationExecPin : uint8 {
    Debug,
    Development,
    Test,
    Shipping,
};

