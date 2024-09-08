#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "EIGS_MetaDialogueSpeaker.h"
#include "IGS_MetaDialogueEventDelegate.h"
#include "IGS_MetaDialogueResultEventDelegate.h"
#include "IGS_MetaDialogueSpeakerVoiceLengthData.h"
#include "IGS_MetaDialogueTranscript.h"
#include "IGS_MetaDialogueVoiceEventDelegate.h"
#include "IGS_MetaDialogueSubsystem.generated.h"

class AIGS_AkActor;
class UAkAudioEvent;
class UAnimMontage;
class UIGS_MetaDialogueSubsystemDataAsset;
class UIGS_SubtitleManager;

UCLASS(BlueprintType)
class BF_VOICEOVER_API UIGS_MetaDialogueSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueEvent OnDatabaseLoadFinished;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueEvent OnMetaDialogueLevelPreloaded;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueResultEvent OnDialogueLineStarted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueResultEvent OnDialogueLineFinished;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueEvent OnDialogueStarted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueEvent OnDialogueFinished;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueVoiceEvent OnPlayVoiceExternally;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueEvent OnStopVoiceExternally;
    
protected:
    UPROPERTY()
    UIGS_MetaDialogueSubsystemDataAsset* Data;
    
    UPROPERTY(Instanced)
    UIGS_SubtitleManager* SubtitleManager;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_AkActor* AkActor;
    
    UPROPERTY()
    UAkAudioEvent* PlayMetaDialogueAkEvent;
    
public:
    UIGS_MetaDialogueSubsystem();

    UFUNCTION(BlueprintCallable)
    void TriggerNextLine();
    
    UFUNCTION(BlueprintCallable)
    void StopCurrentDialogue(bool inHideSubtitle);
    
    UFUNCTION(BlueprintCallable)
    void ShowSubtitleForCutscene();
    
    UFUNCTION(BlueprintCallable)
    void SetDelayForCurrentLine(float inDelaySeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockState(bool inState, const FString& inReason);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoplayLineEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void HideSubtitleForCutscene();
    
    UFUNCTION(BlueprintCallable)
    FIGS_MetaDialogueSpeakerVoiceLengthData GetDialogueLength(const TArray<FIGS_MetaDialogueTranscript>& inTranscript, const TMap<uint8, EIGS_MetaDialogueCharacter>& inCharacters);
    
    UFUNCTION(BlueprintCallable)
    FIGS_MetaDialogueSpeakerVoiceLengthData GetCurrentSpeakerVoiceLength();
    
    UFUNCTION(BlueprintPure)
    EIGS_MetaDialogueCharacterSlot GetCurrentSpeakerSlot() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_MetaDialogueSpeaker GetCurrentSpeaker() const;
    
    UFUNCTION(BlueprintCallable)
    FIGS_MetaDialogueSpeakerVoiceLengthData GetCurrentDialogueLength();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetCurrentCharacterFacialAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool GetBlockState(FString& OutReason);
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_EnableTTSMedia(bool inState);
    
};

