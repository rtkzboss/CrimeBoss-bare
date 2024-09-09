#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "XeSSSettings.generated.h"

UCLASS(DefaultConfig, Config=Engine)
class XESSPLUGIN_API UXeSSSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UXeSSSettings();

    UPROPERTY(Config, EditAnywhere)
    bool bEnableXeSSInEditorViewports;
    
    UPROPERTY(Config, EditAnywhere)
    FString DebugDataDumpPath;
    
};

