#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueSpeaker.h"
#include "IGS_DialogueTranscript.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueTranscript {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_DialogueSpeaker Speaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName LineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDisabled;
    
    FIGS_DialogueTranscript();
};

