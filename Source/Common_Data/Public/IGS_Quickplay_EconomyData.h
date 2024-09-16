#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_ChainDifficulty.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_UnlockCategory.h"
#include "IGS_ChainContractID.h"
#include "IGS_EconomyData_Base.h"
#include "IGS_UnlockItemCost.h"
#include "IGS_WeaponChainReward.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quickplay_EconomyData.generated.h"

UCLASS()
class COMMON_DATA_API UIGS_Quickplay_EconomyData : public UIGS_EconomyData_Base {
    GENERATED_BODY()
public:
    UIGS_Quickplay_EconomyData();

    UFUNCTION(BlueprintPure)
    int32 GetStartingCash() const;

    UFUNCTION(BlueprintPure)
    float GetRewardMultiplierForChainContract(TSubclassOf<UIGS_ChainContractID> inChainContractID) const;

    UFUNCTION(BlueprintPure)
    int32 GetCharacterLevelPerQuality(EMETA_ItemQuality inQuality);

    UFUNCTION(BlueprintPure)
    int32 CalculateItemCostFromCategoryAndQuality(const EIGS_UnlockCategory inItemCategory, const EMETA_ItemQuality inItemQuality, const float inRelativePrice) const;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StartingCash;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ProgressResetCompensationMoney;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EIGS_ChainDifficulty, float> ChainRewardMultipliersForDifficulties;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UIGS_ChainContractID>, float> ChainRewardMultipliersForContracts;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EIGS_ChainDifficulty, FIGS_WeaponChainReward> ChainWeaponsForDifficulties;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CompleteChainMoneyRewardMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BaseItemCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DigitsWithoutRounding;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EIGS_UnlockCategory, FIGS_UnlockItemCost> CategoryCosts;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMETA_ItemQuality, int32> HeisterLevelPerQuality;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMETA_ItemQuality, int32> CharacterStartingPerksPerQuality;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, int32> CharacterStartingPerksOverride;

};
