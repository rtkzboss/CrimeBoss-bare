#pragma once
#include "CoreMinimal.h"
#include "EIGS_StickyType.generated.h"

UENUM(BlueprintType)
enum class EIGS_StickyType : uint8 {
    StickyType_None UMETA(DisplayName=None),
    StickyType_Static UMETA(DisplayName=Static),
    StickyType_Moving UMETA(DisplayName=Moving),
    StickyType_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
};
