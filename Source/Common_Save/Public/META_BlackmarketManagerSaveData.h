#pragma once
#include "CoreMinimal.h"
#include "META_ArmyTierConfiguration.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "META_BMActiveEventLootData.h"
#include "META_BMEventEquipmentData.h"
#include "META_BMEventLootData.h"
#include "META_BMEventWeaponData.h"
#include "META_EquipmentSaveData.h"
#include "META_VendorLootKey.h"
#include "META_WeaponSaveData.h"
#include "META_GenericCharacterSave.h"
#include "META_HeisterSaveData.h"
#include "Templates/SubclassOf.h"
#include "META_BlackmarketManagerSaveData.generated.h"

class UIGS_EquipmentInventoryObject;
class UMETA_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_BlackmarketManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_GenericCharacterSave> GenericRecruitsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_GenericCharacterSave> GenericCheapRecruitsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_HeisterSaveData> UniqueRecruitsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData> WeaponsBlackmarket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, FMETA_EquipmentSaveData> EquipmentBlackmarket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FGameplayTag> UnseenUnlockedCharacterTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FGameplayTag> UnseenUnlockedWeaponTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FGameplayTag> UnseenUnlockedEquipmentTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 GenericPrevID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 DayWhenHeistersMarketBecameAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 DayWhenWeaponsMarketBecameAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FGameplayTag> PlotlineAssetsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTagContainer TemporaryLockedPlotlineAssetsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_BMActiveEventLootData ActiveLootEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FMETA_VendorLootKey, FMETA_BMEventLootData> ReadyLootEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 BaseDayForLootEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_BMEventWeaponData WeaponEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData> WeaponsEventPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 BaseDayForWeaponEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_BMEventEquipmentData EquipmentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_EquipmentSaveData> EquipmentEventPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 BaseDayForEquipmentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 WeaponsPoolRefreshesCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 WeaponsPoolRefreshesPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_ArmyTierConfiguration HireArmyEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 AmountOfGeneratedSoldiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 BaseDayForHireArmyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 AmountOfBoughtCheapHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 HeistersPoolRefreshesCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 HeistersPoolRefreshPrice;
    
    FMETA_BlackmarketManagerSaveData();
};

