#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_WeaponBashAttackDefinition.h"
#include "IGS_AIWeaponDefinitions.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_AIWeaponDefinitions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeisterDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnemyDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseSpread;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EffectiveRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LineTraceEndRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReloadTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ProjectilesPerShot;
    
    UPROPERTY(EditAnywhere)
    bool bOverridePrimaryShooter;
    
    UPROPERTY(EditAnywhere)
    EIGS_WeaponAttackType PrimaryShooterOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponBashAttackDefinition AIBash;
    
    FIGS_AIWeaponDefinitions();
};

