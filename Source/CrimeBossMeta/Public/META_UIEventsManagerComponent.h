#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_Gang.h"
#include "EMETA_IntelUnlockLevel.h"
#include "EMETA_Partner.h"
#include "IGS_JobCompletedInfo.h"
#include "IGS_UIEventsManagerBaseComponent.h"
#include "META_UIEventsManagerComponent.generated.h"

class UMETA_BaseFPSMission;
class UMETA_BaseMission;
class UMETA_Character;
class UMapTile;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_UIEventsManagerComponent : public UIGS_UIEventsManagerBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMETA_PlayerBrokeFriendshipAndBecameTopEnemyForAllGangs, UMapTile*, inAttackedTile, EMETA_Gang, inExFriendGang, int32, inDurationInTopEnemiesAttitudeList);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMETA_LoanIsAbleToBeActivatedDueToBankruption);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMETA_LoanHasBeenFullyRepaid);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMETA_GangHaveIsolatedTilesAndAutomaticallyCapturedThem, EMETA_Gang, inAttacker, const TArray<FGameplayTag>&, inIsolatedAndCapturedTiles);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMETA_AIGangDefendedAttackFromAnotherAIGang, EMETA_Gang, inDefenderGang, EMETA_Gang, inAttackerGang);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_UnpaidHeisterLeftCrew, UMETA_Character*, inHeister);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_UniqueHeisterLvlChanged, UMETA_Character*, inHeister);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_SurvivalMissionForMissingCrewSpawned, UMETA_BaseMission*, inMission, UMETA_Character*, inMissingHeister);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FIGS_OnUnlockFeatureEvent, FGameplayTag, inFeatureTag, bool, inChildTagsUnlockedToo, bool, inSilent, const FText&, inCutsceneID, bool, inVoiceoverOnly);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnSwitchToScreenEvent, FGameplayTag, inTag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnReadyRandEventChanged, EMETA_Partner, inPartner, FGameplayTag, inEventID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_OnPlayerRehabilitatedFromBankruptState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_OnPlayerReachedBankruptState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnMissionObjectiveForCompletionInNDaysFailed, UMETA_BaseFPSMission*, inMission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnJobForcedEvent, UMETA_BaseMission*, inMetaMissionID, bool, inCrewIsPredefined);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnHeisterDeserted, UMETA_Character*, inHeister, int32, inStolenAmountOfMoney);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnActiveRandEventChanged, EMETA_Partner, inPartner, FGameplayTag, inEventID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MissingHeisterReturnedToCrew, UMETA_Character*, inReturnedHeister);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MissingHeisterDead, UMETA_Character*, inDeadHeister);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_IntelLevelChanged, UMETA_BaseMission*, MissionID, int32, IntelValue, EMETA_IntelUnlockLevel, NewLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_GatherIntelCompleted, UMETA_BaseMission*, MissionID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_BossPointChanged, float, PreviousPoints, float, CurrentPoints);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FIGS_BossLevelChanged, int32, PreviousLevel, int32, CurrentLevel, float, PreviousPoints, float, CurrentPoints);
    
    UPROPERTY(BlueprintAssignable)
    FMETA_AIGangDefendedAttackFromAnotherAIGang OnAIGangDefendedAttackFromAnotherAIGang;
    
    UPROPERTY(BlueprintAssignable)
    FMETA_LoanIsAbleToBeActivatedDueToBankruption OnLoanIsAbleToBeActivatedDueToBankruption;
    
    UPROPERTY(BlueprintAssignable)
    FMETA_LoanHasBeenFullyRepaid OnLoanHasBeenFullyRepaid;
    
    UPROPERTY(BlueprintAssignable)
    FMETA_PlayerBrokeFriendshipAndBecameTopEnemyForAllGangs OnPlayerBrokeFriendshipAndBecameTopEnemyForAllGangs;
    
    UPROPERTY(BlueprintAssignable)
    FMETA_GangHaveIsolatedTilesAndAutomaticallyCapturedThem OnGangHaveIsolatedTilesAndAutomaticallyCapturedThem;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnHeisterDeserted OnHeisterDeserted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_UnpaidHeisterLeftCrew OnUnpaidHeisterLeftCrew;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_UniqueHeisterLvlChanged OnUniqueHeisterLvlChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnPlayerReachedBankruptState OnPlayerReachedBankruptState;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnPlayerRehabilitatedFromBankruptState OnPlayerRehabilitatedFromBankruptState;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnMissionObjectiveForCompletionInNDaysFailed OnMissionObjectiveForCompletionInNDaysFailed;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnSwitchToScreenEvent OnSwitchToScreenEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnUnlockFeatureEvent OnUnlockFeatureEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnJobForcedEvent OnJobForcedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnReadyRandEventChanged OnReadyRandEventChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnActiveRandEventChanged OnActiveRandEventChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_SurvivalMissionForMissingCrewSpawned OnSurvivalMissionForMissingCrewSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MissingHeisterReturnedToCrew OnMissingHeisterReturnedToCrew;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MissingHeisterDead OnMissingHeisterDead;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_JobCompletedInfo PendingCompletedJob;
    
    UPROPERTY(BlueprintReadOnly)
    bool PendingCareerCompleted;
    
    UPROPERTY(BlueprintReadOnly)
    EMETA_CareerCompletionReason PendingCareerCompletedReason;
    
    UPROPERTY(BlueprintReadOnly)
    EMETA_Gang PendingCareerCompletedGang;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_IntelLevelChanged OnIntelLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_GatherIntelCompleted OnGatherIntelCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_BossLevelChanged OnBossLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_BossPointChanged OnBossPointChanged;
    
    UMETA_UIEventsManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsCompletedJobPending();
    
    UFUNCTION(BlueprintCallable)
    FIGS_JobCompletedInfo GetAndClearPendingCompletedJob(bool& outResult);
    
};

