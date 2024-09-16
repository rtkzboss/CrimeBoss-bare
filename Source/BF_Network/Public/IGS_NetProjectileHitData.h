#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "Templates/SubclassOf.h"
#include "IGS_NetProjectileHitData.generated.h"

USTRUCT()
struct FIGS_NetProjectileHitData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Damage;

    UPROPERTY()
    TSubclassOf<UDamageType> DamageType;

    BF_NETWORK_API FIGS_NetProjectileHitData();
};
