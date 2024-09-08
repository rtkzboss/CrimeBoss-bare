#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_SettingsChangedEventDelegate.h"
#include "IGS_SettingsBase.generated.h"

UCLASS(Abstract, Config=GameUserSettings)
class BF_SETTINGS_API UIGS_SettingsBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_SettingsChangedEvent OnSettingsChanged;
    
protected:
    UPROPERTY(Config)
    bool bSettingsValid;
    
public:
    UIGS_SettingsBase();

};

