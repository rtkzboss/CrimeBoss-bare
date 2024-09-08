#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogueSubtitleEnabledEventDelegate.h"
#include "DialogueSubtitleInsertEventDelegate.h"
#include "DialogueSubtitleRemoveEventDelegate.h"
#include "DialogueTestSubtitleInsertEventDelegate.h"
#include "EIGS_SubtitleType.h"
#include "IGS_SubtitleData.h"
#include "IGS_SubtitleManager.generated.h"

class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_VOICEOVER_API UIGS_SubtitleManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDialogueTestSubtitleInsertEvent OnDialogueTestSubtitleInsertEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDialogueSubtitleInsertEvent OnDialogueSubtitleInsertEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDialogueSubtitleRemoveEvent OnDialogueSubtitleClearEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDialogueSubtitleEnabledEvent OnDialogueSubtitleEnabledEvent;
    
    UIGS_SubtitleManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ShowDialogueTestSubtitle(const UObject* inWCO, const FString& inDialogueText);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueSubtitleEnabled(bool inState, EIGS_SubtitleType inSubtitleType);
    
    UFUNCTION(BlueprintCallable)
    void InsertDialogueSubtitle(const FIGS_SubtitleData& inSubtitleData);
    
    UFUNCTION(BlueprintCallable)
    void ClearDialogueSubtitle(EIGS_SubtitleType inSubtitleType);
    
    UFUNCTION(BlueprintCallable)
    void ClearAndDisableAllSubtitles();
    
};

