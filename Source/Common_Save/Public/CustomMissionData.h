#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "CommonMissionDataBase.h"
#include "EIGS_MenuCategory.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_LightingScenarioType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EMETA_Heat.h"
#include "IGS_Meta2FPS_Data.h"
#include "CustomMissionData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FCustomMissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_Meta2FPS_Data MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCommonMissionDataBase CommonMissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HubBackdropTypes DistrictVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Scenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_LightingScenarioType LightingScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DebugOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCommonHeisterData SelectedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AmountOfBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_CharacterID> SpecificBotIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Heat Heat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_MenuCategory MissionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ScenarioDifficulty MissionDifficulty;
    
    FCustomMissionData();
};

