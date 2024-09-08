#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "XeSSSettings.generated.h"

UCLASS(DefaultConfig, Config=Inherit)
class XESSPLUGIN_API UXeSSSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableXeSSInEditorViewports;
    
    UPROPERTY(Config, EditAnywhere)
    FString DebugDataDumpPath;
    
    UXeSSSettings();

};

