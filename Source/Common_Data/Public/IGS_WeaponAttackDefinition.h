#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponAttackDefinition.generated.h"

class AIGS_PoolableBaseActor;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponAttackDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_PoolableBaseActor> ProjectileClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EffectiveRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RoundsPerMinute;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SemiAutoDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BurstDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ProjectilesPerShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ShooterTypes;
    
    FIGS_WeaponAttackDefinition();
};

