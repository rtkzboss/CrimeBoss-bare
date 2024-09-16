#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_PaybackDefinitionsDevSettings.generated.h"

class UIGS_MissionNamesDatabase;
class UMETA_BossLevelData;
class UMETA_CommonData;
class UMETA_DebugData;
class UMETA_GenericCharactersNames;
class UMETA_GraphsData;
class UMETA_TurfWarData;
class UMETA_VoiceoverDialogueSettings;
class UPaybackCoreMapsData;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_PaybackDefinitionsSettings")
class PAYBACKDEFINITIONS_API UIGS_PaybackDefinitionsDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_PaybackDefinitionsDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UPaybackCoreMapsData> CoreMapsDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMETA_BossLevelData> MetaBossLevelDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMETA_CommonData> MetaCommonDataDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMETA_DebugData> MetaDebugDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMETA_GraphsData> MetaGraphsDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMETA_TurfWarData> MetaTurfWarDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMETA_VoiceoverDialogueSettings> MetaVODialogueSettingsDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_MissionNamesDatabase> MissionNamesDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMETA_GenericCharactersNames> GenericCharactersNamesDataAsset;

};
