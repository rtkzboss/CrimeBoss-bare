#include "IGS_PlayerCountBotDamageReceivedModifierPerDifficultyDef.h"

FIGS_PlayerCountBotDamageReceivedModifierPerDifficultyDef::FIGS_PlayerCountBotDamageReceivedModifierPerDifficultyDef() {
    (*this).Difficulties = TMap<EIGS_FPSDifficulty, FIGS_PlayerCountBotDamageReceivedModifierDef>{};
}
