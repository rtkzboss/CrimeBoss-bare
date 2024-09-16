#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnlockCategory.h"
#include "IGS_ChainContractID.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_UserDifficulty.h"
#include "META_BossLevelSaveData.h"
#include "META_GlobalStatisticsData.h"
#include "META_LastCitySetupConfigurationSaveData.h"
#include "IGS_AchievementSaveData.h"
#include "IGS_BonusGameData.h"
#include "IGS_ChallengesSaveData.h"
#include "IGS_CharacterMissionProgress.h"
#include "IGS_NewsInfoRelatedSaveData.h"
#include "IGS_PreviousSessionSaveData.h"
#include "IGS_ProgressionSaveData.h"
#include "IGS_QuickPlayPreferencesSaveData.h"
#include "IGS_SaveData_Base.h"
#include "IGS_SaveData_Version.h"
#include "IGS_UnlockedCharacterSaveData.h"
#include "META_ActiveCampaignConfiguration.h"
#include "Templates/SubclassOf.h"
#include "IGS_SaveData_Account.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_SaveData_Account : public FIGS_SaveData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FText AccountName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bDebug;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bReadEULA;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bReadSaveWarning;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bFirstCrimeTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bCheckedVeteranPlayer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bIsVeteranPlayer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bSeenProgressionReset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bWantedProgressionResetCompensation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FIGS_NewsInfoRelatedSaveData NewsInfoSaveData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FIGS_UnlockedCharacterSaveData> UnlockedCharactersAccWide;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSet<EIGS_CharacterID> HiredCharactersInLastCampaign;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EIGS_CharacterID, int32> UnlockedUniqueCharactersLevel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, FIGS_CharacterMissionProgress> CharacterPlotlineProgress;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float TimePlayed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FIGS_QuickPlayPreferencesSaveData QuickPlayPreferences;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, int32> MetaPersistentData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FGameplayTag> PendingUnlockRewards;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_BossLevelSaveData BossLevelData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_GlobalStatisticsData Statistic;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_LastCitySetupConfigurationSaveData CityMapData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTagContainer MetaPersistentAssetData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTagContainer MetaMenuActiveTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSubclassOf<UIGS_ChainContractID> CurrentChainMissionID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FIGS_AchievementSaveData> Achievements;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FIGS_PreviousSessionSaveData PreviousSession;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTagContainer CompletedTutorialTags;

    UPROPERTY(SaveGame)
    FString UserAnalyticsID;

    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString UserCountry;

    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString UserRegion;

    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString UserCity;

    UPROPERTY(SaveGame)
    FDateTime UserCountryTS;

    UPROPERTY(SaveGame)
    FIGS_SaveData_Version SaveDataVersion;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bUserShouldAdvertise;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_ActiveCampaignConfiguration ActiveCampaign;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EIGS_UnlockCategory, FGameplayTagContainer> UnlockedItemIDs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EIGS_UnlockCategory, FGameplayTagContainer> PendingUnlockedItemIDs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FIGS_ProgressionSaveData Progression;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FIGS_ChallengesSaveData Challenges;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EIGS_UserDifficulty, int32> CompletedCampaignCounts;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FIGS_BonusGameData BonusGameData;

    FIGS_SaveData_Account();
};
