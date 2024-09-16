#pragma once
#include "CoreMinimal.h"
#include "EIGS_FPSDifficulty.h"
#include "IGS_PlayerCountBotDamageReceivedModifierDef.h"
#include "IGS_PlayerCountBotDamageReceivedModifierPerDifficultyDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_PlayerCountBotDamageReceivedModifierPerDifficultyDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    TMap<EIGS_FPSDifficulty, FIGS_PlayerCountBotDamageReceivedModifierDef> Difficulties;

    FIGS_PlayerCountBotDamageReceivedModifierPerDifficultyDef();
};
