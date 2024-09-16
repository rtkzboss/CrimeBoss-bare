#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "MapToTestInfo.h"
#include "IGS_TestRunnerSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class ST_FRAMEWORK_API UIGS_TestRunnerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_TestRunnerSettings();

    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FMapToTestInfo> PriorityMapsToTest;

};
