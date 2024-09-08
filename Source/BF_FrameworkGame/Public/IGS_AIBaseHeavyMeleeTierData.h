#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIBaseHeavyMeleeTierData.generated.h"

class UIGS_AIMeleeWeaponDef;

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIBaseHeavyMeleeTierData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UIGS_AIMeleeWeaponDef> SecondaryMeleeWeapon;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxMeleeRange;
    
    UPROPERTY(EditDefaultsOnly)
    float MinMeleeRange;
    
    UPROPERTY(EditDefaultsOnly)
    float DestroyableWeaponHealth;
    
    UPROPERTY(EditDefaultsOnly)
    float DestroyableWeaponDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float ChargeSteeringMaxWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float ChargeSteeringMinWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float ChargeSteeringMaxDistance;
    
    FIGS_AIBaseHeavyMeleeTierData();
};

