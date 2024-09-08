#pragma once
#include "CoreMinimal.h"
#include "EIGS_CarAnimVariant.generated.h"

UENUM()
enum class EIGS_CarAnimVariant {
    C_Unknown = 255,
    C_Sitting = 0,
    C_GetIn,
    C_GetOut,
};

