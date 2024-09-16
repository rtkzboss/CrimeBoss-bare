#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointFramework.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_WaypointEventSignature.h"
#include "IGS_WaypointBase.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class USceneComponent;

UCLASS(Abstract)
class BF_AI_API AIGS_WaypointBase : public AIGS_WaypointFramework {
    GENERATED_BODY()
public:
    AIGS_WaypointBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Visit(AIGS_GameCharacterFramework* inCharacter);

protected:
    UFUNCTION()
    void UpdateDebugSubsystemSettings();

public:
    UFUNCTION(BlueprintCallable)
    void OnMoveCommandFinished(AIGS_AIControllerGame* inOwningController, UIGS_AICommand* inCommand, bool inFailed);

    UFUNCTION(BlueprintCallable)
    void Leave(AIGS_GameCharacterFramework* inCharacter, bool inIsAbort);

    UFUNCTION(BlueprintCallable)
    bool IsValidForTeamSideMask(int32 inTeamsideMask);

    UFUNCTION(BlueprintCallable)
    bool IsValidForTeamSide(EIGS_TeamSideEnum inTeamSide);

    UFUNCTION(BlueprintPure)
    bool IsLocked() const;

    UFUNCTION(BlueprintPure)
    float GetStoppingDistance() const;

    UFUNCTION(BlueprintPure)
    FVector GetLookAtPosition() const;

    UFUNCTION(BlueprintPure)
    bool GetExactPosition() const;

    UFUNCTION(BlueprintPure)
    float GetApproachDistance() const;

    UFUNCTION(BlueprintCallable)
    bool CanVisit(AIGS_GameCharacterFramework* inCharacter);

    UFUNCTION(BlueprintCallable)
    void Arrive(AIGS_GameCharacterFramework* inCharacter);

    UFUNCTION(BlueprintCallable)
    void Approach(AIGS_GameCharacterFramework* inCharacter);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer EQSFilteringTags;

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsActive;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StoppingDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ApproachDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ExactPosition;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool FiltersByTeamSide;

    UPROPERTY()
    EIGS_TeamSideEnum ValidForEnemySide_DEPRECATED;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ValidTeamSides;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* Root;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_ScenarioDifficulty Difficulty;

    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool bDifficultyLocked;

    UPROPERTY(BlueprintAssignable)
    FIGS_WaypointEventSignature OnVisitedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_WaypointEventSignature OnApproachedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_WaypointEventSignature OnArrivedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_WaypointEventSignature OnLeftEvent;

};
