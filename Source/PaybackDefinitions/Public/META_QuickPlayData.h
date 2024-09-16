#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_ChainDifficulty.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_Heat.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_LobbyVisibilityType.h"
#include "EMETA_RespectLvl.h"
#include "IGS_BadgesPerHeat.h"
#include "IGS_MenuCommonData_Base.h"
#include "IGS_ScenarioModifier.h"
#include "IGS_UserDifficulty.h"
#include "META_Interval.h"
#include "META_QuickPlayData.generated.h"

UCLASS()
class PAYBACKDEFINITIONS_API UMETA_QuickPlayData : public UIGS_MenuCommonData_Base {
    GENERATED_BODY()
public:
    UMETA_QuickPlayData();

    UFUNCTION(BlueprintCallable)
    void GetSpecialTierChance(const EIGS_UserDifficulty inUserDifficulty, const int32 inStormIntensity, bool& outHasOverride, float& outRatio);

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EIGS_UserDifficulty, FIGS_UserDifficulty> UserDifficulties;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EIGS_UserDifficulty, float> DifficultyBonusPercentage;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMETA_Heat, FIGS_BadgesPerHeat> BadgesPerHeat;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EIGS_ScenarioDifficulty, int32> BadgesDifficultyModifier;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FIGS_ScenarioModifier> BadgesScenarioModifier;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMETA_LobbyVisibilityType, float> LobbyTypeBonusPercentage;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float QuickjoinBonusPercentage;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LobbyLonelyWaitingTime;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LobbyNewClientJoinedWaitingTime;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LobbyFinalWaitingTime;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<float> HireCostPercentage;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BlackMarketRefreshTimeInMinutes;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMETA_ItemQuality, int32> HeisterLevelPerQuality;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BlackMarketHeisterRefreshBaseCost;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BlackMarketHeisterRefreshCoefficient;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BlackmarketHeisterRefreshCooldownTime;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BlackMarketWeaponRefreshBaseCost;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BlackMarketWeaponRefreshCoefficient;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BlackmarketWeaponRefreshCooldownTime;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMETA_ItemQuality, float> WeaponPriceMultiplier;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMETA_ItemQuality, float> EquipmentPriceMultiplier;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuybackWeaponPriceMultiplier;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BuybackWeaponDaysInShop;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMETA_RespectLvl, int32> RespectLevelsByPoints;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MoneyToPointsMultiplier;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OneStarsPointsGainPercentage;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TwoStarsPointsGainPercentage;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThreeStarsPointsGainPercentage;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SubstractPointsPercentageWhenMissionFailed;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SubstractPointsPercentageWhenMissionFailedPerDeadHeister;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SubstractPointsPercentageWhenMissionFailedPerDeadCivilian;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PlayerInactiveDaysRespectPenalty;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SubstractPointsPercentageWhenPlayerInactive;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMETA_Interval OpportunityCount;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float QuickplayScoreMultiplier;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ScoreFor1Star;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ScoreFor2Stars;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ScoreFor3Stars;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ChainMinusScorePerKilledCivilian;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ChainMinusScorePerReviveUsed;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ChainMinusScorePerKilledHeister;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EIGS_ChainDifficulty, int32> EnemyTiersPerShuffleDifficulty;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EIGS_ChainDifficulty, int32> BadgesPerShuffleDifficulty;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, EditFixedSize)
    TArray<FGameplayTag> TutorialCharacters;

};
