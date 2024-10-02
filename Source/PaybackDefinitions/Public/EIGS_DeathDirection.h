#pragma once
#include "CoreMinimal.h"
#include "EIGS_DeathDirection.generated.h"

UENUM(BlueprintType)
enum class EIGS_DeathDirection : uint8 {
    DD_Default UMETA(DisplayName=Default),
    DD_Right UMETA(DisplayName=Right),
    DD_Left UMETA(DisplayName=Left),
    DD_Up UMETA(DisplayName=Up),
};
