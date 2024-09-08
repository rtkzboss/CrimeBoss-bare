#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_EconomySaveStatistic.generated.h"

class UMETA_Weapon;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_EconomySaveStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BankruptcyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SuccessfullyFinishedTrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<UMETA_Weapon*, int32> WeaponsBought;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpentMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EarnedMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> EarnedLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> SoldLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LostMoneyAfterWarehouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> LostLootAfterWarehouse;
    
    FMETA_EconomySaveStatistic();
};

