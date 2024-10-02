#pragma once
#include "CoreMinimal.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_WeaponAmountInfo.h"
#include "META_WeaponInventoryObject.h"
#include "GameplayTagContainer.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_ConditionOperator.h"
#include "EMETA_Partner.h"
#include "META_ActionCardID.h"
#include "META_ActionCardStrenghtAmount.h"
#include "META_MissionID.h"
#include "META_PartnerInfo.h"
#include "META_PawnShopTrendDataRuntime.h"
#include "IGS_StashManagerBaseComponent.h"
#include "META_LootChanged.h"
#include "META_PartnerInfoChanged.h"
#include "Templates/SubclassOf.h"
#include "META_StashManagerComponent.generated.h"

class UMETA_BaseActionCard;
class UMETA_Equipment;
class UMETA_Weapon;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_StashManagerComponent : public UIGS_StashManagerBaseComponent {
    GENERATED_BODY()
public:
    UMETA_StashManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryGetValidParentLootTag(FGameplayTag inLootTag, FGameplayTag& outMetaTag);

    UFUNCTION(BlueprintCallable)
    void SetCashForPartner(EMETA_Partner Partner, int32 inCash);

    UFUNCTION(BlueprintCallable)
    bool RemoveEquipmentFromStashByObject(UMETA_Equipment* inEquipment);

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void GetWeaponsFromStashByID(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, UMETA_Weapon*& outWeaponsData, int32& outAmount);

    UFUNCTION(BlueprintPure)
    void GetWarehouseAttackLosses(int32& outRemovedMoney, TMap<FGameplayTag, int32>& outRemovedLoot) const;

    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> GetSortedLoot(bool inAscSort);

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void GetPlayersArmyTier(EMETA_ArmyTier& ArmyTier) const;

    UFUNCTION(BlueprintCallable)
    FMETA_PartnerInfo GetPartnerInfo(EMETA_Partner Partner, bool& bSuccess);

    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetParentLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue);

    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetOwnedItems(TArray<UMETA_Weapon*>& outWeapons, TArray<UMETA_Equipment*>& outEquipment);

    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue);

    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetEquippedItems(TArray<UMETA_Weapon*>& outWeapons, TArray<UMETA_Equipment*>& outEquipment);

    UFUNCTION(BlueprintCallable)
    void ChangeLootByValue(FGameplayTag inLootTag, int32 InValue, bool inRawValue);

    UFUNCTION(BlueprintCallable)
    void ChangeCashForPartner(EMETA_Partner Partner, int32 ByValue);

    UFUNCTION(BlueprintCallable)
    void AddEquipmentToStashByObject(UMETA_Equipment* inEquipment);

    UFUNCTION(BlueprintCallable)
    UMETA_Equipment* AddEquipmentToStashByID(TSubclassOf<UIGS_EquipmentInventoryObject> inEquipmentId);

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FMETA_PartnerInfoChanged OnPartnerInfoChanged;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FMETA_LootChanged OnLootChanged;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FMETA_LootChanged OnLootSold;

protected:
    UPROPERTY(BlueprintReadWrite)
    TMap<EMETA_Partner, FMETA_PartnerInfo> PartnersInfo;

    UPROPERTY(BlueprintReadWrite)
    TArray<UMETA_Equipment*> Equipment;

    UPROPERTY(BlueprintReadWrite)
    TMap<FGameplayTag, int32> Loot;

    UPROPERTY(BlueprintReadWrite)
    TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo> Weapons;

    UPROPERTY(BlueprintReadWrite)
    TMap<TSoftClassPtr<UMETA_BaseActionCard>, FMETA_ActionCardStrenghtAmount> ActionCards;

    UPROPERTY(BlueprintReadWrite)
    TMap<FMETA_ActionCardID, int32> ActionCardsDurationCounter;

    UPROPERTY(BlueprintReadWrite)
    int32 CurrentLootValueWasSoldToPawnShop;

    UPROPERTY(BlueprintReadWrite)
    TMap<FGameplayTag, FMETA_PawnShopTrendDataRuntime> PawnShopTrends;

    UPROPERTY(BlueprintReadWrite)
    int32 LastDayWhenWarehouseAttackStarted;

    UPROPERTY(BlueprintReadWrite)
    int32 ChanceWarehouseAttack;

    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UMETA_MissionID> WarehouseAttackMissionID;

    UPROPERTY(BlueprintReadWrite)
    int32 MoneyWarehouseAttackWasRemoved;

    UPROPERTY(BlueprintReadWrite)
    TMap<FGameplayTag, int32> LootWarehouseattackWasRemoved;

};
