#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_AIDevSettings.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_AISettings")
class BF_AI_API UIGS_AIDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> VehicleGroupDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> MovableVehicleGroupDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> GeneralReactionDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> BotOrderDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> VehicleDestinationAreaPointSprite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> VehicleDestinationAreaPointSprite_Disabled;
    
    UIGS_AIDevSettings();

};

