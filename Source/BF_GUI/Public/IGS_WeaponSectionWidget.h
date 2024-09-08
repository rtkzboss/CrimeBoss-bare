#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_WeaponSectionWidget.generated.h"

class AIGS_WieldableBase;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WeaponSectionWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ItemType CurrentWieldableType;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_WieldableBase* ActiveWieldable;
    
public:
    UIGS_WeaponSectionWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void WeaponShooterChanged(EIGS_WeaponAttackType AttackType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void WeaponMagazineAmmoChanged(int32 CurrentWieldableMagazineAmmo, int32 CurrentWieldableMaxMagazineAmmo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void WeaponAmmoReserveChanged(int32 CurrentWieldableAmmoReserve);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWidgetHidden();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponInspected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActiveWieldableChanged(EIGS_ItemType inType);
    
};

