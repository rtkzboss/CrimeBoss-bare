#pragma once
#include "CoreMinimal.h"
#include "EIGS_PushType.generated.h"

UENUM(BlueprintType)
enum class EIGS_PushType : uint8 {
    Push_Unknown = 255 UMETA(DisplayName=Unknown),
    Push_Front = 0 UMETA(DisplayName=Front),
    Push_Left UMETA(DisplayName=Left),
    Push_Back UMETA(DisplayName=Back),
    Push_Right UMETA(DisplayName=Right),
};
