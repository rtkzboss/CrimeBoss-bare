#pragma once
#include "CoreMinimal.h"
#include "EIGS_PerkCategory.generated.h"

UENUM(BlueprintType)
enum class EIGS_PerkCategory : uint8 {
    PC_Negative UMETA(DisplayName=Negative),
    PC_Positive UMETA(DisplayName=Positive),
    PC_Powerful UMETA(DisplayName=Powerful),
};
