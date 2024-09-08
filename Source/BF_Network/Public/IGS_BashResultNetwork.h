#pragma once
#include "CoreMinimal.h"
#include "IGS_NetProjectileHitResult.h"
#include "Templates/SubclassOf.h"
#include "IGS_BashResultNetwork.generated.h"

class AIGS_GameCharacterFramework;
class UDamageType;
class UIGS_ImpactTypeObject;

USTRUCT(BlueprintType)
struct FIGS_BashResultNetwork {
    GENERATED_BODY()
public:
    UPROPERTY()
    FIGS_NetProjectileHitResult HitResult;
    
    UPROPERTY()
    float Damage;
    
    UPROPERTY()
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY()
    TSubclassOf<UIGS_ImpactTypeObject> ImpactType;
    
    UPROPERTY()
    AIGS_GameCharacterFramework* BashingCharacter;
    
    UPROPERTY()
    uint8 bHit: 1;
    
    UPROPERTY()
    uint8 bIsUnarmedMelee: 1;
    
    BF_NETWORK_API FIGS_BashResultNetwork();
};

