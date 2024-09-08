#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_MetaCutsceneNodeOption.h"
#include "IGS_MetaCutsceneNode.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HasFullSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SequenceSkipTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DialogueID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ChoiceText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DefaultOptionIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTag> ChoiceTextTagParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_MetaCutsceneNodeOption> Options;
    
    FIGS_MetaCutsceneNode();
};

