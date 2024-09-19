#include "IGS_ChallengesSaveData.h"

FIGS_ChallengesSaveData::FIGS_ChallengesSaveData() {
    (*this).ChallengesInProgress = TMap<FGameplayTag, int32>{};
    (*this).CompletedChallenges = TMap<FGameplayTag, int32>{};
}
