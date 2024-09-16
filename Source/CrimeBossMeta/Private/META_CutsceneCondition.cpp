#include "META_CutsceneCondition.h"

UMETA_CutsceneCondition::UMETA_CutsceneCondition() {
    (*this).CutsceneID = FText::FromString(TEXT("ID_None"));
    (*this).ExpireTimerDays = 1;
    (*this).CutsceneDataAsset = FSoftObjectPath();
}

FText UMETA_CutsceneCondition::GetCutsceneID() {
    return FText::GetEmpty();
}


