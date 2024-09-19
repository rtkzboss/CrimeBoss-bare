#include "IGS_MetaDialogueTranscript.h"

FIGS_MetaDialogueTranscript::FIGS_MetaDialogueTranscript() {
    (*this).SpeakerSlot = EIGS_MetaDialogueCharacterSlot::None;
    (*this).LineID = NAME_None;
    (*this).CharactersPose = TMap<EIGS_MetaDialogueCharacterSlot, EIGS_MetaCutsceneCharacterPose>{};
}
