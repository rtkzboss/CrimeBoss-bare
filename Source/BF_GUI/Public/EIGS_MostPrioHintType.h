#pragma once
#include "CoreMinimal.h"
#include "EIGS_MostPrioHintType.generated.h"

UENUM()
enum class EIGS_MostPrioHintType : uint8 {
    None,
    StartHeist,
    Throwbag,
    Mantle,
    Intimidate,
    StealthKill,
    BeingRevived,
    Break,
};

