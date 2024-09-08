#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_GUIDevSettings.generated.h"

class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_GUISettings")
class BF_GUI_API UIGS_GUIDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> HUDDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> WorldWidgetDataTable;
    
    UIGS_GUIDevSettings();

};

