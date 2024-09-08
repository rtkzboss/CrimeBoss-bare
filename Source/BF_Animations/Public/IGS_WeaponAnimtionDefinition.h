#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponAnimtionDefinition.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_WeaponAnimtionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ShootingMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsMontageLooping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ShooterChangeMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadTacticalSilent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadNormalSilent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CheckMagazineWeaponMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadTacticalFight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadNormalFight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LadderShooting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LadderShooterChange;
    
    FIGS_WeaponAnimtionDefinition();
};

