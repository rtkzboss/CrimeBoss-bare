#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterTraceTickType.generated.h"

UENUM()
enum class EIGS_CharacterTraceTickType {
    TraceTick_MainLean,
    TraceTick_SidesLean,
    TraceTick_Mantle,
};

