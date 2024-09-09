#pragma once
#include "CoreMinimal.h"
#include "IGS_FrameworkGameDevSettings_Base.h"
#include "IGS_FrameworkGameDevSettings_Utilities.generated.h"

class UIGS_LevelBlockingBoundsSettings;
class UIGS_PressureManagerData;
class UIGS_WaveManagerData;
class UMaterialInterface;
class UMaterialParameterCollection;
class USoundBase;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_FrameworkGameDevSettings_Utilities : public UIGS_FrameworkGameDevSettings_Base {
    GENERATED_BODY()
public:
    UIGS_FrameworkGameDevSettings_Utilities();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> UnderWaterClearMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> UnderWaterDeepBlueMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> UnderWaterLakeMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<USoundBase> UnderWaterLoopSound;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_LevelBlockingBoundsSettings> LevelBlockingBoundsSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_WaveManagerData> WaveManagerData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_PressureManagerData> PressureManagerData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialParameterCollection> WeatherMPC;
    
};

