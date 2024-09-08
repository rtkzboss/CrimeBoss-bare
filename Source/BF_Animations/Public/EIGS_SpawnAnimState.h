#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpawnAnimState.generated.h"

UENUM()
enum class EIGS_SpawnAnimState {
    EBF_AliveAfterSpawn,
    EBF_CanBeDeathDuringSpawn,
};

