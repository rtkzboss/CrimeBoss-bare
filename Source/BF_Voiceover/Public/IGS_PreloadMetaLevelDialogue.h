#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "IGS_MetaDialogueDelegateDelegate.h"
#include "IGS_PreloadMetaLevelDialogue.generated.h"

class UIGS_PreloadMetaLevelDialogue;
class UObject;

UCLASS()
class BF_VOICEOVER_API UIGS_PreloadMetaLevelDialogue : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueDelegate PreloadFinished;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueDelegate PreloadCanceled;
    
    UIGS_PreloadMetaLevelDialogue();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PreloadMetaLevelDialogue* PreloadMetaLevelDialogues(UObject* inWCO, FText DialogueID, UPARAM(Ref) TArray<EIGS_MetaDialogueCharacter>& inCharacters);
    
    UFUNCTION()
    void FinishPreload();
    
};

