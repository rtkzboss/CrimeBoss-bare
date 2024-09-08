#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_DialogueSpeakerKey.h"
#include "IGS_DialogueLevelName.h"
#include "IGS_DialogueLineOverrideData.h"
#include "IGS_DialogueOverrideData.h"
#include "IGS_DialogueOverrideDataKey.h"
#include "IGS_VoiceoverSubsystemDataAsset.generated.h"

UCLASS(BlueprintType)
class BF_VOICEOVER_API UIGS_VoiceoverSubsystemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> PreloadLevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_DialogueGroupCharacterHolder> PreloadCharacters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_DialogueLevelName> LevelNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> BlacklistLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FIGS_DialogueOverrideDataKey, FIGS_DialogueOverrideData> OverrideDialogueData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FIGS_DialogueOverrideDataKey, FIGS_DialogueLineOverrideData> OverrideLineData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FIGS_DialogueSpeakerKey, FLinearColor> SpeakerSubtitleColors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FLinearColor> HeisterSpeakerSubtitleColors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FText> CharacterNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_DialogueGroupCharacterHolder> DebugRestrictedCharacters;
    
    UIGS_VoiceoverSubsystemDataAsset();

};

