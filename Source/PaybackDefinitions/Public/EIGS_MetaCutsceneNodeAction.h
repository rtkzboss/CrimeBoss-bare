#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaCutsceneNodeAction.generated.h"

UENUM()
enum class EIGS_MetaCutsceneNodeAction : uint8 {
    MoveToNode,
    ResultA,
    ResultB,
    ResultC,
    None = 255,
};

