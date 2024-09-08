#pragma once
#include "CoreMinimal.h"
#include "EIGS_PerkType.generated.h"

UENUM()
enum class EIGS_PerkType : uint8 {
    PT_MetaPerk,
    PT_FPSPerk,
    PT_CombinedPerk,
};

