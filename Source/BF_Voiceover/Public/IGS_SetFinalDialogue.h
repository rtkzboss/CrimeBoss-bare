#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueAsyncActionInterface.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_FinalDialogueDelegate.h"
#include "IGS_SetFinalDialogue.generated.h"

class AActor;
class UObject;

UCLASS()
class BF_VOICEOVER_API UIGS_SetFinalDialogue : public UBlueprintAsyncActionBase, public IIGS_DialogueAsyncActionInterface {
    GENERATED_BODY()
public:
    UIGS_SetFinalDialogue();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_SetFinalDialogue* SetFinalDialogue(UObject* inWCO, FText DialogueID, AActor* Character);

    UPROPERTY(BlueprintAssignable)
    FIGS_FinalDialogueDelegate DialogueFinished;


    // Fix for true pure virtual functions not being implemented
};
