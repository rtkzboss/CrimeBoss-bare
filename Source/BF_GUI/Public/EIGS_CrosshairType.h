#pragma once
#include "CoreMinimal.h"
#include "EIGS_CrosshairType.generated.h"

UENUM()
enum class EIGS_CrosshairType {
    None,
    Dot,
    LinesTriProng,
    LinesQuadProng,
    Arcs,
    Circle,
};

