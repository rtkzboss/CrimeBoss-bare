#pragma once
#include "CoreMinimal.h"
#include "META_PerkParameters.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_PerkParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NegotiationOption;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IntimidationOption;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AlwaysLoayalTrait;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CannotGetLoyalTrait;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StartWithDisloyalTrait;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiplierForRecruitmentCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMultiplierForRecruitmentCostInfluencesOnWeapons;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiplierForUpkeepCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AdditionalPercentageOfMissionCut;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ConvertsAmountFromDeathToRestingAfterFps;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChanceForSelfReturnEventAfterUsedConvertsFromDeathToResting;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChanceForSurvivalMissionEventAfterUsedConvertsFromDeathToResting;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiplierForChanceOfAmbush;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeatAfterMissionMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ExtraMoneyInPercentsAfterMission;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeisterAdditionallyCanBeUsedTimesInDay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealsExtraChunksPerDay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealingMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChanceIgnoreChuckOfInjureAfterFPS;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PriceCoefficientOfHealingAction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercentageExtraCashAfterSellingLootFromStashAndTrades;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinAmountOfNegativePerks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercentageOfBonusExtraLootFromMission;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercentageOfMissionPlaningCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAlwaysRecruitedWithEpicWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WeaponAndEquipmentQualities;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChanceToStartMissionWith1LessWantedStart;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AdditionalPercentangeTWAttacksCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AdditionalPercentangeTWDefensesCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AdditionalPercentangeWeaponCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AdditionalPercentageBossLevelUP;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinAmountOfPowerfulPerksAndNoNegative;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiplierCostUpgrade;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AdditionalAmountOfMissionToUpgrade;

    FMETA_PerkParameters();
};
