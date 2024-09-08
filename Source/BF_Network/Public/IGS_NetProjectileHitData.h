#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_NetProjectileHitData.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FIGS_NetProjectileHitData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Damage;
    
    UPROPERTY()
    TSubclassOf<UDamageType> DamageType;
    
    BF_NETWORK_API FIGS_NetProjectileHitData();
};

