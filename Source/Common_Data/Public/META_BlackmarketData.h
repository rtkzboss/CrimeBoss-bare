#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMETA_RespectLvl.h"
#include "META_BlackmarketDistribution.h"
#include "META_BlackmarketPriorityModifiers.h"
#include "META_BlackmarketData.generated.h"

UCLASS(BlueprintType)
class COMMON_DATA_API UMETA_BlackmarketData : public UDataAsset {
    GENERATED_BODY()
public:
    UMETA_BlackmarketData();

private:
    UFUNCTION()
    TArray<FString> GetItemGroupOptions() const;

protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_BlackmarketDistribution> ShopDistribution;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMETA_BlackmarketPriorityModifiers Priorities;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PriorityTolerance;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BasePriority;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool KeepItemsInShopAfterPurchase;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WeaponPriceIncreaseForSubsequentPurchases;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EquipmentPriceIncreaseForSubsequentPurchases;

    UPROPERTY(EditDefaultsOnly)
    float WeaponRefreshStartPrice;

    UPROPERTY(EditDefaultsOnly)
    float WeaponRefreshMultiplier;

};
