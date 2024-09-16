#pragma once
#include "CoreMinimal.h"
#include "META_WeaponInventoryObject.h"
#include "GameplayTagContainer.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_Partner.h"
#include "EMETA_RespectLvl.h"
#include "META_ActionCardID.h"
#include "META_ActionCardStrenghtAmount.h"
#include "META_EquipmentSaveData.h"
#include "META_MissionID.h"
#include "META_PartnerInfo.h"
#include "META_PawnShopTrendDataRuntime.h"
#include "META_WeaponSaveDataArray.h"
#include "Templates/SubclassOf.h"
#include "META_StashManagerSaveData.generated.h"

class UMETA_BaseActionCard;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_StashManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveDataArray> WeaponsStash;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_EquipmentSaveData> Equipment;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<TSoftClassPtr<UMETA_BaseActionCard>, FMETA_ActionCardStrenghtAmount> ActionCards;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FMETA_ActionCardID, int32> ActionCardsDurationCounter;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_RespectLvl PlayerRespect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Army;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 AvailableArmy;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_ArmyTier ArmyTier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EMETA_Partner, FMETA_PartnerInfo> PartnersInfo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, int32> Loot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 CurrentLootValueWasSoldToPawnShop;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, FMETA_PawnShopTrendDataRuntime> PawnShopTrends;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 LastDayWhenWarehouseAttackStarted;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 ChanceWarehouseAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSubclassOf<UMETA_MissionID> WarehouseAttackMissionID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, int32> LootForWarehouseAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 MoneyForWarehouseAttack;

    FMETA_StashManagerSaveData();
};
