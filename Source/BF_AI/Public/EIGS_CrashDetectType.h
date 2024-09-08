#pragma once
#include "CoreMinimal.h"
#include "EIGS_CrashDetectType.generated.h"

UENUM()
enum class EIGS_CrashDetectType : uint8 {
    CDT_None,
    CDT_All,
    CDT_StaticMesh,
    CDT_SkeletalMesh,
    Count,
};

