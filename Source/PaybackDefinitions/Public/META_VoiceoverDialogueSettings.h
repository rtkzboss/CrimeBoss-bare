#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "META_VODialoguesCommonTypeSettings.h"
#include "META_VoiceoverDialogueSettings.generated.h"

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_VoiceoverDialogueSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UMETA_VoiceoverDialogueSettings();

    UFUNCTION(BlueprintPure)
    FMETA_VODialoguesCommonTypeSettings GetTypeSettings(FGameplayTag inType);
    
    UFUNCTION(BlueprintPure)
    float GetDelayAfterScreenSwitch();
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float DelayAfterScreenSwitch;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DefaultTypePriority;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultTypeChance;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FMETA_VODialoguesCommonTypeSettings> CommonTypeSettings;
    
};

