#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveState.h"
#include "OnObjectiveStateChanged.h"
#include "IGS_MissionObjective.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_MissionObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ID;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<int32> TaskIDs;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ObjectiveState ObjectiveState;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText ObjectiveName;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bInitialized;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bArchived;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bSimpleObjective;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bSimpleObjectiveWatchWhenInactive;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bFinishWhenInactive;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FOnObjectiveStateChanged OutputDelegate;

    FIGS_MissionObjective();
};
