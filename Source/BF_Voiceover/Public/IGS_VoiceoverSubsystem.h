#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_DialogueSpeaker.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_DialogueLineEventDelegate.h"
#include "IGS_DialogueSwapPlayerEventDelegate.h"
#include "IGS_VoiceoverControllerKey.h"
#include "IGS_VoiceoverSubsystem.generated.h"

class UIGS_VoiceoverGroupController;
class UIGS_VoiceoverSubsystemDataAsset;

UCLASS(BlueprintType)
class BF_VOICEOVER_API UIGS_VoiceoverSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_DialogueLineEvent OnDialogueLineVoiceStart;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_DialogueLineEvent OnDialogueLineVoiceEnd;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_DialogueSwapPlayerEvent OnBeforeSwapPlayerFinishEvent;
    
protected:
    UPROPERTY(Transient)
    UIGS_VoiceoverSubsystemDataAsset* Data;
    
    UPROPERTY()
    TMap<FIGS_VoiceoverControllerKey, UIGS_VoiceoverGroupController*> VoiceoverControllers;
    
public:
    UIGS_VoiceoverSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetSecondPlanner(FIGS_DialogueGroupCharacterHolder inCharacterHolder);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalCharacter(FIGS_DialogueGroupCharacterHolder inCharacterHolder);
    
    UFUNCTION(BlueprintPure)
    uint8 GetGlobalCharacter(EIGS_DialogueSpeaker inSpeaker) const;
    
};

