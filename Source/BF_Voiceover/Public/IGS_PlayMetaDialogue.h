#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "IGS_MetaDialogueDelegateDelegate.h"
#include "IGS_MetaDialogueLineDelegateDelegate.h"
#include "IGS_PlayMetaDialogue.generated.h"

class UIGS_PlayMetaDialogue;
class UObject;

UCLASS()
class BF_VOICEOVER_API UIGS_PlayMetaDialogue : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_PlayMetaDialogue();

    UFUNCTION()
    void StartDialogueLine(FName inLineID, EIGS_MetaDialogueCharacterSlot inSlot, int32 inLineOrderID, int32 inLinesCount, float inLineLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PlayMetaDialogue* PlayMetaDialogue(UObject* inWCO, FText DialogueID, UPARAM(Ref) TMap<EIGS_MetaDialogueCharacterSlot, EIGS_MetaDialogueCharacter>& inCharacters);
    
    UFUNCTION()
    void FinishDialogueLine(FName inLineID, EIGS_MetaDialogueCharacterSlot inSlot, int32 inLineOrderID, int32 inLinesCount, float inLineLength);
    
    UFUNCTION()
    void FinishDialogue();
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueLineDelegate DialogueLineStarted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueLineDelegate DialogueLineFinished;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueDelegate DialogueFinished;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueDelegate DialogueCanceled;
    
};

