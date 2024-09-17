#include "IGS_DialogueLevelName.h"
#include "EIGS_DialogueGroup.h"

FIGS_DialogueLevelName::FIGS_DialogueLevelName() {
    (*this).LevelTag = FGameplayTag();
    (*this).LevelNames = {};
    (*this).LevelCharacters = {};
    (*this).BlacklistOption = EIGS_DialogueBlacklistOption::NoBlacklist;
    (*this).BlacklistLevelNames = {};
    (*this).BlacklistAlwaysEnabled = false;
    (*this).BlacklistDefaultLevelsPreload = false;
    (*this).UseDefaultLevelsPreload = true;
    (*this).UseDefaultCharactersPreload = true;
    (*this).DefaultPlanner.DialogueGroup = EIGS_DialogueGroup::Heister;
    (*this).DefaultPlanner.DialogueCharacter = 2;
    (*this).SecondPlanner.DialogueGroup = EIGS_DialogueGroup::Heister;
    (*this).SecondPlanner.DialogueCharacter = 1;
}
