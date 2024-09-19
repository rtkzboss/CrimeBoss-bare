#include "IGS_DialoguePoseAnimationOverride.h"

FIGS_DialoguePoseAnimationOverride::FIGS_DialoguePoseAnimationOverride() {
    (*this).PoseAnimations = TMap<EIGS_MetaDialogueCharacterSlot, UAnimMontage*>{};
}
