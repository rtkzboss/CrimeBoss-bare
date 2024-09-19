#include "IGS_CharacterMissionProgress.h"

FIGS_CharacterMissionProgress::FIGS_CharacterMissionProgress() {
    (*this).MissionsStatuses = TMap<FGameplayTag, EMETA_JobResult>{};
    (*this).Completed = false;
}
