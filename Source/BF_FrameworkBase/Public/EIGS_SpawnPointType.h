#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpawnPointType.generated.h"

UENUM()
enum class EIGS_SpawnPointType {
    SPT_Unknown,
    SPT_Card,
    SPT_Computer,
    SPT_Key,
    SPT_FuseBox,
    SPT_Note,
};

