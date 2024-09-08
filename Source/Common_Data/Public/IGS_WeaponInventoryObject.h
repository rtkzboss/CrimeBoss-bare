#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableInventoryObjectBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponInventoryObject.generated.h"

class UIGS_ModInventoryObject;
class UIGS_WeaponClassSettingsDataAsset;
class UIGS_WeaponSkinData;
class UMETA_WeaponInventoryObject;

UCLASS(Abstract)
class COMMON_DATA_API UIGS_WeaponInventoryObject : public UIGS_WieldableInventoryObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> WeaponDefinitionObject;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<TSubclassOf<UIGS_ModInventoryObject>> WeaponMods;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UIGS_WeaponSkinData> WeaponSkin;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UIGS_WeaponSkinData> DefaultWeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldConsumeAmmo;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsExtraFireModeActive;
    
protected:
    UPROPERTY(Transient)
    UIGS_WeaponClassSettingsDataAsset* m_WeaponClassData;
    
public:
    UIGS_WeaponInventoryObject();

    UFUNCTION(BlueprintCallable)
    int32 TakeAmmoFromMagazine(int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    bool HasFullMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool HasEmptyMagazine();
    
    UFUNCTION(BlueprintCallable)
    int32 GetReserveAmmoCapacity();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMagazineCapacity();
    
    UFUNCTION(BlueprintPure)
    int32 GetAmmoInMagazine() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyMod(TSubclassOf<UIGS_ModInventoryObject> inMod);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSkin(UIGS_WeaponSkinData* inNewSkin, UIGS_WeaponSkinData* inNewDefaultSkin);
    
    UFUNCTION(BlueprintCallable)
    void AddMod(TSubclassOf<UIGS_ModInventoryObject> inMod);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAmmoToMagazine(int32 inCount);
    
};

