#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_AIWeaponDefinitions.h"
#include "IGS_DefaultWeaponModData.h"
#include "IGS_ExtraFireModeDefinition.h"
#include "IGS_RecoilDefinition.h"
#include "IGS_WeaponAccuracyDefinition.h"
#include "IGS_WeaponAdaptiveTriggerDefinitions.h"
#include "IGS_WeaponAmmoDefinition.h"
#include "IGS_WeaponAnimationDefinitions.h"
#include "IGS_WeaponAttackDefinition.h"
#include "IGS_WeaponBashAttackDefinition.h"
#include "IGS_WeaponInventoryObject.h"
#include "IGS_WeaponOffenceDefinitions.h"
#include "IGS_WeaponPenetrationDefinition.h"
#include "IGS_WieldableBaseData.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponTableRow.generated.h"

class UAkSwitchValue;
class UIGS_WeaponClassSettingsDataAsset;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag TagID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_WeaponInventoryObject> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UIGS_WeaponClassSettingsDataAsset* ClassDataOverride;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAttackDefinition Attack;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAccuracyDefinition Accuracy;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_RecoilDefinition Recoil;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAmmoDefinition Ammo;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponBashAttackDefinition Bash;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAnimationDefinitions Animations;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponOffenceDefinitions Offences;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAdaptiveTriggerDefinitions AdaptiveTriggers;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponPenetrationDefinition PenetrationDefinition;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WieldableBaseData WieldableData;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_DefaultWeaponModData DefaultModData;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIWeaponDefinitions AIData;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_ExtraFireModeDefinition ExtraFireModeData;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> WeaponNameAkSwitch;

    FIGS_WeaponTableRow();
};
