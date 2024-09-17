#include "META_PlanningBoardItemConnectionData.h"

FMETA_PlanningBoardItemConnectionData::FMETA_PlanningBoardItemConnectionData() {
    (*this).ToItemGameplayTag = FGameplayTag();
    (*this).FromSocketName = NAME_None;
    (*this).FromConnectionStaticMesh = FSoftObjectPath();
    (*this).ToSocketName = NAME_None;
    (*this).ToConnectionStaticMesh = FSoftObjectPath();
    (*this).ThreadColor.R = 1.000000000e+00f;
    (*this).ThreadColor.G = 0.000000000e+00f;
    (*this).ThreadColor.B = 0.000000000e+00f;
    (*this).ThreadColor.A = 1.000000000e+00f;
}
