#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueOverrideData.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ReadyToSaveToDatabase;
    
    FIGS_DialogueOverrideData();
};

