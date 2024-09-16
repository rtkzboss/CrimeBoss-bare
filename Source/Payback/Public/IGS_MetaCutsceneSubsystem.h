#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "EIGS_MetaCutsceneCharacterPose.h"
#include "EIGS_MetaCutsceneNodeAction.h"
#include "IGS_CutsceneTagValue.h"
#include "EIGS_CutsceneState.h"
#include "IGS_MetaCutsceneCharacterPoseData.h"
#include "IGS_MetaCutsceneCharacters.h"
#include "IGS_MetaCutsceneDataRow.h"
#include "IGS_MetaCutsceneDelegate.h"
#include "IGS_MetaCutsceneNodeFinishedDelegate.h"
#include "IGS_MetaCutsceneNodeStartedDelegate.h"
#include "IGS_MetaCutsceneOptionSelectedDelegate.h"
#include "IGS_MetaCutsceneOptionsDelegate.h"
#include "IGS_MetaCutscenePoseSet.h"
#include "IGS_MetaCutsceneResultDelegate.h"
#include "IGS_MetaCutsceneSkipDelegate.h"
#include "IGS_MetaCutsceneSubsystem.generated.h"

class AActor;
class AIGS_CharacterPaperDoll;
class UIGS_CutsceneSubsystemDataAsset;
class UIGS_MetaCutsceneDataAsset;
class ULevelStreamingDynamic;
class UObject;

UCLASS(BlueprintType)
class PAYBACK_API UIGS_MetaCutsceneSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_MetaCutsceneSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartCutscene();

    UFUNCTION(BlueprintCallable)
    void SkipCutsceneDialogueLine();

    UFUNCTION(BlueprintCallable)
    void SkipCutsceneDialogue();

    UFUNCTION(BlueprintCallable)
    void ShowOptions(float inTimeToSelect);

    UFUNCTION(BlueprintCallable)
    void SetTagsValues(TMap<FGameplayTag, FIGS_CutsceneTagValue> inTagsValues);

    UFUNCTION(BlueprintCallable)
    void SetSkipDialogueLineEnabled(bool inState);

    UFUNCTION(BlueprintCallable)
    void SetForceChoiceResult(EIGS_MetaCutsceneNodeAction inResult);

    UFUNCTION(BlueprintCallable)
    void SetFinishDelay(float inFinishDelay);

    UFUNCTION(BlueprintCallable)
    void SetEndDelay(float inEndDelay);

    UFUNCTION(BlueprintCallable)
    void SetDebugEnabled(bool inState);

    UFUNCTION(BlueprintCallable)
    void SetDebugContinueEnabled(bool inState);

    UFUNCTION(BlueprintCallable)
    void SetAutoFinishEnabled(bool inState);

    UFUNCTION(BlueprintCallable)
    void SelectOption(int32 inOption);

    UFUNCTION(BlueprintCallable)
    void PlayCurrentNodeOptionEndDialogue(int32 inOption);

    UFUNCTION(BlueprintCallable)
    void PlayCurrentNodeDialogue();

protected:
    UFUNCTION()
    void OnSetupLevelUnloaded();

    UFUNCTION()
    void OnSetupLevelLoaded();

    UFUNCTION()
    void OnOriginalSublevelHidden();

    UFUNCTION()
    void OnEnvironmentLevelUnloaded();

    UFUNCTION()
    void OnEnvironmentLevelLoaded();

    UFUNCTION()
    void OnDialogueStarted();

    UFUNCTION()
    void OnDialogueLevelPreloaded();

    UFUNCTION()
    void OnDialogueFinished();

    UFUNCTION()
    void OnDialogueDatabasesLoaded();

    UFUNCTION()
    void OnAdditionalPropsLoaded();

    UFUNCTION()
    void OnAdditionalLevelUnloaded();

    UFUNCTION()
    void OnAdditionalLevelLoaded();

public:
    UFUNCTION(BlueprintCallable)
    void LoadCutscene(FName inCutsceneID, FText inDebugText, FIGS_MetaCutsceneCharacters inCharacters);

    UFUNCTION(BlueprintPure)
    bool IsSkipCutsceneDialogueActivated() const;

    UFUNCTION(BlueprintPure)
    bool IsDatabaseLoaded() const;

    UFUNCTION(BlueprintPure)
    bool IsCutscenePreloaded() const;

    UFUNCTION(BlueprintCallable)
    bool HasCurrentNodeOptions();

    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, FIGS_CutsceneTagValue> GetTagsValues() const;

    UFUNCTION(BlueprintCallable)
    TArray<TSoftClassPtr<AIGS_CharacterPaperDoll>> GetSlotCharactersPaperDoll();

    UFUNCTION(BlueprintCallable)
    FName GetEndSequenceName(int32 inOption);

    UFUNCTION(BlueprintCallable)
    EIGS_MetaDialogueCharacter GetDialogueSlotCharacter(EIGS_MetaDialogueCharacterSlot inDialogueSlot);

    UFUNCTION(BlueprintCallable)
    EIGS_MetaDialogueCharacterSlot GetDialogueSlot(EIGS_MetaDialogueCharacterSlot inCutsceneSlot);

    UFUNCTION(BlueprintPure)
    UIGS_CutsceneSubsystemDataAsset* GetCutsceneSubsystemDataAsset() const;

    UFUNCTION(BlueprintPure)
    EIGS_CutsceneState GetCutsceneState() const;

    UFUNCTION(BlueprintCallable)
    EIGS_MetaDialogueCharacter GetCutsceneSlotCharacter(EIGS_MetaDialogueCharacterSlot inCutsceneSlot);

    UFUNCTION(BlueprintCallable)
    EIGS_MetaDialogueCharacterSlot GetCutsceneSlot(EIGS_MetaDialogueCharacterSlot inDialogueSlot);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TSoftObjectPtr<UIGS_MetaCutsceneDataAsset> GetCutsceneDataAsset(UObject* inWCO, FText inCutsceneID);

    UFUNCTION(BlueprintPure)
    float GetCurrentNodeSkipTime() const;

    UFUNCTION(BlueprintPure)
    UIGS_MetaCutsceneDataAsset* GetCurrentCutsceneDataAsset() const;

    UFUNCTION(BlueprintCallable)
    FIGS_MetaCutsceneCharacterPoseData GetCharacterSlotPose(EIGS_MetaDialogueCharacterSlot inSlot, FGameplayTagContainer inPoseSets);

    UFUNCTION(BlueprintCallable)
    FIGS_MetaCutsceneCharacterPoseData GetCharacterPose(EIGS_MetaDialogueCharacter inCharacter, FGameplayTag inCharacterPoseSet, EIGS_MetaCutsceneCharacterPose InPose);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TArray<FIGS_MetaCutsceneDataRow> GetAllCutscenesData(UObject* inWCO);

    UFUNCTION(BlueprintCallable)
    FIGS_MetaCutscenePoseSet GetAllCharacterSlotPoses(EIGS_MetaDialogueCharacterSlot inSlot, FGameplayTagContainer inPoseSets);

    UFUNCTION(BlueprintCallable)
    FIGS_MetaCutscenePoseSet GetAllCharacterPoses(EIGS_MetaDialogueCharacter inCharacter, FGameplayTag inCharacterPoseSet);

    UFUNCTION(BlueprintCallable)
    void FinishCutscene();

    UFUNCTION(BlueprintCallable)
    void AllowPoseSet(FGameplayTag inPoseSet);

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneDelegate OnCutsceneDatabaseLoaded;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneDelegate OnCutsceneLoadStarted;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneDelegate OnCutsceneLoadFinished;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneDelegate OnCutsceneUnloadFinished;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneResultDelegate OnCutsceneStarted;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneResultDelegate OnCutsceneStartedAfterDelay;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneDelegate OnCutsceneFinishedBeforeDelay;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneResultDelegate OnCutsceneFinished;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneNodeStartedDelegate OnCutsceneNodeStarted;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneNodeFinishedDelegate OnCutsceneNodeFinished;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneNodeStartedDelegate OnCutsceneNodeEndDialogue;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneOptionsDelegate OnShowOptions;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneOptionSelectedDelegate OnOptionSelected;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneSkipDelegate OnSkipStateChanged;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneNodeStartedDelegate OnSkipSequence;

protected:
    UPROPERTY()
    UIGS_CutsceneSubsystemDataAsset* Data;

    UPROPERTY()
    UIGS_MetaCutsceneDataAsset* CutsceneData;

    UPROPERTY()
    TArray<ULevelStreamingDynamic*> AdditionalLevels;

    UPROPERTY()
    TArray<AActor*> AdditionalProps;

    UPROPERTY()
    ULevelStreamingDynamic* EnviromentLevel;

    UPROPERTY()
    ULevelStreamingDynamic* SetupLevel;

};
