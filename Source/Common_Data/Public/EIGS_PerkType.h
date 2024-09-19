#pragma once
#include "CoreMinimal.h"
#include "EIGS_PerkType.generated.h"

UENUM(BlueprintType)
enum class EIGS_PerkType : uint8 {
    PT_MetaPerk UMETA(DisplayName="Meta Perk"),
    PT_FPSPerk UMETA(DisplayName="FPS Perk"),
    PT_CombinedPerk UMETA(DisplayName="Combined Perk"),
};
