#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "IGS_MetaDialogueDelegate.h"
#include "IGS_PreloadMetaLevelDialogue.generated.h"

class UObject;

UCLASS()
class BF_VOICEOVER_API UIGS_PreloadMetaLevelDialogue : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_PreloadMetaLevelDialogue();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PreloadMetaLevelDialogue* PreloadMetaLevelDialogues(UObject* inWCO, FText DialogueID, UPARAM(Ref) TArray<EIGS_MetaDialogueCharacter>& inCharacters);

    UFUNCTION()
    void FinishPreload();

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueDelegate PreloadFinished;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaDialogueDelegate PreloadCanceled;

};
