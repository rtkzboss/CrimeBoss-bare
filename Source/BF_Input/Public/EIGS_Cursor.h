#pragma once
#include "CoreMinimal.h"
#include "EIGS_Cursor.generated.h"

UENUM()
enum class EIGS_Cursor {
    INVALID = 255,
    NativeNormal = 0,
    NativeHover,
    VirtualNormal,
    VirtualHover,
    MAX,
};

