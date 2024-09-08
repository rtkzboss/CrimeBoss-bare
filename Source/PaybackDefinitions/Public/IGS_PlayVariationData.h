#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_PlayVariationData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_PlayVariationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint16 GroupID;
    
    UPROPERTY()
    FName LineID;
    
    UPROPERTY()
    FIGS_DialogueGroupCharacterHolder Character;
    
    UPROPERTY()
    float VoiceProgress;
    
    UPROPERTY()
    float VoiceLength;
    
    UPROPERTY()
    uint8 VariationID;
    
    UPROPERTY()
    int8 VoiceMediaID;
    
    UPROPERTY()
    bool IsTTSVoice;
    
    UPROPERTY()
    bool PlayExtraStart;
    
    UPROPERTY()
    bool PlayExtraFinish;
    
    UPROPERTY()
    bool IsImportant;
    
    UPROPERTY()
    bool ShouldReplicate;
    
    FIGS_PlayVariationData();
};

