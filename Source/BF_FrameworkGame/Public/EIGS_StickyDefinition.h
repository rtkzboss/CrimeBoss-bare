#pragma once
#include "CoreMinimal.h"
#include "EIGS_StickyDefinition.generated.h"

UENUM()
enum class EIGS_StickyDefinition {
    Unknown = 255,
    Start = 0,
    Arrived,
    Changed,
    EndWithLOS,
    EndWithoutLOS,
};

