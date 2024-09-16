#include "META_FinishedInnerTaskInfoSave.h"
#include "EMETA_TaskStatus.h"

FMETA_FinishedInnerTaskInfoSave::FMETA_FinishedInnerTaskInfoSave() {
    (*this).TaskClass = nullptr;
    (*this).Info.Title = FText::GetEmpty();
    (*this).Info.CurrentValue = 0;
    (*this).Info.NeedValue = 0;
    (*this).Info.Status = EMETA_TaskStatus::None;
    (*this).Info.bOptional = false;
}
