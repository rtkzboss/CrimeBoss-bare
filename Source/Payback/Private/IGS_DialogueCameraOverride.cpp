#include "IGS_DialogueCameraOverride.h"

FIGS_DialogueCameraOverride::FIGS_DialogueCameraOverride() {
    (*this).DialogueID = FText::GetEmpty();
    (*this).TranscriptCameras = TArray<ACineCameraActor*>{};
    (*this).TranscriptDelayes = TArray<float>{};
    (*this).TranscriptPoseAnimation = TArray<FIGS_DialoguePoseAnimationOverride>{};
}
