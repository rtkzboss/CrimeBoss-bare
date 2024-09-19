#pragma once
#include "CoreMinimal.h"
#include "EIGS_PerkClass.generated.h"

UENUM(BlueprintType)
enum class EIGS_PerkClass : uint8 {
    PC_Generic UMETA(DisplayName=Generic),
    PC_Combat UMETA(DisplayName=Combat),
    PC_Defense UMETA(DisplayName=Defense),
    PC_Stealth UMETA(DisplayName=Stealth),
    PC_Agility UMETA(DisplayName=Agility),
    PC_Special UMETA(DisplayName=Special),
};
