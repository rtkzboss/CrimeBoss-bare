#include "IGS_ChainMissionStep.h"

FIGS_ChainMissionStep::FIGS_ChainMissionStep() {
    (*this).PossibleMissions = TArray<FIGS_ChainMissionEntry>{};
    (*this).PostMissionActions = TArray<FIGS_ChainAction>{};
}
