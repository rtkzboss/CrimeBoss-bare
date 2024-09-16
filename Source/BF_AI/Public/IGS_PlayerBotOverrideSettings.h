#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableClass.h"
#include "IGS_PlayerBotSettings.h"
#include "IGS_PlayerBotOverrideSettings.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_PlayerBotOverrideSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EIGS_WieldableClass ForItemClass;

    UPROPERTY(EditAnywhere)
    FIGS_PlayerBotSettings PlayerBotSettings;

    FIGS_PlayerBotOverrideSettings();
};
