#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaCutsceneCharacterPose.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "IGS_MetaDialogueTranscript.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_MetaDialogueTranscript {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MetaDialogueCharacterSlot SpeakerSlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName LineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EIGS_MetaDialogueCharacterSlot, EIGS_MetaCutsceneCharacterPose> CharactersPose;
    
    FIGS_MetaDialogueTranscript();
};

