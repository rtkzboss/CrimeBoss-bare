#pragma once
#include "CoreMinimal.h"
#include "IGS_LoadingInProgressInterface.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_DialogueSpeaker.h"
#include "EIGS_DialogueBlacklistOption.h"
#include "IGS_DialogueCharacterEvent.h"
#include "IGS_DialogueEvent.h"
#include "IGS_DialogueNodeKey.h"
#include "IGS_HudDebugEvent.h"
#include "IGS_DialogueSubsystem.generated.h"

class AActor;
class IIGS_DialogueAsyncActionInterface;
class UIGS_DialogueAsyncActionInterface;

UCLASS(BlueprintType)
class BF_VOICEOVER_API UIGS_DialogueSubsystem : public UWorldSubsystem, public IIGS_LoadingInProgressInterface {
    GENERATED_BODY()
public:
    UIGS_DialogueSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StopVoiceOnSpeaker(EIGS_DialogueSpeaker inSpeaker) const;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StopVoiceOnCharacter(AActor* inInstigator) const;

    UFUNCTION(BlueprintCallable)
    void StopAllDialogues();

    UFUNCTION(BlueprintCallable)
    void SetSubsystemEnabled(bool inState);

    UFUNCTION(BlueprintCallable)
    void SetReminderDialogues(TArray<FText> inStealthDialogues, TArray<FText> inCombatDialogues);

    UFUNCTION(BlueprintCallable)
    void SetHeisterReminderTime(float InSeconds);

    UFUNCTION(BlueprintCallable)
    void SetBlacklistOption(EIGS_DialogueBlacklistOption inOption);

    UFUNCTION(BlueprintCallable)
    void SetBlacklistEnabled(bool inState);

    UFUNCTION(BlueprintCallable)
    void ResetSubsystem();

    UFUNCTION(BlueprintCallable)
    void PlayScriptedDialogue(FText inDialogueID, const TArray<AActor*>& inCharacters);

    UFUNCTION(BlueprintCallable)
    void PlayHeisterDialogue(FText inDialogueID);

    UFUNCTION(BlueprintCallable)
    void PlayFinalDialogue(FText inDialogueID, AActor* inCharacter);

    UFUNCTION(BlueprintCallable)
    void PlayDialogueOnCharacter(FText inDialogueID, AActor* inCharacter);

protected:
    UFUNCTION()
    void OnGameLoadingFinished();

public:
    UPROPERTY(BlueprintAssignable)
    FIGS_DialogueCharacterEvent OnCharacterReminderEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_DialogueEvent OnDialogueFinishedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_HudDebugEvent OnNewHudDebugLogEvent;

protected:
    UPROPERTY()
    TMap<FIGS_DialogueNodeKey, TScriptInterface<IIGS_DialogueAsyncActionInterface>> RegisteredDialogueNodesMap;


    // Fix for true pure virtual functions not being implemented
};
