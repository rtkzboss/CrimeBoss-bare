#pragma once
#include "CoreMinimal.h"
#include "EIGS_WoundType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WoundType : uint8 {
    EWT_None UMETA(DisplayName=None),
    EWT_Gunshot UMETA(DisplayName=Gunshot),
    EWT_Slash UMETA(DisplayName=Slash),
    EWT_BluntSmall UMETA(DisplayName="Blunt Small"),
    EWT_BluntLarge UMETA(DisplayName="Blunt Large"),
    EWT_Stab UMETA(DisplayName=Stab),
};
