#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "IGS_BuiltDataWorldSetting.h"
#include "IGS_LightingScenarioWorldSettings.h"
#include "IGS_WorldSettingsExtension.generated.h"

UCLASS()
class BF_LEVELGENERATOR_API AIGS_WorldSettingsExtension : public AWorldSettings {
    GENERATED_BODY()
public:
    AIGS_WorldSettingsExtension(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditAnywhere)
    FIGS_BuiltDataWorldSetting LightingBuildSettings;
    
    UPROPERTY(EditAnywhere)
    FIGS_LightingScenarioWorldSettings LightingScenarioWorldSettings;
    
};

