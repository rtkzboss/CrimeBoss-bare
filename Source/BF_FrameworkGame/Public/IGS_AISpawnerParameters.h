#pragma once
#include "CoreMinimal.h"
#include "IGS_SettingsID.h"
#include "Templates/SubclassOf.h"
#include "IGS_AISpawnerParameters.generated.h"

USTRUCT()
struct FIGS_AISpawnerParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UIGS_SettingsID> SettingsOverride;

    BF_FRAMEWORKGAME_API FIGS_AISpawnerParameters();
};
