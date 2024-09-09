#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "Engine/DeveloperSettings.h"
#include "EMETA_ItemQuality.h"
#include "IGS_UITileQualityColors.h"
#include "IGS_GameUISettings.generated.h"

class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class BF_FRAMEWORKGAME_API UIGS_GameUISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_GameUISettings();

    UPROPERTY(Config, EditAnywhere)
    TArray<EIGS_InputAction> AllowedMenuInputActions;
    
    UPROPERTY(Config, EditAnywhere)
    float LeftThumbstickMenuThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EMETA_ItemQuality, FIGS_UITileQualityColors> UITileQualityColors;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> ChatWheelDataTable;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ChatWheelActionLimit;
    
    UPROPERTY(Config, EditAnywhere)
    float ChatWheelActionLimitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float ChatWheelCooldownTime;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float IconVisibilityDuration;
    
};

