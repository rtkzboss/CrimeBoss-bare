#pragma once
#include "CoreMinimal.h"
#include "EIGS_CutsceneChoiceVisibility.generated.h"

UENUM()
enum class EIGS_CutsceneChoiceVisibility : uint8 {
    Visible,
    Disabled,
    Hidden,
};

