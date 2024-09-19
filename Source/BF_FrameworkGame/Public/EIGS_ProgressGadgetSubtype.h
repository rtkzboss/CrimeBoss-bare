#pragma once
#include "CoreMinimal.h"
#include "EIGS_ProgressGadgetSubtype.generated.h"

UENUM(BlueprintType)
enum class EIGS_ProgressGadgetSubtype : uint8 {
    Type_Default UMETA(DisplayName=Default),
    Type_Buzzsaw UMETA(DisplayName=Buzzsaw),
    Type_Drill UMETA(DisplayName=Drill),
    Type_Computer UMETA(DisplayName=Computer),
    Type_DefendPoint UMETA(DisplayName="Defend Point"),
};
