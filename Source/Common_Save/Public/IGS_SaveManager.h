#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_AccountSaveDataRequestedDelegate.h"
#include "IGS_CareerDeletedDelegate.h"
#include "IGS_CareerSaveDataRequestedDelegate.h"
#include "IGS_CareerSlotInfo.h"
#include "IGS_QuickplaySaveDataRequestedDelegate.h"
#include "IGS_WeaponCheatSelection_DebugData.h"
#include "META_SaveData_DebugCareer.h"
#include "IGS_SaveManager.generated.h"

class UIGS_DebugWeaponCheatSelection;
class UIGS_PaybackSaveGameAccount;
class UIGS_PaybackSaveGameCareer;
class UIGS_PaybackSaveGameQuickplay;
class UMETA_DebugCareerSaveGame;
class UObject;

UCLASS(BlueprintType, Config=Game)
class COMMON_SAVE_API UIGS_SaveManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_SaveManager();

    UFUNCTION(BlueprintPure)
    bool ShouldUnlockVeteranRewards() const;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetPlotlinesDisableDebugData(const UObject* inWCO, bool bDisable);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetDebugMode(const UObject* inWCO, bool inDebugState);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetCareerDebugData(const UObject* inWCO, FMETA_SaveData_DebugCareer inData);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SaveWeaponCheatSelection(const UObject* inWCO, const FIGS_WeaponCheatSelection_DebugData& inWeaponSelection);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SaveQuickplay(const UObject* inWCO);

    UFUNCTION(BlueprintCallable)
    void SavePlayerWantedProgressionResetCompensation();

    UFUNCTION(BlueprintCallable)
    void SavePlayerVisitedCrimeTime();

    UFUNCTION(BlueprintCallable)
    void SavePlayerSeenProgressionReset();

    UFUNCTION(BlueprintCallable)
    void SavePlayerReadSaveWarning();

    UFUNCTION(BlueprintCallable)
    void SavePlayerReadEULA();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SaveCareer(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SaveAll(const UObject* inWCO, const FString& inCareerSlotName, bool inIsDebugSaveFile);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SaveAccount(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_DebugWeaponCheatSelection* LoadWeaponCheatSelection(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PaybackSaveGameQuickplay* LoadQuickplay(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PaybackSaveGameCareer* LoadCareer(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PaybackSaveGameAccount* LoadAccount(const UObject* inWCO);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static bool IsCareerDebugDataFilled(const UObject* inWCO);

    UFUNCTION(BlueprintPure)
    bool HasQuickplaySaveValidData();

    UFUNCTION(BlueprintPure)
    bool HasNormalCareerSaveValidData();

    UFUNCTION(BlueprintPure)
    bool HasDebugCareerSaveValidData();

    UFUNCTION(BlueprintPure)
    bool HasCareerSaveValidData();

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static bool GetDebugMode(const UObject* inWCO);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static FString GetCareerSlotName(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FMETA_SaveData_DebugCareer GetCareerDebugData(const UObject* inWCO);

    UFUNCTION(BlueprintPure)
    TArray<FIGS_CareerSlotInfo> GetAllCareerSaveFiles() const;

    UFUNCTION(BlueprintPure)
    bool DoesQuickplaySaveExist();

    UFUNCTION(BlueprintPure)
    bool DoesNormalCareerSaveExist();

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static bool DoesDebugWeaponCheatSelectionSaveExist(const UObject* inWCO);

    UFUNCTION(BlueprintPure)
    bool DoesDebugCareerSaveExist();

    UFUNCTION(BlueprintPure)
    bool DoesCareerSaveExist();

    UFUNCTION(BlueprintCallable)
    bool DidPlayerWantedProgressionResetCompensation();

    UFUNCTION(BlueprintCallable)
    bool DidPlayerVisitCrimeTime();

    UFUNCTION(BlueprintCallable)
    bool DidPlayerSeenProgressionReset();

    UFUNCTION(BlueprintCallable)
    bool DidPlayerReadSaveWarning();

    UFUNCTION(BlueprintCallable)
    bool DidPlayerReadEULA();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void DeleteCareer(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PaybackSaveGameCareer* CreateCareer(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool CheckPlayerWasPlayingGame(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddPlotlineTagToDebugData(const UObject* inWCO, FGameplayTag inPlotlineTag, bool& bSuccess);

    UPROPERTY(BlueprintAssignable)
    FIGS_AccountSaveDataRequestedDelegate OnAccountSaveDataRequested;

    UPROPERTY(BlueprintAssignable)
    FIGS_QuickplaySaveDataRequestedDelegate OnQuickplaySaveDataRequested;

    UPROPERTY(BlueprintAssignable)
    FIGS_CareerSaveDataRequestedDelegate OnCareerSaveDataRequested;

    UPROPERTY(BlueprintAssignable)
    FIGS_CareerDeletedDelegate OnCareerDeleted;

protected:
    UPROPERTY(Config)
    FString CareerSlotName;

    UPROPERTY(Transient)
    UIGS_PaybackSaveGameAccount* CachedAccountSave;

    UPROPERTY(Transient)
    UIGS_PaybackSaveGameQuickplay* CachedQuickplaySave;

    UPROPERTY(Transient)
    UIGS_PaybackSaveGameCareer* CachedCareerSave;

    UPROPERTY(Transient)
    UMETA_DebugCareerSaveGame* CachedCareerDebugSave;

    UPROPERTY(Transient)
    UIGS_DebugWeaponCheatSelection* WeaponCheatSelectionDebugSave;

};
