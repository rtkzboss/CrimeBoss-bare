#pragma once
#include "CoreMinimal.h"
#include "EIGS_GangsterRelation.generated.h"

UENUM()
enum class EIGS_GangsterRelation {
    INVALID = 255,
    Neutral = 0,
    Hate,
    Superhate,
};

