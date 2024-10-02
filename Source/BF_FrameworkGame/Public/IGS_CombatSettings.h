#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_MeleeSettingsDef.h"
#include "IGS_PushForTargetSettingsDef.h"
#include "IGS_CombatSettings.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_CombatSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_CombatSettings();

protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIGS_PushForTargetSettingsDef PushForTargetSettings;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIGS_MeleeSettingsDef MeleeSettings;

};
