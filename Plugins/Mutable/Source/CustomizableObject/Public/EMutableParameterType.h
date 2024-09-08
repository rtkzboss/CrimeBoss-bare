#pragma once
#include "CoreMinimal.h"
#include "EMutableParameterType.generated.h"

UENUM()
enum class EMutableParameterType : uint8 {
    None,
    Bool,
    Int,
    Float,
    Color,
    Projector,
    Texture,
};

