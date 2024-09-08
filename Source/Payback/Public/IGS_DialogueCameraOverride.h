#pragma once
#include "CoreMinimal.h"
#include "IGS_DialoguePoseAnimationOverride.h"
#include "IGS_DialogueCameraOverride.generated.h"

class ACineCameraActor;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_DialogueCameraOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FText DialogueID;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<ACineCameraActor*> TranscriptCameras;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<float> TranscriptDelayes;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<FIGS_DialoguePoseAnimationOverride> TranscriptPoseAnimation;
    
    FIGS_DialogueCameraOverride();
};

