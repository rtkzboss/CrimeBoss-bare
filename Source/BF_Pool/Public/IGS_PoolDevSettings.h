#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_PoolDevSettings.generated.h"

class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_PoolSettings")
class BF_POOL_API UIGS_PoolDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_PoolDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> PoolItemsDataTable;
    
};

