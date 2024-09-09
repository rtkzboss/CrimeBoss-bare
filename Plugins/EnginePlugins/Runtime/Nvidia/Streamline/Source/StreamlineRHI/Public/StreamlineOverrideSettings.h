#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStreamlineSettingOverride.h"
#include "StreamlineOverrideSettings.generated.h"

UCLASS(ProjectUserConfig, Config=Engine)
class STREAMLINERHI_API UStreamlineOverrideSettings : public UObject {
    GENERATED_BODY()
public:
    UStreamlineOverrideSettings();

    UPROPERTY(Config, EditAnywhere)
    EStreamlineSettingOverride EnableDLSSFGInPlayInEditorViewportsOverride;
    
    UPROPERTY(Config, EditAnywhere)
    EStreamlineSettingOverride LoadDebugOverlayOverride;
    
};

