#include "META_FinishedGoal.h"

FMETA_FinishedGoal::FMETA_FinishedGoal() {
    (*this).ID = nullptr;
    (*this).GoalResult = EMETA_GoalStatus::None;
    (*this).ActionCards = TArray<FMETA_ActionCardGraph>{};
    (*this).SelectedActionCardNumber = 0;
}
