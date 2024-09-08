#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_CleanExecutionState.h"
#include "EIGS_ObjectiveComponentType.h"
#include "EIGS_ObjectiveState.h"
#include "EIGS_TaskTimerType.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnregisterReason.h"
#include "IGS_MissionObjective.h"
#include "IGS_MissionTask.h"
#include "IGS_OnCleanExecutionStateChangedDelegate.h"
#include "IGS_OnCustomObjectiveEnabledDelegate.h"
#include "IGS_OnCustomObjectiveValuesChangedDelegate.h"
#include "ObjectiveAddedDelegate.h"
#include "OnActiveObjectiveChangedEventDelegate.h"
#include "OnObjectiveStateChangedDelegate.h"
#include "OnOrTaskStateChangedDelegate.h"
#include "TaskChangedDelegate.h"
#include "IGS_ObjectiveManager.generated.h"

class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UIGS_ObjectiveComponent;
class UIGS_ObjectiveManager;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ObjectiveManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_Tasks)
    TArray<FIGS_MissionTask> Tasks;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_Objectives)
    TArray<FIGS_MissionObjective> Objectives;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_ActiveObjective)
    FIGS_MissionObjective ActiveObjective;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ShowCustomObjective)
    bool bShowCustomObjective;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CustomObjectiveProgressBar)
    bool bShowCustomObjectiveProgressBar;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CustomObjectiveValues)
    FText CustomObjectiveText;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CustomObjectiveValues)
    int32 CurrentCustomObjectiveValue;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CustomObjectiveValues)
    int32 GoalCustomObjectiveValue;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CleanExecutionState)
    EIGS_CleanExecutionState CleanExecutionState;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCustomObjectiveEnabled OnCustomObjectiveStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCustomObjectiveValuesChanged OnCustomObjectiveValuesChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCleanExecutionStateChanged OnCleanExecutionStateChanged;
    
    UPROPERTY()
    FObjectiveAdded OnActiveObjectiveChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnActiveObjectiveChangedEvent OnActiveObjectiveChangedEventBP;
    
    UPROPERTY()
    FObjectiveAdded OnObjectiveAddedEvent;
    
    UPROPERTY()
    FObjectiveAdded OnObjectiveStateChangedEvent;
    
    UPROPERTY()
    FTaskChanged OnTaskStateChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ObjectiveFinishedAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ObjectiveAddedAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated)
    TArray<UIGS_ObjectiveComponent*> ObjectiveComponents;
    
    UIGS_ObjectiveManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void UnpauseTimerForTask(UObject* inWCO, FIGS_MissionTask inTask);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ShowCustomObjective(UObject* inWCO, bool inShow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetTaskState(UObject* inWCO, EIGS_ObjectiveState inState, FIGS_MissionTask inMissionTask);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetTaskCountToComplete(UObject* inWCO, int32 inCountToComplete, FIGS_MissionTask inMissionTask);
    
    UFUNCTION()
    void SetObjectiveState(int32 inID, EIGS_ObjectiveState inState);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectiveComponentState(UIGS_ObjectiveComponent* InComponent, EIGS_ObjectiveState inState, bool inForceMissionTaskStateChange);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetCustomObjectiveText(UObject* inWCO, FText InText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetCustomObjectiveShowProgressBar(UObject* inWCO, bool inShow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetCustomObjectiveGoalValue(UObject* inWCO, int32 InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetCustomObjectiveCurrentValue(UObject* inWCO, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCleanExecutionState(EIGS_CleanExecutionState inState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void PauseTimerForTask(UObject* inWCO, FIGS_MissionTask inTask);
    
    UFUNCTION()
    void OnTimerPassed(int32 inID);
    
    UFUNCTION()
    void OnTaskValuesUpdated(int32 inID, EIGS_ObjectiveState inState) const;
    
    UFUNCTION()
    void OnTaskStateUpdated(int32 inID, EIGS_ObjectiveState inState);
    
    UFUNCTION()
    void OnRep_Tasks(TArray<FIGS_MissionTask> inOldTasks);
    
    UFUNCTION()
    void OnRep_ShowCustomObjective();
    
    UFUNCTION()
    void OnRep_Objectives(TArray<FIGS_MissionObjective> inOldObjectives);
    
    UFUNCTION()
    void OnRep_CustomObjectiveValues();
    
    UFUNCTION()
    void OnRep_CustomObjectiveProgressBar();
    
    UFUNCTION()
    void OnRep_CleanExecutionState(EIGS_CleanExecutionState inOldState);
    
    UFUNCTION()
    void OnRep_ActiveObjective(FIGS_MissionObjective inOldObjective);
    
    UFUNCTION()
    void OnOrTaskStateChanged(int32 inID, EIGS_ObjectiveState inState, int32 inOrTaskID, bool isA);
    
    UFUNCTION()
    void OnObjectiveStateChanged(int32 inID, EIGS_ObjectiveState inState);
    
    UFUNCTION()
    void OnObjectiveComponentStateChanged(EIGS_ObjectiveState inState, bool inForceMissionTaskStateChange, UIGS_ObjectiveComponent* inComp);
    
    UFUNCTION()
    void OnCustomTaskStateChanged(EIGS_ObjectiveState inState, int32 inTaskID);
    
    UFUNCTION()
    void OnCharacterDied(AIGS_GameCharacterFramework* inCharacter, EIGS_UnregisterReason inReason);
    
    UFUNCTION()
    void OnActiveObjectiveChanged(int32 inID) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_MissionTask GetTaskCopyByID(UObject* inWCO, int32 inID, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_ObjectiveManager* GetObjectiveManager(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_MissionObjective GetObjectiveCopyByID(UObject* inWCO, int32 inID, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_ObjectiveState GetObjectiveComponentState(UIGS_ObjectiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    UIGS_ObjectiveComponent* GetObjectiveComponent(EIGS_ObjectiveComponentType inType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_MissionObjective GetActiveObjective(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateTimerTask(UObject* inWCO, float inDuration, FText inTaskName, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateTaskForSpecificObjectiveComponent(UObject* inWCO, UIGS_ObjectiveComponent* InComponent, FText inTaskName, bool bWatchWhenInactive, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateTaskForObjectiveTypeWithCount(UObject* inWCO, EIGS_ObjectiveComponentType inType, FText inTaskName, bool bIncludeAll, bool bWatchWhenInactive, int32 inCountToFinish, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateTaskForObjectiveType(UObject* inWCO, EIGS_ObjectiveComponentType inType, FText inTaskName, bool bIncludeAll, bool bWatchWhenInactive, int32 inCountToFinish, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateSimpleObjective(UObject* inWCO, FText inObjectiveName, EIGS_ObjectiveComponentType inType, bool bWatchWhenInactive, bool bFinishWhenInactive, int32 inCountToComplete, FOnObjectiveStateChanged inDelegateHandle, FIGS_MissionObjective& outObjectiveStruct, FIGS_MissionTask& outTaskStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inTimerDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateSimpleLootObjective(UObject* inWCO, FText inObjectiveName, int32 inValueToLoot, FOnObjectiveStateChanged inDelegateHandle, FIGS_MissionObjective& outObjectiveStruct, FIGS_MissionTask& outTaskStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inTimerDuration, bool bPocketLoot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateOrTask(UObject* inWCO, FIGS_MissionTask inTaskA, FIGS_MissionTask inTaskB, FOnOrTaskStateChanged inDelegateHandle, FIGS_MissionTask& outTaskStruct);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateObjective(UObject* inWCO, FText inObjectiveName, TArray<FIGS_MissionTask> inMissionTasks, FOnObjectiveStateChanged inDelegateHandle, FIGS_MissionObjective& outObjectiveStruct, bool inSimpleObjective, bool inSimpleObjectiveWatchWhenInactive, bool inSimpleObjectFinishWhenInactive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateLootTask(UObject* inWCO, FText inTaskName, float inGoalWeight, bool bCrucialTask, bool bOptionalTask, bool bPocketTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, EIGS_TaskTimerType inTaskTimerType, float inDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateKillTask(UObject* inWCO, EIGS_TeamSideEnum inTeamSide, FText inTaskName, int32 inKillCount, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, bool inWatchWhenInactive, EIGS_TaskTimerType inTaskTimerType, float inTimerDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddTaskToObjective(UObject* inWCO, FIGS_MissionTask inTaskStruct, FIGS_MissionObjective inObjective);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddObjective(UObject* inWCO, FIGS_MissionObjective inObjectiveID);
    
};

