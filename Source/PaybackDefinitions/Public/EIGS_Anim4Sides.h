#pragma once
#include "CoreMinimal.h"
#include "EIGS_Anim4Sides.generated.h"

UENUM(BlueprintType)
enum class EIGS_Anim4Sides : uint8 {
    Side_Back UMETA(DisplayName=Back),
    Side_Front UMETA(DisplayName=Front),
    Side_Left UMETA(DisplayName=Left),
    Side_Right UMETA(DisplayName=Right),
};
