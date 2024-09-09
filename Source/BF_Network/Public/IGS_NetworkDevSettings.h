#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_NetworkDevSettings.generated.h"

class UIGS_ComponentDialogueDataAsset;
class UIGS_ComponentVoiceExpressionDataAsset;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_NetworkSettings")
class BF_NETWORK_API UIGS_NetworkDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_NetworkDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_ComponentDialogueDataAsset> DialogueComponentDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_ComponentVoiceExpressionDataAsset> VoiceExpressionComponentDataAsset;
    
};

