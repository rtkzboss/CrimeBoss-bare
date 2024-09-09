#pragma once
#include "CoreMinimal.h"
#include "IGS_AmmoInventoryObjectAmmoChangedSignatureDelegate.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_AmmoInventoryObject.generated.h"

class UIGS_WeaponInventoryObject;

UCLASS(Abstract)
class COMMON_DATA_API UIGS_AmmoInventoryObject : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UIGS_AmmoInventoryObject();

    UFUNCTION(BlueprintCallable)
    int32 TakeAmmoForWeapon(int32 inCount, UIGS_WeaponInventoryObject* inWeapon);
    
    UFUNCTION(BlueprintPure)
    bool IsAmmoFull() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAmmoEmptyForWeapon(UIGS_WeaponInventoryObject* inWeapon);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPreciseAmmoValue(UIGS_WeaponInventoryObject* inWeapon);
    
    UFUNCTION(BlueprintPure)
    float GetAmmoPercent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAmmoCountInterpolated(int32 inWeaponMaxAmmoCount) const;
    
    UFUNCTION(BlueprintCallable)
    void AddAmmoPercent(float inAmmoPercent);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAmmoForWeapon(int32 inCount, UIGS_WeaponInventoryObject* inWeapon);
    
    UPROPERTY(BlueprintAssignable)
    FIGS_AmmoInventoryObjectAmmoChangedSignature OnAmmoChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_AmmoInventoryObjectAmmoChangedSignature OnAmmoDepleted;
    
};

