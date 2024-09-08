#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_WeaponSkinStruct.h"
#include "IGS_WeaponSkinTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponSkinDatabase.generated.h"

class UDataTable;
class UIGS_InventoryObjectFramework;
class UIGS_WeaponSkinData;
class UIGS_WeaponSkinDatabase;
class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_WeaponSkinDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_WeaponSkinDatabase();

    UFUNCTION(BlueprintCallable)
    void ModAppendDataTable(UDataTable* inNewTable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FGameplayTag GetWeaponSkinTagFromDefaultSkin(UObject* inWCO, TSoftObjectPtr<UIGS_WeaponSkinData> inDefaultSkin, TSubclassOf<UIGS_InventoryObjectFramework> inWeaponId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_WeaponSkinStruct GetWeaponSkinStructFromDefaultSkin(UObject* inWCO, TSoftObjectPtr<UIGS_WeaponSkinData> inDefaultSkin, TSubclassOf<UIGS_InventoryObjectFramework> inWeaponId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_WeaponSkinStruct GetWeaponSkinStructData(UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static UIGS_WeaponSkinDatabase* GetWeaponSkinDatabaseInstance(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FGameplayTag GetSkinTagFromDefaultSkin(UObject* inWCO, TSoftObjectPtr<UIGS_WeaponSkinData> inDefaultSkin);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TSoftObjectPtr<UIGS_WeaponSkinData> GetDefaultSkinMaterialSlotFromTag(UObject* inWCO, FGameplayTag inWeaponSkinTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TSoftObjectPtr<UIGS_WeaponSkinData> GetDefaultSkinFromTag(UObject* inWCO, FGameplayTag inSkinTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_WeaponSkinTableRow GetDataWeaponSkin(UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded, bool inSearchMaterialSlots);
    
};

