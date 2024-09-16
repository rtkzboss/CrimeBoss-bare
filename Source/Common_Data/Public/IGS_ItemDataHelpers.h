#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "META_EquipmentSaveData.h"
#include "META_WeaponSaveData.h"
#include "EIGS_ItemPropertyFlags.h"
#include "EIGS_ItemType.h"
#include "EIGS_PerkCategory.h"
#include "EIGS_PerkClass.h"
#include "EIGS_UnlockCategory.h"
#include "IGS_CarryableTableRow.h"
#include "IGS_CommonItemData.h"
#include "IGS_EquipmentInventoryObject.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_LootItemInventoryObject.h"
#include "IGS_LootItemsData.h"
#include "IGS_ModTableRow.h"
#include "IGS_ThrowableData.h"
#include "IGS_ThrowableInventoryObject.h"
#include "IGS_WeaponDefinitionTableRow.h"
#include "IGS_WieldableBaseData.h"
#include "IGS_WieldableInventoryObjectBase.h"
#include "META_HeisterLoadout.h"
#include "META_WeaponAmountInfo.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_ItemDataHelpers.generated.h"

class UIGS_CarryableInventoryObject;
class UIGS_ModInventoryObject;
class UMETA_Equipment;
class UMETA_Weapon;
class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_ItemDataHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ItemDataHelpers();

    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_WeaponAmountInfo> SortWeaponStash(TArray<FMETA_WeaponAmountInfo> inWeaponArray);

    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Equipment*> SortEquipmentStash(TArray<UMETA_Equipment*> inEquipmentArray);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FMETA_HeisterLoadout MakeMetaHeisterLoadoutFromSave(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inPrimaryWeapon, FMETA_WeaponSaveData inPrimaryWeaponSaveData, const TSubclassOf<UMETA_WeaponInventoryObject>& inSecondaryWeapon, FMETA_WeaponSaveData inSecondaryWeaponSaveData, FMETA_EquipmentSaveData inEquipmentSaveData);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FMETA_HeisterLoadout MakeMetaHeisterLoadoutChains(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inPrimaryWeapon, FMETA_WeaponSaveData inPrimaryWeaponSaveData, const TSubclassOf<UMETA_WeaponInventoryObject>& inSecondaryWeapon, FMETA_WeaponSaveData inSecondaryWeaponSaveData, const TArray<TSubclassOf<UMETA_WeaponInventoryObject>>& inPrimaryWeapons, const TArray<TSubclassOf<UMETA_WeaponInventoryObject>>& inSecondaryWeapons, FMETA_EquipmentSaveData inEquipmentSaveData, const TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>& inChainEquipments);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FMETA_HeisterLoadout MakeMetaHeisterLoadout(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inPrimaryWeapon, const TSubclassOf<UMETA_WeaponInventoryObject>& inSecondaryWeapon, const TSubclassOf<UIGS_EquipmentInventoryObject>& inEquipment, const TArray<FGameplayTag>& inUnlockedWeaponSkins);

    UFUNCTION(BlueprintPure)
    static bool IsShotgun_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData);

    UFUNCTION(BlueprintPure)
    static bool IsShotgun(FIGS_WieldableBaseData inWieldableData);

    UFUNCTION(BlueprintPure)
    static bool IsSecondary_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData);

    UFUNCTION(BlueprintPure)
    static bool IsSecondary(FIGS_WieldableBaseData inWieldableData);

    UFUNCTION(BlueprintPure)
    static bool IsPrimary_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData);

    UFUNCTION(BlueprintPure)
    static bool IsPrimary(FIGS_WieldableBaseData inWieldableData);

    UFUNCTION(BlueprintPure)
    static bool IsPowerWeapon(FIGS_WieldableBaseData inWieldableData);

    UFUNCTION(BlueprintCallable)
    static bool IsPerkInBitmask(EIGS_PerkCategory inPerkCategory, int32 inBitmask);

    UFUNCTION(BlueprintCallable)
    static bool IsPerkClassInBitmask(EIGS_PerkClass inPerkClass, int32 inBitmask);

    UFUNCTION(BlueprintPure)
    static bool IsMelee_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData);

    UFUNCTION(BlueprintPure)
    static bool IsMelee(FIGS_WieldableBaseData inWieldableData);

    UFUNCTION(BlueprintPure)
    static bool IsFrag(FIGS_ThrowableData inWieldableData);

    UFUNCTION(BlueprintPure)
    static bool IsFlash(FIGS_ThrowableData inWieldableData);

    UFUNCTION(BlueprintPure)
    static bool IsExplosive_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData);

    UFUNCTION(BlueprintPure)
    static bool IsExplosive(FIGS_WieldableBaseData inWieldableData);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_WieldableBaseData GetWieldableDataForClassBP(const UObject* inWCO, const TSubclassOf<UIGS_WieldableInventoryObjectBase> inItemClass);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_WeaponDefinitionTableRow GetWeaponDefinitionDataBP(const UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject> inWeaponDefinitionID);

    UFUNCTION(BlueprintPure)
    static EIGS_UnlockCategory GetUnlockCategoryFromID(FGameplayTag inTagID);

    UFUNCTION(BlueprintPure)
    static TArray<UMETA_Weapon*> GetUnequippedWeapons(const FMETA_WeaponAmountInfo& inWeaponArray);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TSubclassOf<UIGS_ThrowableInventoryObject> GetThrowableForEquipment(const UObject* inWCO, TSubclassOf<UIGS_EquipmentInventoryObject> inEquipment);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TSoftClassPtr<UIGS_ThrowableInventoryObject> GetSoftThrowableForEquipment(const UObject* inWCO, TSoftClassPtr<UIGS_EquipmentInventoryObject> inEquipment);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TSoftClassPtr<UIGS_EquipmentInventoryObject> GetSoftEquipmentForThrowable(const UObject* inWCO, TSoftClassPtr<UIGS_ThrowableInventoryObject> inThrowable);

    UFUNCTION(BlueprintCallable)
    static TArray<EIGS_PerkCategory> GetPerksFromBitmask(int32 inBitmask);

    UFUNCTION(BlueprintCallable)
    static TArray<EIGS_PerkClass> GetPerksClassesFromBitmask(int32 inBitmask);

    UFUNCTION(BlueprintCallable)
    static FIGS_ModTableRow GetModDataFromObject(UIGS_ModInventoryObject* inModObject);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static FIGS_LootItemsData GetLootItemData(UObject* inWCO, TSubclassOf<UIGS_LootItemInventoryObject> inClass, bool& outSucceeded);

    UFUNCTION(BlueprintCallable)
    static EIGS_ItemType GetItemTypeFromObject(const UIGS_InventoryObjectFramework* inItem);

    UFUNCTION(BlueprintCallable)
    static EIGS_ItemType GetItemTypeFromClass(const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass);

    UFUNCTION(BlueprintPure)
    static FString GetItemNameFromID(FGameplayTag inTagID);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TSubclassOf<UIGS_EquipmentInventoryObject> GetEquipmentForThrowable(const UObject* inWCO, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowable);

    UFUNCTION(BlueprintPure)
    static FGameplayTag GetEntitlementTagFromContainer(const FGameplayTagContainer& inTagContainer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_CommonItemData GetCommonDataForClassBP(const UObject* inWCO, const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass);

    UFUNCTION(BlueprintCallable)
    static FIGS_CarryableTableRow GetCarryableDataFromObject(UIGS_CarryableInventoryObject* inCarryableObject);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool DoesItemClassHaveProperty(const UObject* inWCO, const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass, EIGS_ItemPropertyFlags inItemFlag);

    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Weapon*> CreateArrayOfWeaponAndLenght(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponClass, UObject* inOuter, int32 inWeaponAmount);

};
