#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_MeleeSettingsDef.h"
#include "IGS_PushForTargetSettingsDef.h"
#include "IGS_CombatSettingsManager.generated.h"

class UIGS_CombatSettings;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_CombatSettingsManager : public UObject {
    GENERATED_BODY()
public:
    UIGS_CombatSettingsManager();

    UFUNCTION(BlueprintPure)
    FIGS_PushForTargetSettingsDef GetPushForTargetSettingsDef() const;

    UFUNCTION(BlueprintPure)
    FIGS_MeleeSettingsDef GetMeleeSettingsDef() const;

    UPROPERTY(BlueprintReadOnly)
    UIGS_CombatSettings* CombatSettings;

};
