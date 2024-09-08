#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueGroup.h"
#include "IGS_TriggerDialogueData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_TriggerDialogueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_DialogueGroup Group;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName DialogueID;
    
    BF_VOICEOVER_API FIGS_TriggerDialogueData();
};

