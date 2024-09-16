#include "IGS_DialogueCameraOverride.h"

FIGS_DialogueCameraOverride::FIGS_DialogueCameraOverride() {
    (*this).DialogueID = FText::GetEmpty();
    (*this).TranscriptCameras = {};
    (*this).TranscriptDelayes = {};
    (*this).TranscriptPoseAnimation = {};
}
