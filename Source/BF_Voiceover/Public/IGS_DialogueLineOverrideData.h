#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueLineOverrideData.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueLineOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ReadyToSaveToDatabase;
    
    FIGS_DialogueLineOverrideData();
};

