#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_VoiceoverDevSettings.generated.h"

class UAkAudioEvent;
class UDataAsset;
class UDataTable;
class UIGS_MetaDialogueSubsystemDataAsset;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_VoiceoverSettings")
class BF_VOICEOVER_API UIGS_VoiceoverDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> DialogueHeisterCharacterDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> DialogueHeisterCooldownDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataAsset> VoiceoverSubsystemDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> LevelDialoguesDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> LevelLinesDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> MetaDialoguePlayAkEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_MetaDialogueSubsystemDataAsset> MetaDialogueSystemDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> MetaCutsceneLevelLinesDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> MetaCutsceneLevelDialoguesDataTable;
    
    UIGS_VoiceoverDevSettings();

};

