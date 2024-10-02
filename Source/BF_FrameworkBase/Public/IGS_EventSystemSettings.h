#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_EventSystemSettings.generated.h"

class UDataTable;

UCLASS(DefaultConfig, Config=Game)
class BF_FRAMEWORKBASE_API UIGS_EventSystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_EventSystemSettings();

    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> EventsDataTable;

};
