#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "IGS_WeaponAccuracyInfoHolder.h"
#include "EIGS_ShowCrosshairSetting.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_CrosshairSectionWidget.generated.h"

class AIGS_WieldableBase;
class UIGS_CharacterWieldablesHolderComponent;
class UIGS_PlayerCharacterMovementComponent;
class UIGS_WieldableInventoryObjectBase;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_CrosshairSectionWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_PlayerCharacterMovementComponent* PlayerMovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_CharacterWieldablesHolderComponent* PlayerWieldableHolder;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_WieldableBase* ActiveWieldableActor;
    
    UPROPERTY(BlueprintReadOnly)
    UIGS_WieldableInventoryObjectBase* ActiveWieldableObject;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ShowCrosshairSetting ShowCrosshairSetting;
    
public:
    UIGS_CrosshairSectionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshCrosshairType();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponAccuracyChangedEvent(const FIGS_WeaponAccuracyInfoHolder& inAccuracy);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowCrosshairSettingChangedEvent(EIGS_ShowCrosshairSetting inShowCrosshairSetting);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShooterChangedEvent(EIGS_WeaponAttackType inShooter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReloadingChangedEvent(bool inIsReloading);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMovementSpeedChangedEvent(EIGS_Speed inNewSpeed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameplayTagsChangedEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAimingChangedEvent(bool inIsAiming);
    
    UFUNCTION(BlueprintPure)
    bool IsAimingAtFriendly() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAimingAtEnemy() const;
    
};

