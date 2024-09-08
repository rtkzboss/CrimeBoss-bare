#pragma once
#include "CoreMinimal.h"
#include "EIGS_CoverPreset.h"
#include "IGS_AIUnitBaseDataDefaults.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIUnitBaseDataDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HP;
    
    UPROPERTY(EditAnywhere)
    float Shield;
    
    UPROPERTY(EditAnywhere)
    float WeaponDamage;
    
    UPROPERTY(EditAnywhere)
    float MeleeDamage;
    
    UPROPERTY(EditAnywhere)
    float WeaponDispersion;
    
    UPROPERTY(EditAnywhere)
    float MovementSpeed;
    
    UPROPERTY(EditAnywhere)
    EIGS_CoverPreset CoverPreset;
    
    UPROPERTY(EditAnywhere)
    float CoverStickiness;
    
    UPROPERTY(EditAnywhere)
    float ReactionIntensity;
    
    FIGS_AIUnitBaseDataDefaults();
};

