#pragma once
#include "CoreMinimal.h"
#include "IGS_NetProjectileHitResult.h"
#include "IGS_NetProjectileHitData.h"
#include "IGS_NetProjectileData.generated.h"

USTRUCT()
struct FIGS_NetProjectileData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FIGS_NetProjectileHitResult NetProjectileHitResult;

    UPROPERTY()
    FIGS_NetProjectileHitData NetProjectileHitData;

    BF_NETWORK_API FIGS_NetProjectileData();
};
