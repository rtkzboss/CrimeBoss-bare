#pragma once
#include "CoreMinimal.h"
#include "IGS_RecoilDefinition.h"
#include "IGS_WeaponAccuracyDefinition.h"
#include "IGS_WeaponAdaptiveTriggerDefinitions.h"
#include "IGS_WeaponAmmoDefinition.h"
#include "IGS_WeaponAnimationDefinitions.h"
#include "IGS_WeaponAttackDefinition.h"
#include "IGS_WeaponOffenceDefinitions.h"
#include "IGS_ExtraFireModeDefinition.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ExtraFireModeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAttackDefinition Attack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAccuracyDefinition Accuracy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_RecoilDefinition Recoil;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAmmoDefinition Ammo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAnimationDefinitions Animations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponOffenceDefinitions Offences;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAdaptiveTriggerDefinitions AdaptiveTriggers;
    
    FIGS_ExtraFireModeDefinition();
};

