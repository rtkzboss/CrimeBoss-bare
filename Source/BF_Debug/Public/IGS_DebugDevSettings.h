#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_DebugDevSettings.generated.h"

class UIGS_DebugSubsystemBlueprint;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_DebugSettings")
class BF_DEBUG_API UIGS_DebugDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UIGS_DebugSubsystemBlueprint> DamageSubsystemBlueprint;
    
    UIGS_DebugDevSettings();

};

