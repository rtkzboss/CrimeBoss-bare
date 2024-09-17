#include "META_CutsceneUIData.h"

FMETA_CutsceneUIData::FMETA_CutsceneUIData() {
    (*this).ID = FText::GetEmpty();
    (*this).CutsceneChoiceTagParams = {};
    (*this).Partner = EMETA_Partner::None;
    (*this).CanStartDelayed = false;
    (*this).ShouldExpire = false;
    (*this).DaysToExpire = 0;
    (*this).ScreenAfterEnd = FGameplayTag();
    (*this).DebugText = FText::GetEmpty();
    (*this).GraphRef = nullptr;
    (*this).OriginalID = 0;
    (*this).ResultEdgeMap = {};
    (*this).ExpiredID = 0;
}
