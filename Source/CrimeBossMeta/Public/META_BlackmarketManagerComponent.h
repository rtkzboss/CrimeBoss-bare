#pragma once
#include "CoreMinimal.h"
#include "META_ArmyTierConfiguration.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_RespectLvl.h"
#include "META_BMActiveEventLootData.h"
#include "META_BMEventEquipmentData.h"
#include "META_BMEventLootData.h"
#include "META_BMEventWeaponData.h"
#include "META_VendorLootKey.h"
#include "IGS_BlackmarketManagerBaseComponent.h"
#include "Templates/SubclassOf.h"
#include "META_BlackmarketManagerComponent.generated.h"

class UIGS_EquipmentInventoryObject;
class UMETA_Character;
class UMETA_Equipment;
class UMETA_PlotlineAsset;
class UMETA_Weapon;

UCLASS(Abstract, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_BlackmarketManagerComponent : public UIGS_BlackmarketManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    TArray<UMETA_Character*> UniqueHeistersPool;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UMETA_Character*> GenericHeistersPool;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UMETA_Weapon*> WeaponsPool;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UMETA_Equipment*> EquipmentPool;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UMETA_PlotlineAsset*> PlotlineAssetsPool;
    
    UPROPERTY(BlueprintReadWrite)
    int32 GenericPrevID;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DayWhenHeistersMarketBecameAvailable;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DayWhenWeaponsMarketBecameAvailable;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTagContainer TemporaryLockedPlotlineAssetsTags;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AmountOfBoughtCheapHeisters;
    
    UPROPERTY(BlueprintReadWrite)
    int32 RefreshWeaponsPoolCounter;
    
    UPROPERTY(BlueprintReadWrite)
    int32 RefreshHeistersPoolCounter;
    
    UPROPERTY(BlueprintReadWrite)
    int32 RefreshWeaponsPoolStartPrice;
    
    UPROPERTY(BlueprintReadWrite)
    int32 RefreshHeistersPoolStartPrice;
    
    UPROPERTY(BlueprintReadWrite)
    int32 BaseDayForLootEvents;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FMETA_VendorLootKey, FMETA_BMEventLootData> ReadyForActivationLootEvents;
    
    UPROPERTY(BlueprintReadWrite)
    FMETA_BMActiveEventLootData ActiveLootEvent;
    
    UPROPERTY(BlueprintReadWrite)
    int32 BaseDayForWeaponEvents;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UMETA_Weapon*> WeaponsOfBMEvent;
    
    UPROPERTY(BlueprintReadWrite)
    FMETA_BMEventWeaponData WeaponEvent;
    
    UPROPERTY(BlueprintReadWrite)
    int32 BaseDayForHireArmyEvent;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AmountOfGeneratedSoldiers;
    
    UPROPERTY(BlueprintReadWrite)
    FMETA_ArmyTierConfiguration ArmyHireEventData;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsHireArmyEventClamped;
    
    UPROPERTY(BlueprintReadWrite)
    int32 BaseDayForEquipmentEvent;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UMETA_Equipment*> EquipmentOfBMEvent;
    
    UPROPERTY(BlueprintReadWrite)
    FMETA_BMEventEquipmentData EquipmentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> UnlockedCharacterTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> UnlockedWeaponTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> UnlockedWeaponSkinTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> UnlockedEquipmentTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> UnseenUnlockedCharacterTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> UnseenUnlockedWeaponTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> UnseenUnlockedEquipmentTagIDs;
    
public:
    UMETA_BlackmarketManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ProcessWeaponEvent();
    
    UFUNCTION(BlueprintCallable)
    void ProcessUnseenUnlockedItemsFromQuickplay();
    
    UFUNCTION(BlueprintCallable)
    void ProcessHireArmyEvent();
    
    UFUNCTION(BlueprintPure)
    bool IsWeaponEventActive() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsWeaponBuyingUnlocked();
    
    UFUNCTION(BlueprintPure)
    bool IsHireArmyEventUnlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHireArmyEventActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquipmentEventActive() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsBMLootEventReady() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetWeaponsPoolRefreshPrice() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Weapon*> GetWeaponsPoolForBMWeaponEvent() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetWeaponEventUnlockTag() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_Character*> GetUniqueHeistersPoolForBlackmarket(EMETA_RespectLvl inCurrentBossStatus, int32 inTargetAmountOfUnseenItemsForPurchase);
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_PlotlineAsset*> GetPlotlineAssetsPool() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNextUniqueGenericID();
    
    UFUNCTION(BlueprintCallable)
    TSet<int32> GetManyUniqueGenericIDs(int32 inAmount);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> GetLockedEquipmentIDsForCurrentBMEquipmentEvent() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetHireArmyEventUnlockTag() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FMETA_ArmyTierConfiguration GetHireArmyEventData(bool& bActive) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetHeistersPoolRefreshPrice() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Equipment*> GetEquipmentPoolForBMEquipmentEvent() const;
    
protected:
    UFUNCTION(BlueprintPure)
    int32 GetCostOfSoldierForHire(EMETA_RespectLvl inRespect) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetBPEventWeaponInfoByCurrentBossRespect(FMETA_BMEventWeaponData& outWeaponEventData);
    
    UFUNCTION(BlueprintCallable)
    bool GetBPEventEquipmentInfoByCurrentBossRespect(FMETA_BMEventEquipmentData& outEquipmentEventData);
    
    UFUNCTION(BlueprintPure)
    TMap<FMETA_VendorLootKey, FMETA_BMEventLootData> GetBMEventLootDataForVendors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAmountOfSoldiersCanBeBought();
    
    UFUNCTION(BlueprintPure)
    int32 GetAmountOfGeneratedSoldiers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceWeaponsPoolRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceHeistersPoolRefresh();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ProcessWeaponEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckWeaponEventFinished();
    
    UFUNCTION(BlueprintCallable)
    void CheckHireArmyEventFinished();
    
    UFUNCTION(BlueprintCallable)
    void CheckEquipmentEventFinished();
    
public:
    UFUNCTION(BlueprintPure)
    bool CanWeaponEventBeTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BuySoldiers(int32 inAmount, int32& outAmountOfSoldiersBought);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateLootEventByVendor(FMETA_VendorLootKey inVendorLootKey);
    
};

