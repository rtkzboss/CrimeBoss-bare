#include "IGS_VoiceoverSubsystem.h"

UIGS_VoiceoverSubsystem::UIGS_VoiceoverSubsystem() {
    (*this).VoiceoverControllers = TMap<FIGS_VoiceoverControllerKey, UIGS_VoiceoverGroupController*>{};
}

void UIGS_VoiceoverSubsystem::SetSecondPlanner(FIGS_DialogueGroupCharacterHolder inCharacterHolder) {
}

void UIGS_VoiceoverSubsystem::SetGlobalCharacter(FIGS_DialogueGroupCharacterHolder inCharacterHolder) {
}

uint8 UIGS_VoiceoverSubsystem::GetGlobalCharacter(EIGS_DialogueSpeaker inSpeaker) const {
    return 0;
}

