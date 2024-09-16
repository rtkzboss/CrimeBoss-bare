#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_SettingsChangedEvent.h"
#include "IGS_SettingsBase.generated.h"

UCLASS(Abstract, Config=GameUserSettings)
class BF_SETTINGS_API UIGS_SettingsBase : public UObject {
    GENERATED_BODY()
public:
    UIGS_SettingsBase();

    UPROPERTY(BlueprintAssignable)
    FIGS_SettingsChangedEvent OnSettingsChanged;

protected:
    UPROPERTY(Config)
    bool bSettingsValid;

};
