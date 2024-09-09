#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_AIWaypointMaterialsDevSettings.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_AIWaypointsSettings")
class BF_FRAMEWORKBASE_API UIGS_AIWaypointMaterialsDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_AIWaypointMaterialsDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> TeamFlagCivilianMat;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> TeamFlagEmployeeMat;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> TeamFlagGuardMat;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> TeamFlagCopMat;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> TeamFlagSwatMat;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> TeamFlagHeisterMat;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> TeamFlagGangsterMat;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> TeamFlagBackupMat;
    
};

