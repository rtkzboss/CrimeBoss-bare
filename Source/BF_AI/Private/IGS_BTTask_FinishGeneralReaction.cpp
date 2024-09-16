#include "IGS_BTTask_FinishGeneralReaction.h"

UIGS_BTTask_FinishGeneralReaction::UIGS_BTTask_FinishGeneralReaction() {
    (*this).bSuccess = true;
    (*this).BlackboardKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("FinishGeneralReaction");
}

