#pragma once
#include "CoreMinimal.h"
#include "EIGS_StorePlatform.generated.h"

UENUM()
enum class EIGS_StorePlatform : uint8 {
    None,
    EpicGameStore,
    Steam,
    PS5,
    Xbox,
};

