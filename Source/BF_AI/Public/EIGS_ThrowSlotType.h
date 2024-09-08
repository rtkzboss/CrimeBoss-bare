#pragma once
#include "CoreMinimal.h"
#include "EIGS_ThrowSlotType.generated.h"

UENUM()
enum class EIGS_ThrowSlotType {
    None,
    Socket,
    SceneComponent,
};

