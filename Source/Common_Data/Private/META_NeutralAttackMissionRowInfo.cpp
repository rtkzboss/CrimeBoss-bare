#include "META_NeutralAttackMissionRowInfo.h"

FMETA_NeutralAttackMissionRowInfo::FMETA_NeutralAttackMissionRowInfo() {
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Picture = FSoftObjectPath();
    (*this).MapIconOverride = FSoftObjectPath();
}
