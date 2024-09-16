#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_MetaCutsceneNodeAction.h"
#include "EIGS_CutsceneChoiceVisibility.h"
#include "IGS_MetaCutsceneConditionSetup.h"
#include "IGS_MetaCutsceneNodeOption.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneNodeOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MetaCutsceneNodeAction Action;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NodeName;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ResultTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HasFullSequence;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FullSequence;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText EndDialogueID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ChoiceSelectionSound;

    UPROPERTY(EditAnywhere)
    EIGS_CutsceneChoiceVisibility ChoiceVisibility;

    UPROPERTY(EditAnywhere)
    EIGS_CutsceneChoiceVisibility ChoiceVisibilityConditionFail;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FIGS_MetaCutsceneConditionSetup> ChoiceVisibilityConditions;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ValueTag;

    UPROPERTY(BlueprintReadOnly, Transient)
    float PriceValue;

    UPROPERTY(BlueprintReadOnly, Transient)
    EIGS_CutsceneChoiceVisibility VisibilityValue;

    FIGS_MetaCutsceneNodeOption();
};
