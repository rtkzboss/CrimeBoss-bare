#include "IGS_MissionObjective.h"

FIGS_MissionObjective::FIGS_MissionObjective() {
    (*this).ID = -1;
    (*this).TaskIDs = TArray<int32>{};
    (*this).ObjectiveState = EIGS_ObjectiveState::Active;
    (*this).ObjectiveName = FText::GetEmpty();
    (*this).bInitialized = false;
    (*this).bArchived = false;
    (*this).bSimpleObjective = false;
    (*this).bSimpleObjectiveWatchWhenInactive = false;
    (*this).bFinishWhenInactive = false;
    (*this).OutputDelegate = {};
}
