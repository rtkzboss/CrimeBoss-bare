#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueDiscard.h"
#include "EIGS_DialogueSuspicionState.h"
#include "IGS_TriggerDialogueData.h"
#include "IGS_VoiceMediaInfo.h"
#include "IGS_DialogueVariationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_DialogueVariationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 VariantID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_DialogueDiscard DiscardRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_DialogueSuspicionState SuspicionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LevelRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanPlaySingle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_VoiceMediaInfo> VoicesMedia;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_VoiceMediaInfo> VoicesMediaList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_VoiceMediaInfo> CensoredMediaList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsTTS;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FacialAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SubtitleKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SubtitleKeyEng;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CustomCharacterName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_TriggerDialogueData TriggerDialogue;
    
    BF_VOICEOVER_API FIGS_DialogueVariationData();
};

