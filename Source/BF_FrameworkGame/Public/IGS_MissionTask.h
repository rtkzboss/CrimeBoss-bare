#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveState.h"
#include "EIGS_TaskObjectiveType.h"
#include "EIGS_TaskTimerType.h"
#include "IGS_CustomTaskInfo.h"
#include "IGS_KillTaskInfo.h"
#include "IGS_LootTaskInfo.h"
#include "IGS_OrTaskInfo.h"
#include "IGS_TimerTaskInfo.h"
#include "TaskChanged.h"
#include "IGS_MissionTask.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_MissionTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ID;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_TaskObjectiveType ObjectiveType;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ObjectiveState ObjectiveState;

    UPROPERTY()
    FText TaskName;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bOptionalTask;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bCrucialTask;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bWatchWhenInactive;

    UPROPERTY()
    bool bInitialized;

    UPROPERTY()
    EIGS_TaskTimerType TimerType;

    UPROPERTY()
    FTaskChanged OnTaskStateChanged;

    UPROPERTY()
    int32 CountToComplete;

    UPROPERTY()
    int32 CurrentCompletedCount;

    UPROPERTY()
    FIGS_CustomTaskInfo CustomTaskInfo;

    UPROPERTY()
    FIGS_LootTaskInfo LootTaskInfo;

    UPROPERTY()
    FIGS_KillTaskInfo KillTaskInfo;

    UPROPERTY()
    FIGS_OrTaskInfo OrTaskInfo;

    UPROPERTY()
    FIGS_TimerTaskInfo TimerTaskInfo;

    FIGS_MissionTask();
};
