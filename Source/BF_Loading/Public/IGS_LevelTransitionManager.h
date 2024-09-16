#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EIGS_LevelTransitionType.h"
#include "IGS_LevelTransitionSignature.h"
#include "IGS_LevelTransitionStateChangedSignature.h"
#include "IGS_LevelTransitionManager.generated.h"

class UIGS_LevelTransitionDataAsset;

UCLASS(BlueprintType)
class BF_LOADING_API UIGS_LevelTransitionManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_LevelTransitionManager();

    UFUNCTION(BlueprintCallable)
    void StopAttemptLoadingLevel();

    UFUNCTION(BlueprintCallable)
    void SetLevelLoadTransitionState(EIGS_LevelTransitionType inState);

    UFUNCTION(BlueprintPure)
    EIGS_LevelTransitionType GetLevelTransitionState() const;

    UFUNCTION(BlueprintPure)
    bool GetLevelLoadState() const;

    UFUNCTION(BlueprintPure)
    float GetDelayTime() const;

    UFUNCTION(BlueprintCallable)
    bool ClientTravel(FName inLevelName);

    UFUNCTION(BlueprintCallable)
    bool AttemptServerTravel(FName inLevelName, const FString& inOptions);

    UFUNCTION(BlueprintCallable)
    bool AttemptOpenLevel(FName inLevelName, bool inAbsolute, const FString& inOptions);

    UPROPERTY(BlueprintAssignable)
    FIGS_LevelTransitionSignature OnLevelLoadAttemptSuccess;

    UPROPERTY(BlueprintAssignable)
    FIGS_LevelTransitionSignature OnLevelLoadAttemptFailure;

    UPROPERTY(BlueprintAssignable)
    FIGS_LevelTransitionSignature OnLevelLoadInterrupted;

    UPROPERTY(BlueprintAssignable)
    FIGS_LevelTransitionSignature OnLevelLoadStarted;

    UPROPERTY(BlueprintAssignable)
    FIGS_LevelTransitionSignature OnLevelLoadFinished;

    UPROPERTY(BlueprintAssignable)
    FIGS_LevelTransitionStateChangedSignature OnLevelTransitionStateChangeStarted;

    UPROPERTY(BlueprintAssignable)
    FIGS_LevelTransitionStateChangedSignature OnLevelTransitionStateChanged;

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_LevelTransitionType CurrentState;

    UPROPERTY()
    UIGS_LevelTransitionDataAsset* Data;

};
