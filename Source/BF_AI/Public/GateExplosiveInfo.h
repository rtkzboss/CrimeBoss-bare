#pragma once
#include "CoreMinimal.h"
#include "GateExplosiveInfo.generated.h"

class UIGS_BreachPointComponent;

USTRUCT()
struct FGateExplosiveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UIGS_BreachPointComponent* ExplosivePoint;

    BF_AI_API FGateExplosiveInfo();
};
