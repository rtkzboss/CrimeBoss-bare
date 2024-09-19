#include "IGS_MetaCutsceneCharacterPoseSet.h"

FIGS_MetaCutsceneCharacterPoseSet::FIGS_MetaCutsceneCharacterPoseSet() {
    (*this).CharacterPoses = TMap<EIGS_MetaDialogueCharacterSlot, FGameplayTagContainer>{};
}
