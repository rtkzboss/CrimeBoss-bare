#pragma once
#include "CoreMinimal.h"
#include "EIGS_StickyType.generated.h"

UENUM()
enum class EIGS_StickyType {
    StickyType_None,
    StickyType_Static,
    StickyType_Moving,
    StickyType_UNKNOWN = 255,
};

