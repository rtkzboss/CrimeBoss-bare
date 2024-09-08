#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_AIWaypointTexturesDevSettings.generated.h"

class UTexture2D;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_AIWaypointsSettings")
class BF_FRAMEWORKBASE_API UIGS_AIWaypointTexturesDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> TargetSprite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> PatrolPointSprite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> SniperPointSprite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> DefendPointSprite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> PatrolGroupSprite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> ScriptPointSprite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> ControlRoomSprite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> SmartObjectSprite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> WaypointConnectionSprite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> FlagLockedSprite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> FlagInfiniteSprite;
    
    UIGS_AIWaypointTexturesDevSettings();

};

